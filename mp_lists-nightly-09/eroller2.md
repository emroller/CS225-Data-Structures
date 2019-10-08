


## Score: 94/114 (82.46%)


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
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==20667== Memcheck, a memory error detector
==20667== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20667== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20667== Command: ./test -r xml "List::merge"
==20667== 
==20667== 
==20667== HEAP SUMMARY:
==20667==     in use at exit: 0 bytes in 0 blocks
==20667==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==20667== 
==20667== All heap blocks were freed -- no leaks are possible
==20667== 
==20667== For counts of detected and suppressed errors, rerun with: -v
==20667== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==20669== Memcheck, a memory error detector
==20669== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20669== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20669== Command: ./test -r xml "List::sort\ simple\ #1"
==20669== 
==20669== 
==20669== HEAP SUMMARY:
==20669==     in use at exit: 0 bytes in 0 blocks
==20669==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==20669== 
==20669== All heap blocks were freed -- no leaks are possible
==20669== 
==20669== For counts of detected and suppressed errors, rerun with: -v
==20669== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==20671== Memcheck, a memory error detector
==20671== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20671== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20671== Command: ./test -r xml "List::sort\ simple\ #2"
==20671== 
==20671== 
==20671== HEAP SUMMARY:
==20671==     in use at exit: 0 bytes in 0 blocks
==20671==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==20671== 
==20671== All heap blocks were freed -- no leaks are possible
==20671== 
==20671== For counts of detected and suppressed errors, rerun with: -v
==20671== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==20677== Memcheck, a memory error detector
==20677== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20677== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20677== Command: ./test -r xml "List::insertFront\ size"
==20677== 
==20677== 
==20677== HEAP SUMMARY:
==20677==     in use at exit: 0 bytes in 0 blocks
==20677==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==20677== 
==20677== All heap blocks were freed -- no leaks are possible
==20677== 
==20677== For counts of detected and suppressed errors, rerun with: -v
==20677== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20681== Memcheck, a memory error detector
==20681== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20681== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20681== Command: ./test -r xml "List::insertBack\ size"
==20681== 
==20681== 
==20681== HEAP SUMMARY:
==20681==     in use at exit: 0 bytes in 0 blocks
==20681==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==20681== 
==20681== All heap blocks were freed -- no leaks are possible
==20681== 
==20681== For counts of detected and suppressed errors, rerun with: -v
==20681== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20683== Memcheck, a memory error detector
==20683== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20683== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20683== Command: ./test -r xml "List::insert\ contents"
==20683== 
==20683== 
==20683== HEAP SUMMARY:
==20683==     in use at exit: 0 bytes in 0 blocks
==20683==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==20683== 
==20683== All heap blocks were freed -- no leaks are possible
==20683== 
==20683== For counts of detected and suppressed errors, rerun with: -v
==20683== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20686== Memcheck, a memory error detector
==20686== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20686== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20686== Command: ./test -r xml "List::split\ simple"
==20686== 
==20686== 
==20686== HEAP SUMMARY:
==20686==     in use at exit: 0 bytes in 0 blocks
==20686==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==20686== 
==20686== All heap blocks were freed -- no leaks are possible
==20686== 
==20686== For counts of detected and suppressed errors, rerun with: -v
==20686== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20689== Memcheck, a memory error detector
==20689== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20689== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20689== Command: ./test -r xml "List::_destroy\ empty\ list"
==20689== 
==20689== 
==20689== HEAP SUMMARY:
==20689==     in use at exit: 0 bytes in 0 blocks
==20689==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==20689== 
==20689== All heap blocks were freed -- no leaks are possible
==20689== 
==20689== For counts of detected and suppressed errors, rerun with: -v
==20689== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20691== Memcheck, a memory error detector
==20691== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20691== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20691== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==20691== 
==20691== 
==20691== HEAP SUMMARY:
==20691==     in use at exit: 0 bytes in 0 blocks
==20691==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==20691== 
==20691== All heap blocks were freed -- no leaks are possible
==20691== 
==20691== For counts of detected and suppressed errors, rerun with: -v
==20691== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20693== Memcheck, a memory error detector
==20693== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20693== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20693== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==20693== 
==20693== 
==20693== HEAP SUMMARY:
==20693==     in use at exit: 0 bytes in 0 blocks
==20693==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==20693== 
==20693== All heap blocks were freed -- no leaks are possible
==20693== 
==20693== For counts of detected and suppressed errors, rerun with: -v
==20693== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20695== Memcheck, a memory error detector
==20695== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20695== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20695== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==20695== 
==20695== 
==20695== HEAP SUMMARY:
==20695==     in use at exit: 0 bytes in 0 blocks
==20695==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==20695== 
==20695== All heap blocks were freed -- no leaks are possible
==20695== 
==20695== For counts of detected and suppressed errors, rerun with: -v
==20695== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20698== Memcheck, a memory error detector
==20698== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20698== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20698== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==20698== 
==20698== 
==20698== HEAP SUMMARY:
==20698==     in use at exit: 0 bytes in 0 blocks
==20698==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==20698== 
==20698== All heap blocks were freed -- no leaks are possible
==20698== 
==20698== For counts of detected and suppressed errors, rerun with: -v
==20698== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20700== Memcheck, a memory error detector
==20700== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20700== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20700== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==20700== 
==20700== 
==20700== HEAP SUMMARY:
==20700==     in use at exit: 0 bytes in 0 blocks
==20700==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==20700== 
==20700== All heap blocks were freed -- no leaks are possible
==20700== 
==20700== For counts of detected and suppressed errors, rerun with: -v
==20700== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20702== Memcheck, a memory error detector
==20702== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20702== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20702== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==20702== 
==20702== 
==20702== HEAP SUMMARY:
==20702==     in use at exit: 0 bytes in 0 blocks
==20702==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==20702== 
==20702== All heap blocks were freed -- no leaks are possible
==20702== 
==20702== For counts of detected and suppressed errors, rerun with: -v
==20702== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20704== Memcheck, a memory error detector
==20704== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20704== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20704== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==20704== 
==20704== 
==20704== HEAP SUMMARY:
==20704==     in use at exit: 0 bytes in 0 blocks
==20704==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==20704== 
==20704== All heap blocks were freed -- no leaks are possible
==20704== 
==20704== For counts of detected and suppressed errors, rerun with: -v
==20704== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20706== Memcheck, a memory error detector
==20706== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20706== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20706== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==20706== 
==20706== 
==20706== HEAP SUMMARY:
==20706==     in use at exit: 0 bytes in 0 blocks
==20706==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==20706== 
==20706== All heap blocks were freed -- no leaks are possible
==20706== 
==20706== For counts of detected and suppressed errors, rerun with: -v
==20706== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==20708== Memcheck, a memory error detector
==20708== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20708== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20708== Command: ./test -r xml "List::reverse\ simple"
==20708== 
==20708== 
==20708== HEAP SUMMARY:
==20708==     in use at exit: 0 bytes in 0 blocks
==20708==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==20708== 
==20708== All heap blocks were freed -- no leaks are possible
==20708== 
==20708== For counts of detected and suppressed errors, rerun with: -v
==20708== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==20710== Memcheck, a memory error detector
==20710== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20710== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20710== Command: ./test -r xml "List::reverse\ edge\ cases"
==20710== 
==20710== 
==20710== HEAP SUMMARY:
==20710==     in use at exit: 0 bytes in 0 blocks
==20710==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==20710== 
==20710== All heap blocks were freed -- no leaks are possible
==20710== 
==20710== For counts of detected and suppressed errors, rerun with: -v
==20710== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="59">
        <Original>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >"
==
"&lt; 4 3 2 1 8 7 6 5 9 10 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==20713== Memcheck, a memory error detector
==20713== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20713== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20713== Command: ./test -r xml "List::merge\ #2"
==20713== 
==20713== 
==20713== HEAP SUMMARY:
==20713==     in use at exit: 0 bytes in 0 blocks
==20713==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==20713== 
==20713== All heap blocks were freed -- no leaks are possible
==20713== 
==20713== For counts of detected and suppressed errors, rerun with: -v
==20713== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==20715== Memcheck, a memory error detector
==20715== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20715== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20715== Command: ./test -r xml "List::sort\ simple\ #3"
==20715== 
==20715== 
==20715== HEAP SUMMARY:
==20715==     in use at exit: 0 bytes in 0 blocks
==20715==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==20715== 
==20715== All heap blocks were freed -- no leaks are possible
==20715== 
==20715== For counts of detected and suppressed errors, rerun with: -v
==20715== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
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
==20717== Memcheck, a memory error detector
==20717== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20717== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20717== Command: ./test -r xml "List::insert\ contents\ #2"
==20717== 
==20717== 
==20717== HEAP SUMMARY:
==20717==     in use at exit: 0 bytes in 0 blocks
==20717==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==20717== 
==20717== All heap blocks were freed -- no leaks are possible
==20717== 
==20717== For counts of detected and suppressed errors, rerun with: -v
==20717== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20722== Memcheck, a memory error detector
==20722== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20722== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20722== Command: ./test -r xml "List::waterfall\ simple"
==20722== 
==20722== 
==20722== HEAP SUMMARY:
==20722==     in use at exit: 0 bytes in 0 blocks
==20722==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==20722== 
==20722== All heap blocks were freed -- no leaks are possible
==20722== 
==20722== For counts of detected and suppressed errors, rerun with: -v
==20722== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **eroller2** using **fce6ab84148b7946d3602912e37faf8a0bd583bd** (from **October 8th 2019, 12:15:00 am**)
