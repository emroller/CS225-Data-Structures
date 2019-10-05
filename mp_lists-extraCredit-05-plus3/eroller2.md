


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
==12991== Memcheck, a memory error detector
==12991== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==12991== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==12991== Command: ./test -r xml "List::insertFront\ size"
==12991== 
==12991== 
==12991== HEAP SUMMARY:
==12991==     in use at exit: 0 bytes in 0 blocks
==12991==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==12991== 
==12991== All heap blocks were freed -- no leaks are possible
==12991== 
==12991== For counts of detected and suppressed errors, rerun with: -v
==12991== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12997== Memcheck, a memory error detector
==12997== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==12997== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==12997== Command: ./test -r xml "List::insertBack\ size"
==12997== 
==12997== 
==12997== HEAP SUMMARY:
==12997==     in use at exit: 0 bytes in 0 blocks
==12997==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==12997== 
==12997== All heap blocks were freed -- no leaks are possible
==12997== 
==12997== For counts of detected and suppressed errors, rerun with: -v
==12997== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13001== Memcheck, a memory error detector
==13001== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13001== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13001== Command: ./test -r xml "List::insert\ contents"
==13001== 
==13001== 
==13001== HEAP SUMMARY:
==13001==     in use at exit: 0 bytes in 0 blocks
==13001==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==13001== 
==13001== All heap blocks were freed -- no leaks are possible
==13001== 
==13001== For counts of detected and suppressed errors, rerun with: -v
==13001== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13004== Memcheck, a memory error detector
==13004== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13004== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13004== Command: ./test -r xml "List::split\ simple"
==13004== 
==13004== 
==13004== HEAP SUMMARY:
==13004==     in use at exit: 0 bytes in 0 blocks
==13004==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==13004== 
==13004== All heap blocks were freed -- no leaks are possible
==13004== 
==13004== For counts of detected and suppressed errors, rerun with: -v
==13004== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13007== Memcheck, a memory error detector
==13007== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13007== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13007== Command: ./test -r xml "List::_destroy\ empty\ list"
==13007== 
==13007== 
==13007== HEAP SUMMARY:
==13007==     in use at exit: 0 bytes in 0 blocks
==13007==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==13007== 
==13007== All heap blocks were freed -- no leaks are possible
==13007== 
==13007== For counts of detected and suppressed errors, rerun with: -v
==13007== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13009== Memcheck, a memory error detector
==13009== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13009== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13009== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==13009== 
==13009== 
==13009== HEAP SUMMARY:
==13009==     in use at exit: 0 bytes in 0 blocks
==13009==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==13009== 
==13009== All heap blocks were freed -- no leaks are possible
==13009== 
==13009== For counts of detected and suppressed errors, rerun with: -v
==13009== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13011== Memcheck, a memory error detector
==13011== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13011== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13011== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==13011== 
==13011== 
==13011== HEAP SUMMARY:
==13011==     in use at exit: 0 bytes in 0 blocks
==13011==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==13011== 
==13011== All heap blocks were freed -- no leaks are possible
==13011== 
==13011== For counts of detected and suppressed errors, rerun with: -v
==13011== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13015== Memcheck, a memory error detector
==13015== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13015== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13015== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==13015== 
==13015== 
==13015== HEAP SUMMARY:
==13015==     in use at exit: 0 bytes in 0 blocks
==13015==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==13015== 
==13015== All heap blocks were freed -- no leaks are possible
==13015== 
==13015== For counts of detected and suppressed errors, rerun with: -v
==13015== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13050== Memcheck, a memory error detector
==13050== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13050== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13050== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==13050== 
==13050== 
==13050== HEAP SUMMARY:
==13050==     in use at exit: 0 bytes in 0 blocks
==13050==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==13050== 
==13050== All heap blocks were freed -- no leaks are possible
==13050== 
==13050== For counts of detected and suppressed errors, rerun with: -v
==13050== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13053== Memcheck, a memory error detector
==13053== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13053== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13053== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==13053== 
==13053== 
==13053== HEAP SUMMARY:
==13053==     in use at exit: 0 bytes in 0 blocks
==13053==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==13053== 
==13053== All heap blocks were freed -- no leaks are possible
==13053== 
==13053== For counts of detected and suppressed errors, rerun with: -v
==13053== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13056== Memcheck, a memory error detector
==13056== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13056== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13056== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==13056== 
==13056== 
==13056== HEAP SUMMARY:
==13056==     in use at exit: 0 bytes in 0 blocks
==13056==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==13056== 
==13056== All heap blocks were freed -- no leaks are possible
==13056== 
==13056== For counts of detected and suppressed errors, rerun with: -v
==13056== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13069== Memcheck, a memory error detector
==13069== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13069== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13069== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==13069== 
==13069== 
==13069== HEAP SUMMARY:
==13069==     in use at exit: 0 bytes in 0 blocks
==13069==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==13069== 
==13069== All heap blocks were freed -- no leaks are possible
==13069== 
==13069== For counts of detected and suppressed errors, rerun with: -v
==13069== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13074== Memcheck, a memory error detector
==13074== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13074== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13074== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==13074== 
==13074== 
==13074== HEAP SUMMARY:
==13074==     in use at exit: 0 bytes in 0 blocks
==13074==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==13074== 
==13074== All heap blocks were freed -- no leaks are possible
==13074== 
==13074== For counts of detected and suppressed errors, rerun with: -v
==13074== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13078== Memcheck, a memory error detector
==13078== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13078== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13078== Command: ./test -r xml "List::insert\ contents\ #2"
==13078== 
==13078== 
==13078== HEAP SUMMARY:
==13078==     in use at exit: 0 bytes in 0 blocks
==13078==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==13078== 
==13078== All heap blocks were freed -- no leaks are possible
==13078== 
==13078== For counts of detected and suppressed errors, rerun with: -v
==13078== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13084== Memcheck, a memory error detector
==13084== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==13084== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==13084== Command: ./test -r xml "List::waterfall\ simple"
==13084== 
==13084== 
==13084== HEAP SUMMARY:
==13084==     in use at exit: 0 bytes in 0 blocks
==13084==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==13084== 
==13084== All heap blocks were freed -- no leaks are possible
==13084== 
==13084== For counts of detected and suppressed errors, rerun with: -v
==13084== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **eroller2** using **13af343dad245b9e1cb9876d357d71ddec880cfa** (from **October 5th 2019, 12:15:00 am**)
