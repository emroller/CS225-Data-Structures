


## Score: 32/57 (56.14%)


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
==22564== Memcheck, a memory error detector
==22564== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22564== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22564== Command: ./test -r xml "List::insertFront\ size"
==22564== 
==22564== 
==22564== HEAP SUMMARY:
==22564==     in use at exit: 0 bytes in 0 blocks
==22564==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==22564== 
==22564== All heap blocks were freed -- no leaks are possible
==22564== 
==22564== For counts of detected and suppressed errors, rerun with: -v
==22564== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22568== Memcheck, a memory error detector
==22568== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22568== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22568== Command: ./test -r xml "List::insertBack\ size"
==22568== 
==22568== 
==22568== HEAP SUMMARY:
==22568==     in use at exit: 0 bytes in 0 blocks
==22568==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==22568== 
==22568== All heap blocks were freed -- no leaks are possible
==22568== 
==22568== For counts of detected and suppressed errors, rerun with: -v
==22568== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22572== Memcheck, a memory error detector
==22572== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22572== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22572== Command: ./test -r xml "List::insert\ contents"
==22572== 
==22572== 
==22572== HEAP SUMMARY:
==22572==     in use at exit: 0 bytes in 0 blocks
==22572==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==22572== 
==22572== All heap blocks were freed -- no leaks are possible
==22572== 
==22572== For counts of detected and suppressed errors, rerun with: -v
==22572== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/15] - List::waterfall

- **Points**: 0 / 15


```
Original: expected == out
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=7f7c61bbe92ec570)
```


### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==22577== Memcheck, a memory error detector
==22577== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22577== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22577== Command: ./test -r xml "List::split\ simple"
==22577== 
==22577== 
==22577== HEAP SUMMARY:
==22577==     in use at exit: 0 bytes in 0 blocks
==22577==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==22577== 
==22577== All heap blocks were freed -- no leaks are possible
==22577== 
==22577== For counts of detected and suppressed errors, rerun with: -v
==22577== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22580== Memcheck, a memory error detector
==22580== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22580== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22580== Command: ./test -r xml "List::_destroy\ empty\ list"
==22580== 
==22580== 
==22580== HEAP SUMMARY:
==22580==     in use at exit: 0 bytes in 0 blocks
==22580==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==22580== 
==22580== All heap blocks were freed -- no leaks are possible
==22580== 
==22580== For counts of detected and suppressed errors, rerun with: -v
==22580== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22582== Memcheck, a memory error detector
==22582== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22582== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22582== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==22582== 
==22582== 
==22582== HEAP SUMMARY:
==22582==     in use at exit: 0 bytes in 0 blocks
==22582==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==22582== 
==22582== All heap blocks were freed -- no leaks are possible
==22582== 
==22582== For counts of detected and suppressed errors, rerun with: -v
==22582== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22584== Memcheck, a memory error detector
==22584== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22584== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22584== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==22584== 
==22584== 
==22584== HEAP SUMMARY:
==22584==     in use at exit: 0 bytes in 0 blocks
==22584==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==22584== 
==22584== All heap blocks were freed -- no leaks are possible
==22584== 
==22584== For counts of detected and suppressed errors, rerun with: -v
==22584== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22586== Memcheck, a memory error detector
==22586== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22586== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22586== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==22586== 
==22586== 
==22586== HEAP SUMMARY:
==22586==     in use at exit: 0 bytes in 0 blocks
==22586==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
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
==22623== Memcheck, a memory error detector
==22623== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22623== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22623== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==22623== 
==22623== 
==22623== HEAP SUMMARY:
==22623==     in use at exit: 0 bytes in 0 blocks
==22623==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==22623== 
==22623== All heap blocks were freed -- no leaks are possible
==22623== 
==22623== For counts of detected and suppressed errors, rerun with: -v
==22623== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22626== Memcheck, a memory error detector
==22626== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22626== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22626== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==22626== 
==22626== 
==22626== HEAP SUMMARY:
==22626==     in use at exit: 0 bytes in 0 blocks
==22626==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==22626== 
==22626== All heap blocks were freed -- no leaks are possible
==22626== 
==22626== For counts of detected and suppressed errors, rerun with: -v
==22626== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22629== Memcheck, a memory error detector
==22629== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22629== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22629== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==22629== 
==22629== 
==22629== HEAP SUMMARY:
==22629==     in use at exit: 0 bytes in 0 blocks
==22629==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==22629== 
==22629== All heap blocks were freed -- no leaks are possible
==22629== 
==22629== For counts of detected and suppressed errors, rerun with: -v
==22629== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22641== Memcheck, a memory error detector
==22641== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22641== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22641== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==22641== 
==22641== 
==22641== HEAP SUMMARY:
==22641==     in use at exit: 0 bytes in 0 blocks
==22641==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==22641== 
==22641== All heap blocks were freed -- no leaks are possible
==22641== 
==22641== For counts of detected and suppressed errors, rerun with: -v
==22641== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22648== Memcheck, a memory error detector
==22648== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22648== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22648== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==22648== 
==22648== 
==22648== HEAP SUMMARY:
==22648==     in use at exit: 0 bytes in 0 blocks
==22648==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==22648== 
==22648== All heap blocks were freed -- no leaks are possible
==22648== 
==22648== For counts of detected and suppressed errors, rerun with: -v
==22648== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==22652== Memcheck, a memory error detector
==22652== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22652== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22652== Command: ./test -r xml "List::insert\ contents\ #2"
==22652== 
==22652== 
==22652== HEAP SUMMARY:
==22652==     in use at exit: 0 bytes in 0 blocks
==22652==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==22652== 
==22652== All heap blocks were freed -- no leaks are possible
==22652== 
==22652== For counts of detected and suppressed errors, rerun with: -v
==22652== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/5] - List::waterfall simple

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1_extra.cpp" line="62">
        <Original>
          "&lt; 1 3 5 7 2 6 4 8 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 1 3 5 7 2 6 4 8 >" == "&lt; 1 6 7 8 5 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **eroller2** using **9b4ab69bbfc5860af9f73906ead45d1ecf0d6cd5** (from **October 1st 2019, 12:15:00 am**)
