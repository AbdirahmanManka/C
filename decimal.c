// Set Decimal Precision
#include <stdio.h>
int main() {
  float f = 3.14159265358979323846;
  double d = 3.14159265358979323846;
  long double ld = 3.14159265358979323846;
  printf("Float: %.2f\n", f);
  printf("Double: %.2lf\n", d);
  printf("Long Double: %.2Lf\n", ld);
  return 0;
}