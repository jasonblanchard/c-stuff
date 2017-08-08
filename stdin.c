// if you need to enter structured data with several fields, you’ll want to use scanf().
// If you’re entering a single unstructured string, then fgets() is probably the way to go.

// int age;
// scanf("%i", &age) // Returns the number of values it was able to read
// char first_name[20]
// char last_name[20]
// scanf("%19s %19s", first_name, last_name);

// char food[5];
// fgets(food, sizeof(food), stdin)

// fprintf() prints to a data stream
// fprintf(stdout, "I like Turtles!");
// fprintf(stderr, "Something went wrong :(");

// Redirect spooky.csv as stdin to geo2json, redirect stdout of geo2json to output.json
// ./geo2json < spooky.csv > output.json

// Redirect spooky.csv as stdin to bermuda, pipe output of bermuda as input to geo2json, redirect stdout of geo2json to output.json
// (./bermuda | ./geo2json) < spooky.csv > output.json

#include <stdio.h>

int main() {
  char val[5];
  printf("enter something\n");
  // scanf("%s[^\n]", val);
  fgets(val, 5, stdin);
  printf("You said: %s\n", val);
}
