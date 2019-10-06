


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
==30099== Memcheck, a memory error detector
==30099== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30099== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30099== Command: ./test -r xml "List::insertFront\ size"
==30099== 
==30099== 
==30099== HEAP SUMMARY:
==30099==     in use at exit: 0 bytes in 0 blocks
==30099==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==30099== 
==30099== All heap blocks were freed -- no leaks are possible
==30099== 
==30099== For counts of detected and suppressed errors, rerun with: -v
==30099== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30103== Memcheck, a memory error detector
==30103== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30103== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30103== Command: ./test -r xml "List::insertBack\ size"
==30103== 
==30103== 
==30103== HEAP SUMMARY:
==30103==     in use at exit: 0 bytes in 0 blocks
==30103==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==30103== 
==30103== All heap blocks were freed -- no leaks are possible
==30103== 
==30103== For counts of detected and suppressed errors, rerun with: -v
==30103== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30107== Memcheck, a memory error detector
==30107== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30107== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30107== Command: ./test -r xml "List::insert\ contents"
==30107== 
==30107== 
==30107== HEAP SUMMARY:
==30107==     in use at exit: 0 bytes in 0 blocks
==30107==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==30107== 
==30107== All heap blocks were freed -- no leaks are possible
==30107== 
==30107== For counts of detected and suppressed errors, rerun with: -v
==30107== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30110== Memcheck, a memory error detector
==30110== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30110== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30110== Command: ./test -r xml "List::split\ simple"
==30110== 
==30110== 
==30110== HEAP SUMMARY:
==30110==     in use at exit: 0 bytes in 0 blocks
==30110==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==30110== 
==30110== All heap blocks were freed -- no leaks are possible
==30110== 
==30110== For counts of detected and suppressed errors, rerun with: -v
==30110== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30113== Memcheck, a memory error detector
==30113== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30113== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30113== Command: ./test -r xml "List::_destroy\ empty\ list"
==30113== 
==30113== 
==30113== HEAP SUMMARY:
==30113==     in use at exit: 0 bytes in 0 blocks
==30113==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==30113== 
==30113== All heap blocks were freed -- no leaks are possible
==30113== 
==30113== For counts of detected and suppressed errors, rerun with: -v
==30113== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30115== Memcheck, a memory error detector
==30115== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30115== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30115== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==30115== 
==30115== 
==30115== HEAP SUMMARY:
==30115==     in use at exit: 0 bytes in 0 blocks
==30115==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==30115== 
==30115== All heap blocks were freed -- no leaks are possible
==30115== 
==30115== For counts of detected and suppressed errors, rerun with: -v
==30115== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30117== Memcheck, a memory error detector
==30117== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30117== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30117== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==30117== 
==30117== 
==30117== HEAP SUMMARY:
==30117==     in use at exit: 0 bytes in 0 blocks
==30117==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==30117== 
==30117== All heap blocks were freed -- no leaks are possible
==30117== 
==30117== For counts of detected and suppressed errors, rerun with: -v
==30117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30154== Memcheck, a memory error detector
==30154== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30154== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30154== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==30154== 
==30154== 
==30154== HEAP SUMMARY:
==30154==     in use at exit: 0 bytes in 0 blocks
==30154==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==30154== 
==30154== All heap blocks were freed -- no leaks are possible
==30154== 
==30154== For counts of detected and suppressed errors, rerun with: -v
==30154== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30158== Memcheck, a memory error detector
==30158== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30158== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30158== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==30158== 
==30158== 
==30158== HEAP SUMMARY:
==30158==     in use at exit: 0 bytes in 0 blocks
==30158==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==30158== 
==30158== All heap blocks were freed -- no leaks are possible
==30158== 
==30158== For counts of detected and suppressed errors, rerun with: -v
==30158== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30165== Memcheck, a memory error detector
==30165== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30165== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30165== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==30165== 
==30165== 
==30165== HEAP SUMMARY:
==30165==     in use at exit: 0 bytes in 0 blocks
==30165==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==30165== 
==30165== All heap blocks were freed -- no leaks are possible
==30165== 
==30165== For counts of detected and suppressed errors, rerun with: -v
==30165== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30169== Memcheck, a memory error detector
==30169== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30169== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30169== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==30169== 
==30169== 
==30169== HEAP SUMMARY:
==30169==     in use at exit: 0 bytes in 0 blocks
==30169==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==30169== 
==30169== All heap blocks were freed -- no leaks are possible
==30169== 
==30169== For counts of detected and suppressed errors, rerun with: -v
==30169== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30174== Memcheck, a memory error detector
==30174== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30174== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30174== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==30174== 
==30174== 
==30174== HEAP SUMMARY:
==30174==     in use at exit: 0 bytes in 0 blocks
==30174==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==30174== 
==30174== All heap blocks were freed -- no leaks are possible
==30174== 
==30174== For counts of detected and suppressed errors, rerun with: -v
==30174== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30184== Memcheck, a memory error detector
==30184== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30184== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30184== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==30184== 
==30184== 
==30184== HEAP SUMMARY:
==30184==     in use at exit: 0 bytes in 0 blocks
==30184==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==30184== 
==30184== All heap blocks were freed -- no leaks are possible
==30184== 
==30184== For counts of detected and suppressed errors, rerun with: -v
==30184== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30215== Memcheck, a memory error detector
==30215== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30215== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30215== Command: ./test -r xml "List::insert\ contents\ #2"
==30215== 
==30215== 
==30215== HEAP SUMMARY:
==30215==     in use at exit: 0 bytes in 0 blocks
==30215==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==30215== 
==30215== All heap blocks were freed -- no leaks are possible
==30215== 
==30215== For counts of detected and suppressed errors, rerun with: -v
==30215== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30247== Memcheck, a memory error detector
==30247== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30247== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30247== Command: ./test -r xml "List::waterfall\ simple"
==30247== 
==30247== 
==30247== HEAP SUMMARY:
==30247==     in use at exit: 0 bytes in 0 blocks
==30247==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==30247== 
==30247== All heap blocks were freed -- no leaks are possible
==30247== 
==30247== For counts of detected and suppressed errors, rerun with: -v
==30247== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **eroller2** using **f48ce403f3c225c8c04bffb4935dbc35fdc8fa15** (from **October 6th 2019, 12:15:00 am**)
