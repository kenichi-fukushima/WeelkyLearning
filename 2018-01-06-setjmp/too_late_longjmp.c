#include <setjmp.h>
#include <stdio.h>

static jmp_buf env;

void f2() {
  printf("entering f2\n");
}

void f1() {
  printf("entering f1\n");
  if (!setjmp(env)) {
    f2();
  } else {
  }
}

int main(int argc, char **argv) {
  f1();
  longjmp(env, 1);
  return 0;
}
