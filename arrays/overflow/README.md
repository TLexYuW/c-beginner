```bash
gcc -fsanitize=address -g -o arr_buffer_overflow arr_buffer_overflow.c
```

```bash
0
1
2
3
4
=================================================================
==14360==ERROR: AddressSanitizer: stack-buffer-overflow on address 0x7ffcbaf53824 at pc 0x557f0ccec31a bp 0x7ffcbaf537d0 sp 0x7ffcbaf537c0
WRITE of size 4 at 0x7ffcbaf53824 thread T0
    #0 0x557f0ccec319 in bufferOverflowArray .../arr_buffer_overflow.c:11
    #1 0x557f0ccec3e5 in main .../arr_buffer_overflow.c:18
    #2 0x7f832207fd8f in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58
    #3 0x7f832207fe3f in __libc_start_main_impl ../csu/libc-start.c:392
    #4 0x557f0ccec164 in _start (.../arr_buffer_overflow+0x1164)        

Address 0x7ffcbaf53824 is located in stack of thread T0 at offset 52 in frame
    #0 0x557f0ccec238 in bufferOverflowArray .../arr_buffer_overflow.c:5
  This frame has 1 object(s):
    [32, 52) 'arr' (line 6) <== Memory access at offset 52 overflows this variable
HINT: this may be a false positive if your program uses some custom stack unwind mechanism, swapcontext or vfork
      (longjmp and C++ exceptions *are* supported)
SUMMARY: AddressSanitizer: stack-buffer-overflow .../arr_buffer_overflow.c:11 in bufferOverflowArray
Shadow bytes around the buggy address:
  0x1000175e26b0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x1000175e26c0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x1000175e26d0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x1000175e26e0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x1000175e26f0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 f1 f1
=>0x1000175e2700: f1 f1 00 00[04]f3 f3 f3 f3 f3 00 00 00 00 00 00
  0x1000175e2710: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x1000175e2720: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x1000175e2730: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x1000175e2740: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x1000175e2750: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
Shadow byte legend (one shadow byte represents 8 application bytes):
  Addressable:           00
  Partially addressable: 01 02 03 04 05 06 07
  Heap left redzone:       fa
  Freed heap region:       fd
  Stack left redzone:      f1
  Stack mid redzone:       f2
  Stack right redzone:     f3
  Stack after return:      f5
  Stack use after scope:   f8
  Global redzone:          f9
  Global init order:       f6
  Poisoned by user:        f7
  Container overflow:      fc
  Array cookie:            ac
  Intra object redzone:    bb
  ASan internal:           fe
  Left alloca redzone:     ca
  Right alloca redzone:    cb
  Shadow gap:              cc
==14360==ABORTING
```