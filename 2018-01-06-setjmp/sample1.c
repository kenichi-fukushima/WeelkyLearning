#include <stdio.h>
#include <setjmp.h>

static jmp_buf buf;

void second(void) {
  printf("second\n");
  longjmp(buf,1);  // jumps back to where setjmp was called - making setjmp now return 1
}

void first(void) {
  second();
  printf("first\n");
}

int main() {   
  if (!setjmp(buf)) {
    // when executed, setjmp returned 0
    first();
  } else  {
    // when longjmp jumps back, setjmp returns 1
    printf("main\n");
  }
  return 0;
}
