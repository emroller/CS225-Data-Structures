


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
==22515== Memcheck, a memory error detector
==22515== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22515== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22515== Command: ./test -r xml "List::insertFront\ size"
==22515== 
==22515== 
==22515== HEAP SUMMARY:
==22515==     in use at exit: 0 bytes in 0 blocks
==22515==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==22515== 
==22515== All heap blocks were freed -- no leaks are possible
==22515== 
==22515== For counts of detected and suppressed errors, rerun with: -v
==22515== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22521== Memcheck, a memory error detector
==22521== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22521== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22521== Command: ./test -r xml "List::insertBack\ size"
==22521== 
==22521== 
==22521== HEAP SUMMARY:
==22521==     in use at exit: 0 bytes in 0 blocks
==22521==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==22521== 
==22521== All heap blocks were freed -- no leaks are possible
==22521== 
==22521== For counts of detected and suppressed errors, rerun with: -v
==22521== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22527== Memcheck, a memory error detector
==22527== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22527== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22527== Command: ./test -r xml "List::insert\ contents"
==22527== 
==22527== 
==22527== HEAP SUMMARY:
==22527==     in use at exit: 0 bytes in 0 blocks
==22527==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==22527== 
==22527== All heap blocks were freed -- no leaks are possible
==22527== 
==22527== For counts of detected and suppressed errors, rerun with: -v
==22527== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22534== Memcheck, a memory error detector
==22534== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22534== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22534== Command: ./test -r xml "List::split\ simple"
==22534== 
==22534== 
==22534== HEAP SUMMARY:
==22534==     in use at exit: 0 bytes in 0 blocks
==22534==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==22534== 
==22534== All heap blocks were freed -- no leaks are possible
==22534== 
==22534== For counts of detected and suppressed errors, rerun with: -v
==22534== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22539== Memcheck, a memory error detector
==22539== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22539== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22539== Command: ./test -r xml "List::_destroy\ empty\ list"
==22539== 
==22539== 
==22539== HEAP SUMMARY:
==22539==     in use at exit: 0 bytes in 0 blocks
==22539==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==22539== 
==22539== All heap blocks were freed -- no leaks are possible
==22539== 
==22539== For counts of detected and suppressed errors, rerun with: -v
==22539== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22541== Memcheck, a memory error detector
==22541== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22541== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22541== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==22541== 
==22541== 
==22541== HEAP SUMMARY:
==22541==     in use at exit: 0 bytes in 0 blocks
==22541==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==22541== 
==22541== All heap blocks were freed -- no leaks are possible
==22541== 
==22541== For counts of detected and suppressed errors, rerun with: -v
==22541== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22543== Memcheck, a memory error detector
==22543== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22543== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22543== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==22543== 
==22543== 
==22543== HEAP SUMMARY:
==22543==     in use at exit: 0 bytes in 0 blocks
==22543==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==22543== 
==22543== All heap blocks were freed -- no leaks are possible
==22543== 
==22543== For counts of detected and suppressed errors, rerun with: -v
==22543== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22545== Memcheck, a memory error detector
==22545== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22545== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22545== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==22545== 
==22545== 
==22545== HEAP SUMMARY:
==22545==     in use at exit: 0 bytes in 0 blocks
==22545==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==22545== 
==22545== All heap blocks were freed -- no leaks are possible
==22545== 
==22545== For counts of detected and suppressed errors, rerun with: -v
==22545== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22547== Memcheck, a memory error detector
==22547== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22547== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22547== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==22547== 
==22547== 
==22547== HEAP SUMMARY:
==22547==     in use at exit: 0 bytes in 0 blocks
==22547==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==22547== 
==22547== All heap blocks were freed -- no leaks are possible
==22547== 
==22547== For counts of detected and suppressed errors, rerun with: -v
==22547== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22549== Memcheck, a memory error detector
==22549== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22549== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22549== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==22549== 
==22549== 
==22549== HEAP SUMMARY:
==22549==     in use at exit: 0 bytes in 0 blocks
==22549==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==22549== 
==22549== All heap blocks were freed -- no leaks are possible
==22549== 
==22549== For counts of detected and suppressed errors, rerun with: -v
==22549== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22586== Memcheck, a memory error detector
==22586== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22586== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22586== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==22586== 
==22586== 
==22586== HEAP SUMMARY:
==22586==     in use at exit: 0 bytes in 0 blocks
==22586==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==22586== 
==22586== All heap blocks were freed -- no leaks are possible
==22586== 
==22586== For counts of detected and suppressed errors, rerun with: -v
==22586== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22590== Memcheck, a memory error detector
==22590== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22590== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22590== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==22590== 
==22590== 
==22590== HEAP SUMMARY:
==22590==     in use at exit: 0 bytes in 0 blocks
==22590==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==22590== 
==22590== All heap blocks were freed -- no leaks are possible
==22590== 
==22590== For counts of detected and suppressed errors, rerun with: -v
==22590== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22597== Memcheck, a memory error detector
==22597== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22597== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22597== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==22597== 
==22597== 
==22597== HEAP SUMMARY:
==22597==     in use at exit: 0 bytes in 0 blocks
==22597==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==22597== 
==22597== All heap blocks were freed -- no leaks are possible
==22597== 
==22597== For counts of detected and suppressed errors, rerun with: -v
==22597== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22601== Memcheck, a memory error detector
==22601== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22601== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22601== Command: ./test -r xml "List::insert\ contents\ #2"
==22601== 
==22601== 
==22601== HEAP SUMMARY:
==22601==     in use at exit: 0 bytes in 0 blocks
==22601==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==22601== 
==22601== All heap blocks were freed -- no leaks are possible
==22601== 
==22601== For counts of detected and suppressed errors, rerun with: -v
==22601== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22614== Memcheck, a memory error detector
==22614== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22614== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22614== Command: ./test -r xml "List::waterfall\ simple"
==22614== 
==22614== 
==22614== HEAP SUMMARY:
==22614==     in use at exit: 0 bytes in 0 blocks
==22614==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==22614== 
==22614== All heap blocks were freed -- no leaks are possible
==22614== 
==22614== For counts of detected and suppressed errors, rerun with: -v
==22614== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **eroller2** using **7d485d7475250d9498740d3eae0b80073f9282cd** (from **October 2nd 2019, 12:15:00 am**)
