#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("%d\n", argc);

  for (int i = 0; i < argc; i++) {
    int x;
    if (sscanf(argv[i], "%d", &x) == 1) {
      x += 42;
      printf("x: %d\n", x);
    } else {
      puts("Bad input:");
      puts(argv[i]);
    }
  }

  return 0;
}

