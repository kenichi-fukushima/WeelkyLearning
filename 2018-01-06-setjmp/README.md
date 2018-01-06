# References
- [setjmp.h - Wikipedia](https://en.wikipedia.org/wiki/Setjmp.h)
- [* The Linux Programming Interface, Chapter 6. Processes](https://www.safaribooksonline.com/library/view/the-linux-programming/9781593272203/ch06.html)
- [SETJMP(3) Linux Programmer's Manual](http://man7.org/linux/man-pages/man3/setjmp.3.html)
- [git://sourceware.org/glibc.git/tree - The GNU C Library](https://sourceware.org/git/?p=glibc.git;a=tree)

# TODOs
- Analyze behavior of programs that have setjmp/longjmp with the debugger.
- Read the source code.
- Explore applications of setjmp/longjmp.

# Summary
- Usages
  - Nonlocal goto
    - Nonlocal == outside of the currently executing function
    - `goto` of C can't go out of the current function.
  - Coroutine??
  - Signal handlers??
- Internals
  - jmp_buf holds
    - program counter register
    - stack pointer register
    - and else
