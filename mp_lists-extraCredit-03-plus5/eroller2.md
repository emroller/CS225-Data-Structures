


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
==16449== Memcheck, a memory error detector
==16449== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16449== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16449== Command: ./test -r xml "List::insertFront\ size"
==16449== 
==16449== 
==16449== HEAP SUMMARY:
==16449==     in use at exit: 0 bytes in 0 blocks
==16449==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==16449== 
==16449== All heap blocks were freed -- no leaks are possible
==16449== 
==16449== For counts of detected and suppressed errors, rerun with: -v
==16449== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16459== Memcheck, a memory error detector
==16459== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16459== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16459== Command: ./test -r xml "List::insertBack\ size"
==16459== 
==16459== 
==16459== HEAP SUMMARY:
==16459==     in use at exit: 0 bytes in 0 blocks
==16459==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==16459== 
==16459== All heap blocks were freed -- no leaks are possible
==16459== 
==16459== For counts of detected and suppressed errors, rerun with: -v
==16459== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16463== Memcheck, a memory error detector
==16463== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16463== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16463== Command: ./test -r xml "List::insert\ contents"
==16463== 
==16463== 
==16463== HEAP SUMMARY:
==16463==     in use at exit: 0 bytes in 0 blocks
==16463==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==16463== 
==16463== All heap blocks were freed -- no leaks are possible
==16463== 
==16463== For counts of detected and suppressed errors, rerun with: -v
==16463== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16470== Memcheck, a memory error detector
==16470== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16470== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16470== Command: ./test -r xml "List::split\ simple"
==16470== 
==16470== 
==16470== HEAP SUMMARY:
==16470==     in use at exit: 0 bytes in 0 blocks
==16470==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==16470== 
==16470== All heap blocks were freed -- no leaks are possible
==16470== 
==16470== For counts of detected and suppressed errors, rerun with: -v
==16470== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16475== Memcheck, a memory error detector
==16475== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16475== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16475== Command: ./test -r xml "List::_destroy\ empty\ list"
==16475== 
==16475== 
==16475== HEAP SUMMARY:
==16475==     in use at exit: 0 bytes in 0 blocks
==16475==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==16475== 
==16475== All heap blocks were freed -- no leaks are possible
==16475== 
==16475== For counts of detected and suppressed errors, rerun with: -v
==16475== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16518== Memcheck, a memory error detector
==16518== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16518== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16518== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==16518== 
==16518== 
==16518== HEAP SUMMARY:
==16518==     in use at exit: 0 bytes in 0 blocks
==16518==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==16518== 
==16518== All heap blocks were freed -- no leaks are possible
==16518== 
==16518== For counts of detected and suppressed errors, rerun with: -v
==16518== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16522== Memcheck, a memory error detector
==16522== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16522== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16522== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==16522== 
==16522== 
==16522== HEAP SUMMARY:
==16522==     in use at exit: 0 bytes in 0 blocks
==16522==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==16522== 
==16522== All heap blocks were freed -- no leaks are possible
==16522== 
==16522== For counts of detected and suppressed errors, rerun with: -v
==16522== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16528== Memcheck, a memory error detector
==16528== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16528== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16528== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==16528== 
==16528== 
==16528== HEAP SUMMARY:
==16528==     in use at exit: 0 bytes in 0 blocks
==16528==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==16528== 
==16528== All heap blocks were freed -- no leaks are possible
==16528== 
==16528== For counts of detected and suppressed errors, rerun with: -v
==16528== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16532== Memcheck, a memory error detector
==16532== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16532== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16532== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==16532== 
==16532== 
==16532== HEAP SUMMARY:
==16532==     in use at exit: 0 bytes in 0 blocks
==16532==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==16532== 
==16532== All heap blocks were freed -- no leaks are possible
==16532== 
==16532== For counts of detected and suppressed errors, rerun with: -v
==16532== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16538== Memcheck, a memory error detector
==16538== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16538== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16538== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==16538== 
==16538== 
==16538== HEAP SUMMARY:
==16538==     in use at exit: 0 bytes in 0 blocks
==16538==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==16538== 
==16538== All heap blocks were freed -- no leaks are possible
==16538== 
==16538== For counts of detected and suppressed errors, rerun with: -v
==16538== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16540== Memcheck, a memory error detector
==16540== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16540== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16540== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==16540== 
==16540== 
==16540== HEAP SUMMARY:
==16540==     in use at exit: 0 bytes in 0 blocks
==16540==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==16540== 
==16540== All heap blocks were freed -- no leaks are possible
==16540== 
==16540== For counts of detected and suppressed errors, rerun with: -v
==16540== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16542== Memcheck, a memory error detector
==16542== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16542== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16542== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==16542== 
==16542== 
==16542== HEAP SUMMARY:
==16542==     in use at exit: 0 bytes in 0 blocks
==16542==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==16542== 
==16542== All heap blocks were freed -- no leaks are possible
==16542== 
==16542== For counts of detected and suppressed errors, rerun with: -v
==16542== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16544== Memcheck, a memory error detector
==16544== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16544== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16544== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==16544== 
==16544== 
==16544== HEAP SUMMARY:
==16544==     in use at exit: 0 bytes in 0 blocks
==16544==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==16544== 
==16544== All heap blocks were freed -- no leaks are possible
==16544== 
==16544== For counts of detected and suppressed errors, rerun with: -v
==16544== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16546== Memcheck, a memory error detector
==16546== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16546== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16546== Command: ./test -r xml "List::insert\ contents\ #2"
==16546== 
==16546== 
==16546== HEAP SUMMARY:
==16546==     in use at exit: 0 bytes in 0 blocks
==16546==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==16546== 
==16546== All heap blocks were freed -- no leaks are possible
==16546== 
==16546== For counts of detected and suppressed errors, rerun with: -v
==16546== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16557== Memcheck, a memory error detector
==16557== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==16557== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==16557== Command: ./test -r xml "List::waterfall\ simple"
==16557== 
==16557== 
==16557== HEAP SUMMARY:
==16557==     in use at exit: 0 bytes in 0 blocks
==16557==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==16557== 
==16557== All heap blocks were freed -- no leaks are possible
==16557== 
==16557== For counts of detected and suppressed errors, rerun with: -v
==16557== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **eroller2** using **7d485d7475250d9498740d3eae0b80073f9282cd** (from **October 3rd 2019, 12:15:00 am**)
