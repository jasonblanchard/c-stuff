int add(int a, int b) {
  return a + b;
}

int apply(int a, int b, int (*fp)(int a, int b)) {
  return fp(a, b);
}

int main() {
  int a  = 44;
  int b = 66;
  int c = apply(a, b, &add);
  return 0;
}
