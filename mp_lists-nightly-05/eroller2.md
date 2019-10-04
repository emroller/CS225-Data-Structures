


## Score: 63/114 (55.26%)


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





### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/10] - List::merge

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <Info>
        Output image `out` saved as actual-merge.png
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="90">
        <Original>
          out == expected
        </Original>
        <Expanded>
          PNG(w=600, h=400, hash=0)
==
PNG(w=600, h=400, hash=0)
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="93">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="108">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::sort #1

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==17758== Memcheck, a memory error detector
==17758== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17758== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17758== Command: ./test -r xml "List::insertFront\ size"
==17758== 
==17758== 
==17758== HEAP SUMMARY:
==17758==     in use at exit: 0 bytes in 0 blocks
==17758==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==17758== 
==17758== All heap blocks were freed -- no leaks are possible
==17758== 
==17758== For counts of detected and suppressed errors, rerun with: -v
==17758== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17763== Memcheck, a memory error detector
==17763== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17763== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17763== Command: ./test -r xml "List::insertBack\ size"
==17763== 
==17763== 
==17763== HEAP SUMMARY:
==17763==     in use at exit: 0 bytes in 0 blocks
==17763==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==17763== 
==17763== All heap blocks were freed -- no leaks are possible
==17763== 
==17763== For counts of detected and suppressed errors, rerun with: -v
==17763== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17767== Memcheck, a memory error detector
==17767== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17767== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17767== Command: ./test -r xml "List::insert\ contents"
==17767== 
==17767== 
==17767== HEAP SUMMARY:
==17767==     in use at exit: 0 bytes in 0 blocks
==17767==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==17767== 
==17767== All heap blocks were freed -- no leaks are possible
==17767== 
==17767== For counts of detected and suppressed errors, rerun with: -v
==17767== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17773== Memcheck, a memory error detector
==17773== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17773== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17773== Command: ./test -r xml "List::split\ simple"
==17773== 
==17773== 
==17773== HEAP SUMMARY:
==17773==     in use at exit: 0 bytes in 0 blocks
==17773==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==17773== 
==17773== All heap blocks were freed -- no leaks are possible
==17773== 
==17773== For counts of detected and suppressed errors, rerun with: -v
==17773== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17780== Memcheck, a memory error detector
==17780== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17780== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17780== Command: ./test -r xml "List::_destroy\ empty\ list"
==17780== 
==17780== 
==17780== HEAP SUMMARY:
==17780==     in use at exit: 0 bytes in 0 blocks
==17780==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==17780== 
==17780== All heap blocks were freed -- no leaks are possible
==17780== 
==17780== For counts of detected and suppressed errors, rerun with: -v
==17780== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17784== Memcheck, a memory error detector
==17784== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17784== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17784== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==17784== 
==17784== 
==17784== HEAP SUMMARY:
==17784==     in use at exit: 0 bytes in 0 blocks
==17784==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==17784== 
==17784== All heap blocks were freed -- no leaks are possible
==17784== 
==17784== For counts of detected and suppressed errors, rerun with: -v
==17784== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17788== Memcheck, a memory error detector
==17788== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17788== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17788== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==17788== 
==17788== 
==17788== HEAP SUMMARY:
==17788==     in use at exit: 0 bytes in 0 blocks
==17788==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==17788== 
==17788== All heap blocks were freed -- no leaks are possible
==17788== 
==17788== For counts of detected and suppressed errors, rerun with: -v
==17788== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17792== Memcheck, a memory error detector
==17792== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17792== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17792== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==17792== 
==17792== 
==17792== HEAP SUMMARY:
==17792==     in use at exit: 0 bytes in 0 blocks
==17792==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==17792== 
==17792== All heap blocks were freed -- no leaks are possible
==17792== 
==17792== For counts of detected and suppressed errors, rerun with: -v
==17792== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17796== Memcheck, a memory error detector
==17796== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17796== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17796== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==17796== 
==17796== 
==17796== HEAP SUMMARY:
==17796==     in use at exit: 0 bytes in 0 blocks
==17796==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==17796== 
==17796== All heap blocks were freed -- no leaks are possible
==17796== 
==17796== For counts of detected and suppressed errors, rerun with: -v
==17796== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17800== Memcheck, a memory error detector
==17800== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17800== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17800== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==17800== 
==17800== 
==17800== HEAP SUMMARY:
==17800==     in use at exit: 0 bytes in 0 blocks
==17800==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==17800== 
==17800== All heap blocks were freed -- no leaks are possible
==17800== 
==17800== For counts of detected and suppressed errors, rerun with: -v
==17800== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17804== Memcheck, a memory error detector
==17804== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17804== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17804== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==17804== 
==17804== 
==17804== HEAP SUMMARY:
==17804==     in use at exit: 0 bytes in 0 blocks
==17804==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==17804== 
==17804== All heap blocks were freed -- no leaks are possible
==17804== 
==17804== For counts of detected and suppressed errors, rerun with: -v
==17804== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17808== Memcheck, a memory error detector
==17808== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17808== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17808== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==17808== 
==17808== 
==17808== HEAP SUMMARY:
==17808==     in use at exit: 0 bytes in 0 blocks
==17808==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==17808== 
==17808== All heap blocks were freed -- no leaks are possible
==17808== 
==17808== For counts of detected and suppressed errors, rerun with: -v
==17808== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17812== Memcheck, a memory error detector
==17812== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17812== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17812== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==17812== 
==17812== 
==17812== HEAP SUMMARY:
==17812==     in use at exit: 0 bytes in 0 blocks
==17812==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==17812== 
==17812== All heap blocks were freed -- no leaks are possible
==17812== 
==17812== For counts of detected and suppressed errors, rerun with: -v
==17812== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17816== Memcheck, a memory error detector
==17816== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17816== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17816== Command: ./test -r xml "List::reverse\ simple"
==17816== 
==17816== 
==17816== HEAP SUMMARY:
==17816==     in use at exit: 0 bytes in 0 blocks
==17816==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==17816== 
==17816== All heap blocks were freed -- no leaks are possible
==17816== 
==17816== For counts of detected and suppressed errors, rerun with: -v
==17816== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17847== Memcheck, a memory error detector
==17847== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17847== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17847== Command: ./test -r xml "List::reverse\ edge\ cases"
==17847== 
==17847== 
==17847== HEAP SUMMARY:
==17847==     in use at exit: 0 bytes in 0 blocks
==17847==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==17847== 
==17847== All heap blocks were freed -- no leaks are possible
==17847== 
==17847== For counts of detected and suppressed errors, rerun with: -v
==17847== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
"&lt; 1 2 3 4 5 6 7 8 9 10 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <Info>
        Does not empty out the parameter list
      </Info>
      <Info>
        Does not empty out the parameter list
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="84">
        <Original>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >" == s1.str()
        </Original>
        <Expanded>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >"
==
"&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="2" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="87">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==17859== Memcheck, a memory error detector
==17859== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17859== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17859== Command: ./test -r xml "List::insert\ contents\ #2"
==17859== 
==17859== 
==17859== HEAP SUMMARY:
==17859==     in use at exit: 0 bytes in 0 blocks
==17859==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==17859== 
==17859== All heap blocks were freed -- no leaks are possible
==17859== 
==17859== For counts of detected and suppressed errors, rerun with: -v
==17859== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17870== Memcheck, a memory error detector
==17870== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==17870== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==17870== Command: ./test -r xml "List::waterfall\ simple"
==17870== 
==17870== 
==17870== HEAP SUMMARY:
==17870==     in use at exit: 0 bytes in 0 blocks
==17870==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==17870== 
==17870== All heap blocks were freed -- no leaks are possible
==17870== 
==17870== For counts of detected and suppressed errors, rerun with: -v
==17870== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
