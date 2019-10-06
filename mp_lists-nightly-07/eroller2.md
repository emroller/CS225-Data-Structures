


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
Expanded: PNG(w=900, h=600, hash=4012e1fb18850a0e)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5

```
[Process timed out]
```
```
Unable to Grade (ETIMEDOUT): Your code did not finish within 10000ms.
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
==9760== Memcheck, a memory error detector
==9760== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9760== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9760== Command: ./test -r xml "List::insertFront\ size"
==9760== 
==9760== 
==9760== HEAP SUMMARY:
==9760==     in use at exit: 0 bytes in 0 blocks
==9760==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==9760== 
==9760== All heap blocks were freed -- no leaks are possible
==9760== 
==9760== For counts of detected and suppressed errors, rerun with: -v
==9760== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9762== Memcheck, a memory error detector
==9762== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9762== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9762== Command: ./test -r xml "List::insertBack\ size"
==9762== 
==9762== 
==9762== HEAP SUMMARY:
==9762==     in use at exit: 0 bytes in 0 blocks
==9762==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==9762== 
==9762== All heap blocks were freed -- no leaks are possible
==9762== 
==9762== For counts of detected and suppressed errors, rerun with: -v
==9762== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9764== Memcheck, a memory error detector
==9764== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9764== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9764== Command: ./test -r xml "List::insert\ contents"
==9764== 
==9764== 
==9764== HEAP SUMMARY:
==9764==     in use at exit: 0 bytes in 0 blocks
==9764==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==9764== 
==9764== All heap blocks were freed -- no leaks are possible
==9764== 
==9764== For counts of detected and suppressed errors, rerun with: -v
==9764== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9792== Memcheck, a memory error detector
==9792== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9792== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9792== Command: ./test -r xml "List::split\ simple"
==9792== 
==9792== 
==9792== HEAP SUMMARY:
==9792==     in use at exit: 0 bytes in 0 blocks
==9792==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==9792== 
==9792== All heap blocks were freed -- no leaks are possible
==9792== 
==9792== For counts of detected and suppressed errors, rerun with: -v
==9792== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9798== Memcheck, a memory error detector
==9798== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9798== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9798== Command: ./test -r xml "List::_destroy\ empty\ list"
==9798== 
==9798== 
==9798== HEAP SUMMARY:
==9798==     in use at exit: 0 bytes in 0 blocks
==9798==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==9798== 
==9798== All heap blocks were freed -- no leaks are possible
==9798== 
==9798== For counts of detected and suppressed errors, rerun with: -v
==9798== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9802== Memcheck, a memory error detector
==9802== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9802== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9802== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==9802== 
==9802== 
==9802== HEAP SUMMARY:
==9802==     in use at exit: 0 bytes in 0 blocks
==9802==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==9802== 
==9802== All heap blocks were freed -- no leaks are possible
==9802== 
==9802== For counts of detected and suppressed errors, rerun with: -v
==9802== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9805== Memcheck, a memory error detector
==9805== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9805== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9805== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==9805== 
==9805== 
==9805== HEAP SUMMARY:
==9805==     in use at exit: 0 bytes in 0 blocks
==9805==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==9805== 
==9805== All heap blocks were freed -- no leaks are possible
==9805== 
==9805== For counts of detected and suppressed errors, rerun with: -v
==9805== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9809== Memcheck, a memory error detector
==9809== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9809== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9809== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==9809== 
==9809== 
==9809== HEAP SUMMARY:
==9809==     in use at exit: 0 bytes in 0 blocks
==9809==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==9809== 
==9809== All heap blocks were freed -- no leaks are possible
==9809== 
==9809== For counts of detected and suppressed errors, rerun with: -v
==9809== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9813== Memcheck, a memory error detector
==9813== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9813== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9813== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==9813== 
==9813== 
==9813== HEAP SUMMARY:
==9813==     in use at exit: 0 bytes in 0 blocks
==9813==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==9813== 
==9813== All heap blocks were freed -- no leaks are possible
==9813== 
==9813== For counts of detected and suppressed errors, rerun with: -v
==9813== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9817== Memcheck, a memory error detector
==9817== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9817== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9817== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==9817== 
==9817== 
==9817== HEAP SUMMARY:
==9817==     in use at exit: 0 bytes in 0 blocks
==9817==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==9817== 
==9817== All heap blocks were freed -- no leaks are possible
==9817== 
==9817== For counts of detected and suppressed errors, rerun with: -v
==9817== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9821== Memcheck, a memory error detector
==9821== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9821== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9821== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==9821== 
==9821== 
==9821== HEAP SUMMARY:
==9821==     in use at exit: 0 bytes in 0 blocks
==9821==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==9821== 
==9821== All heap blocks were freed -- no leaks are possible
==9821== 
==9821== For counts of detected and suppressed errors, rerun with: -v
==9821== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9825== Memcheck, a memory error detector
==9825== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9825== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9825== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==9825== 
==9825== 
==9825== HEAP SUMMARY:
==9825==     in use at exit: 0 bytes in 0 blocks
==9825==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==9825== 
==9825== All heap blocks were freed -- no leaks are possible
==9825== 
==9825== For counts of detected and suppressed errors, rerun with: -v
==9825== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9829== Memcheck, a memory error detector
==9829== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9829== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9829== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==9829== 
==9829== 
==9829== HEAP SUMMARY:
==9829==     in use at exit: 0 bytes in 0 blocks
==9829==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==9829== 
==9829== All heap blocks were freed -- no leaks are possible
==9829== 
==9829== For counts of detected and suppressed errors, rerun with: -v
==9829== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9833== Memcheck, a memory error detector
==9833== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9833== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9833== Command: ./test -r xml "List::reverse\ simple"
==9833== 
==9833== 
==9833== HEAP SUMMARY:
==9833==     in use at exit: 0 bytes in 0 blocks
==9833==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==9833== 
==9833== All heap blocks were freed -- no leaks are possible
==9833== 
==9833== For counts of detected and suppressed errors, rerun with: -v
==9833== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9839== Memcheck, a memory error detector
==9839== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9839== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9839== Command: ./test -r xml "List::reverse\ edge\ cases"
==9839== 
==9839== 
==9839== HEAP SUMMARY:
==9839==     in use at exit: 0 bytes in 0 blocks
==9839==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==9839== 
==9839== All heap blocks were freed -- no leaks are possible
==9839== 
==9839== For counts of detected and suppressed errors, rerun with: -v
==9839== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
[Process timed out]
```
```
[Process timed out]
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
==9893== Memcheck, a memory error detector
==9893== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9893== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9893== Command: ./test -r xml "List::insert\ contents\ #2"
==9893== 
==9893== 
==9893== HEAP SUMMARY:
==9893==     in use at exit: 0 bytes in 0 blocks
==9893==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==9893== 
==9893== All heap blocks were freed -- no leaks are possible
==9893== 
==9893== For counts of detected and suppressed errors, rerun with: -v
==9893== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9898== Memcheck, a memory error detector
==9898== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==9898== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==9898== Command: ./test -r xml "List::waterfall\ simple"
==9898== 
==9898== 
==9898== HEAP SUMMARY:
==9898==     in use at exit: 0 bytes in 0 blocks
==9898==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==9898== 
==9898== All heap blocks were freed -- no leaks are possible
==9898== 
==9898== For counts of detected and suppressed errors, rerun with: -v
==9898== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
