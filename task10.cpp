#include <stdio.h>

int main() {
  int n = 7, two = 3, four = 6, six = 9, a, b, c;

  printf("A\tA+3\tA+6\tA+9\n");

  while ( n <= 45 ) {
    printf("%d\t", n );
    a = n + two;
    printf("%d\t", a );
    b = n + four;
    printf("%d\t", b );
    c = n + six;
    printf("%d\n", c );
    n += 7;
  }

  return 0;
}
