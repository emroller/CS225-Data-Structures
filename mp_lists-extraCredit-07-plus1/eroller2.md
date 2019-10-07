


## Score: 52/57 (91.23%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==32332== Memcheck, a memory error detector
==32332== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32332== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32332== Command: ./test -r xml "List::insertFront\ size"
==32332== 
==32332== 
==32332== HEAP SUMMARY:
==32332==     in use at exit: 0 bytes in 0 blocks
==32332==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==32332== 
==32332== All heap blocks were freed -- no leaks are possible
==32332== 
==32332== For counts of detected and suppressed errors, rerun with: -v
==32332== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==32336== Memcheck, a memory error detector
==32336== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32336== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32336== Command: ./test -r xml "List::insertBack\ size"
==32336== 
==32336== 
==32336== HEAP SUMMARY:
==32336==     in use at exit: 0 bytes in 0 blocks
==32336==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==32336== 
==32336== All heap blocks were freed -- no leaks are possible
==32336== 
==32336== For counts of detected and suppressed errors, rerun with: -v
==32336== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==32339== Memcheck, a memory error detector
==32339== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32339== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32339== Command: ./test -r xml "List::insert\ contents"
==32339== 
==32339== 
==32339== HEAP SUMMARY:
==32339==     in use at exit: 0 bytes in 0 blocks
==32339==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==32339== 
==32339== All heap blocks were freed -- no leaks are possible
==32339== 
==32339== For counts of detected and suppressed errors, rerun with: -v
==32339== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [15/15] - List::waterfall

- **Points**: 15 / 15





### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==32347== Memcheck, a memory error detector
==32347== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32347== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32347== Command: ./test -r xml "List::split\ simple"
==32347== 
==32347== 
==32347== HEAP SUMMARY:
==32347==     in use at exit: 0 bytes in 0 blocks
==32347==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==32347== 
==32347== All heap blocks were freed -- no leaks are possible
==32347== 
==32347== For counts of detected and suppressed errors, rerun with: -v
==32347== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="68">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==32352== Memcheck, a memory error detector
==32352== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32352== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32352== Command: ./test -r xml "List::_destroy\ empty\ list"
==32352== 
==32352== 
==32352== HEAP SUMMARY:
==32352==     in use at exit: 0 bytes in 0 blocks
==32352==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==32352== 
==32352== All heap blocks were freed -- no leaks are possible
==32352== 
==32352== For counts of detected and suppressed errors, rerun with: -v
==32352== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="145">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==32356== Memcheck, a memory error detector
==32356== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32356== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32356== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==32356== 
==32356== 
==32356== HEAP SUMMARY:
==32356==     in use at exit: 0 bytes in 0 blocks
==32356==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==32356== 
==32356== All heap blocks were freed -- no leaks are possible
==32356== 
==32356== For counts of detected and suppressed errors, rerun with: -v
==32356== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="156">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==32360== Memcheck, a memory error detector
==32360== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32360== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32360== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==32360== 
==32360== 
==32360== HEAP SUMMARY:
==32360==     in use at exit: 0 bytes in 0 blocks
==32360==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==32360== 
==32360== All heap blocks were freed -- no leaks are possible
==32360== 
==32360== For counts of detected and suppressed errors, rerun with: -v
==32360== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==32364== Memcheck, a memory error detector
==32364== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32364== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32364== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==32364== 
==32364== 
==32364== HEAP SUMMARY:
==32364==     in use at exit: 0 bytes in 0 blocks
==32364==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==32364== 
==32364== All heap blocks were freed -- no leaks are possible
==32364== 
==32364== For counts of detected and suppressed errors, rerun with: -v
==32364== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="173">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==32368== Memcheck, a memory error detector
==32368== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32368== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32368== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==32368== 
==32368== 
==32368== HEAP SUMMARY:
==32368==     in use at exit: 0 bytes in 0 blocks
==32368==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==32368== 
==32368== All heap blocks were freed -- no leaks are possible
==32368== 
==32368== For counts of detected and suppressed errors, rerun with: -v
==32368== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="183">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==32372== Memcheck, a memory error detector
==32372== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32372== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32372== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==32372== 
==32372== 
==32372== HEAP SUMMARY:
==32372==     in use at exit: 0 bytes in 0 blocks
==32372==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==32372== 
==32372== All heap blocks were freed -- no leaks are possible
==32372== 
==32372== For counts of detected and suppressed errors, rerun with: -v
==32372== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="193">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==32376== Memcheck, a memory error detector
==32376== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32376== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32376== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==32376== 
==32376== 
==32376== HEAP SUMMARY:
==32376==     in use at exit: 0 bytes in 0 blocks
==32376==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==32376== 
==32376== All heap blocks were freed -- no leaks are possible
==32376== 
==32376== For counts of detected and suppressed errors, rerun with: -v
==32376== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="205">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==32380== Memcheck, a memory error detector
==32380== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32380== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32380== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==32380== 
==32380== 
==32380== HEAP SUMMARY:
==32380==     in use at exit: 0 bytes in 0 blocks
==32380==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==32380== 
==32380== All heap blocks were freed -- no leaks are possible
==32380== 
==32380== For counts of detected and suppressed errors, rerun with: -v
==32380== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="218">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==32384== Memcheck, a memory error detector
==32384== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32384== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32384== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==32384== 
==32384== 
==32384== HEAP SUMMARY:
==32384==     in use at exit: 0 bytes in 0 blocks
==32384==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==32384== 
==32384== All heap blocks were freed -- no leaks are possible
==32384== 
==32384== For counts of detected and suppressed errors, rerun with: -v
==32384== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==32388== Memcheck, a memory error detector
==32388== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32388== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32388== Command: ./test -r xml "List::insert\ contents\ #2"
==32388== 
==32388== 
==32388== HEAP SUMMARY:
==32388==     in use at exit: 0 bytes in 0 blocks
==32388==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==32388== 
==32388== All heap blocks were freed -- no leaks are possible
==32388== 
==32388== For counts of detected and suppressed errors, rerun with: -v
==32388== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::waterfall simple

- **Points**: 5 / 5

```
==32396== Memcheck, a memory error detector
==32396== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==32396== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==32396== Command: ./test -r xml "List::waterfall\ simple"
==32396== 
==32396== 
==32396== HEAP SUMMARY:
==32396==     in use at exit: 0 bytes in 0 blocks
==32396==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==32396== 
==32396== All heap blocks were freed -- no leaks are possible
==32396== 
==32396== For counts of detected and suppressed errors, rerun with: -v
==32396== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **eroller2** using **6729005689335e240ddd99669daf06af35ce51bb** (from **October 7th 2019, 12:15:00 am**)
