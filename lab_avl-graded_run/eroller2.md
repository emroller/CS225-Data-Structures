


## Score: 40/50 (80.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==1072== Memcheck, a memory error detector
==1072== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1072== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1072== Command: ./test -r xml "test_find"
==1072== 
==1072== 
==1072== HEAP SUMMARY:
==1072==     in use at exit: 0 bytes in 0 blocks
==1072==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==1072== 
==1072== All heap blocks were freed -- no leaks are possible
==1072== 
==1072== For counts of detected and suppressed errors, rerun with: -v
==1072== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="5" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="5" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==1077== Memcheck, a memory error detector
==1077== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1077== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1077== Command: ./test -r xml "test_insert_big"
==1077== 
==1077== 
==1077== HEAP SUMMARY:
==1077==     in use at exit: 0 bytes in 0 blocks
==1077==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==1077== 
==1077== All heap blocks were freed -- no leaks are possible
==1077== 
==1077== For counts of detected and suppressed errors, rerun with: -v
==1077== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="76">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✗ - [0/10] - test_remove_big

- **Points**: 0 / 10

```
==1080== Memcheck, a memory error detector
==1080== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1080== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1080== Command: ./test -r xml "test_remove_big"
==1080== 
==1080== 
==1080== HEAP SUMMARY:
==1080==     in use at exit: 56 bytes in 1 blocks
==1080==   total heap usage: 1,706 allocs, 1,705 frees, 219,624 bytes allocated
==1080== 
==1080== 56 bytes in 1 blocks are definitely lost in loss record 1 of 1
==1080==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==1080==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==1080==    by 0x436099: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:108)
==1080==    by 0x436117: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:110)
==1080==    by 0x436117: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:110)
==1080==    by 0x43615D: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:113)
==1080==    by 0x4357A2: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:102)
==1080==    by 0x4299A8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==1080==    by 0x46A242: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==1080==    by 0x45A996: Catch::TestCase::invoke() const (catch.hpp:10793)
==1080==    by 0x45A8CC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==1080==    by 0x456E26: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==1080== 
==1080== LEAK SUMMARY:
==1080==    definitely lost: 56 bytes in 1 blocks
==1080==    indirectly lost: 0 bytes in 0 blocks
==1080==      possibly lost: 0 bytes in 0 blocks
==1080==    still reachable: 0 bytes in 0 blocks
==1080==         suppressed: 0 bytes in 0 blocks
==1080== 
==1080== For counts of detected and suppressed errors, rerun with: -v
==1080== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="120">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **eroller2** using **9d99552ccffb09f18a88bd5bb76f7da807f0cc71** (from **October 21st 2019, 12:15:00 am**)
