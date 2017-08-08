#include <stdio.h>

// Order matters, needs to match draw_functions below.
enum TYPE {
  SQUARE,
  RECT,
  CIRCLE,
  POLYGON
};

typedef struct Shape {
  int isPolygon;
  enum TYPE type;
} Shape;

void draw_square(Shape* ps) {
  printf("draw_square\n");
}

void draw_rec(Shape* ps) {
  printf("draw_rec\n");
}

void draw_circle(Shape* ps) {
  printf("draw_circle\n");
}

void draw_poly(Shape* ps) {
  printf("draw_poly\n");
}

// draw_functions is an array of pointers to functions whose signature takes a pointer to a shape struct and returns void.
// This works because they are in the same index position as the corresponding enum TYPE. So order matters.
void (* draw_functions[4])(Shape* ps) = { &draw_square, &draw_rec, &draw_circle, &draw_poly };
void (* test)(Shape* ps) = &draw_square;

// typedef void (* draw_functions)(Shape* ps) drawfns; // Type for the array?
// drawfns draw_functions[4] = { &draw_square, &draw_rec, &draw_circle, &draw_poly }; // Instance of the array type?

void draw (Shape* ps) {
  (* draw_functions[ps->type])(ps);
}

int main() {
  Shape s = { 1, CIRCLE };
  draw(&s);
}
