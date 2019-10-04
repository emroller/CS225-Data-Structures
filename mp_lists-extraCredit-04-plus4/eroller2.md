


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
==6630== Memcheck, a memory error detector
==6630== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6630== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6630== Command: ./test -r xml "List::insertFront\ size"
==6630== 
==6630== 
==6630== HEAP SUMMARY:
==6630==     in use at exit: 0 bytes in 0 blocks
==6630==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==6630== 
==6630== All heap blocks were freed -- no leaks are possible
==6630== 
==6630== For counts of detected and suppressed errors, rerun with: -v
==6630== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6643== Memcheck, a memory error detector
==6643== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6643== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6643== Command: ./test -r xml "List::insertBack\ size"
==6643== 
==6643== 
==6643== HEAP SUMMARY:
==6643==     in use at exit: 0 bytes in 0 blocks
==6643==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==6643== 
==6643== All heap blocks were freed -- no leaks are possible
==6643== 
==6643== For counts of detected and suppressed errors, rerun with: -v
==6643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6648== Memcheck, a memory error detector
==6648== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6648== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6648== Command: ./test -r xml "List::insert\ contents"
==6648== 
==6648== 
==6648== HEAP SUMMARY:
==6648==     in use at exit: 0 bytes in 0 blocks
==6648==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==6648== 
==6648== All heap blocks were freed -- no leaks are possible
==6648== 
==6648== For counts of detected and suppressed errors, rerun with: -v
==6648== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6655== Memcheck, a memory error detector
==6655== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6655== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6655== Command: ./test -r xml "List::split\ simple"
==6655== 
==6655== 
==6655== HEAP SUMMARY:
==6655==     in use at exit: 0 bytes in 0 blocks
==6655==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==6655== 
==6655== All heap blocks were freed -- no leaks are possible
==6655== 
==6655== For counts of detected and suppressed errors, rerun with: -v
==6655== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6661== Memcheck, a memory error detector
==6661== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6661== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6661== Command: ./test -r xml "List::_destroy\ empty\ list"
==6661== 
==6661== 
==6661== HEAP SUMMARY:
==6661==     in use at exit: 0 bytes in 0 blocks
==6661==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==6661== 
==6661== All heap blocks were freed -- no leaks are possible
==6661== 
==6661== For counts of detected and suppressed errors, rerun with: -v
==6661== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6664== Memcheck, a memory error detector
==6664== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6664== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6664== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==6664== 
==6664== 
==6664== HEAP SUMMARY:
==6664==     in use at exit: 0 bytes in 0 blocks
==6664==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==6664== 
==6664== All heap blocks were freed -- no leaks are possible
==6664== 
==6664== For counts of detected and suppressed errors, rerun with: -v
==6664== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6669== Memcheck, a memory error detector
==6669== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6669== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6669== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==6669== 
==6669== 
==6669== HEAP SUMMARY:
==6669==     in use at exit: 0 bytes in 0 blocks
==6669==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==6669== 
==6669== All heap blocks were freed -- no leaks are possible
==6669== 
==6669== For counts of detected and suppressed errors, rerun with: -v
==6669== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6673== Memcheck, a memory error detector
==6673== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6673== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6673== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==6673== 
==6673== 
==6673== HEAP SUMMARY:
==6673==     in use at exit: 0 bytes in 0 blocks
==6673==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==6673== 
==6673== All heap blocks were freed -- no leaks are possible
==6673== 
==6673== For counts of detected and suppressed errors, rerun with: -v
==6673== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6677== Memcheck, a memory error detector
==6677== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6677== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6677== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==6677== 
==6677== 
==6677== HEAP SUMMARY:
==6677==     in use at exit: 0 bytes in 0 blocks
==6677==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==6677== 
==6677== All heap blocks were freed -- no leaks are possible
==6677== 
==6677== For counts of detected and suppressed errors, rerun with: -v
==6677== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6681== Memcheck, a memory error detector
==6681== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6681== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6681== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==6681== 
==6681== 
==6681== HEAP SUMMARY:
==6681==     in use at exit: 0 bytes in 0 blocks
==6681==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==6681== 
==6681== All heap blocks were freed -- no leaks are possible
==6681== 
==6681== For counts of detected and suppressed errors, rerun with: -v
==6681== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6685== Memcheck, a memory error detector
==6685== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6685== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6685== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==6685== 
==6685== 
==6685== HEAP SUMMARY:
==6685==     in use at exit: 0 bytes in 0 blocks
==6685==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==6685== 
==6685== All heap blocks were freed -- no leaks are possible
==6685== 
==6685== For counts of detected and suppressed errors, rerun with: -v
==6685== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6689== Memcheck, a memory error detector
==6689== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6689== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6689== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==6689== 
==6689== 
==6689== HEAP SUMMARY:
==6689==     in use at exit: 0 bytes in 0 blocks
==6689==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==6689== 
==6689== All heap blocks were freed -- no leaks are possible
==6689== 
==6689== For counts of detected and suppressed errors, rerun with: -v
==6689== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6693== Memcheck, a memory error detector
==6693== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6693== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6693== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==6693== 
==6693== 
==6693== HEAP SUMMARY:
==6693==     in use at exit: 0 bytes in 0 blocks
==6693==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==6693== 
==6693== All heap blocks were freed -- no leaks are possible
==6693== 
==6693== For counts of detected and suppressed errors, rerun with: -v
==6693== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6699== Memcheck, a memory error detector
==6699== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6699== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6699== Command: ./test -r xml "List::insert\ contents\ #2"
==6699== 
==6699== 
==6699== HEAP SUMMARY:
==6699==     in use at exit: 0 bytes in 0 blocks
==6699==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==6699== 
==6699== All heap blocks were freed -- no leaks are possible
==6699== 
==6699== For counts of detected and suppressed errors, rerun with: -v
==6699== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6707== Memcheck, a memory error detector
==6707== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6707== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6707== Command: ./test -r xml "List::waterfall\ simple"
==6707== 
==6707== 
==6707== HEAP SUMMARY:
==6707==     in use at exit: 0 bytes in 0 blocks
==6707==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==6707== 
==6707== All heap blocks were freed -- no leaks are possible
==6707== 
==6707== For counts of detected and suppressed errors, rerun with: -v
==6707== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **eroller2** using **d69fe7241d157343532e36d14ae5f8626cc096f6** (from **October 4th 2019, 12:15:00 am**)
