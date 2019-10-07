


## Score: 73/114 (64.04%)


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


### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==1331== Memcheck, a memory error detector
==1331== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1331== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1331== Command: ./test -r xml "List::merge"
==1331== 
==1331== 
==1331== HEAP SUMMARY:
==1331==     in use at exit: 0 bytes in 0 blocks
==1331==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==1331== 
==1331== All heap blocks were freed -- no leaks are possible
==1331== 
==1331== For counts of detected and suppressed errors, rerun with: -v
==1331== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="105">
        <Original>
          s.str() == "&lt; 2 2 5 >"
        </Original>
        <Expanded>
          "&lt; 2 >" == "&lt; 2 2 5 >"
        </Expanded>
      </Expression>
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
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="120">
        <Original>
          s.str() == "&lt; a b c >"
        </Original>
        <Expanded>
          "&lt; c >" == "&lt; a b c >"
        </Expanded>
      </Expression>
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
Original: b3 == expected
Expanded: PNG(w=900, h=600, hash=4072e7f966ae168d)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Original: b3 == expected
Expanded: PNG(w=900, h=600, hash=7fb9378360f027b9)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==1381== Memcheck, a memory error detector
==1381== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1381== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1381== Command: ./test -r xml "List::insertFront\ size"
==1381== 
==1381== 
==1381== HEAP SUMMARY:
==1381==     in use at exit: 0 bytes in 0 blocks
==1381==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==1381== 
==1381== All heap blocks were freed -- no leaks are possible
==1381== 
==1381== For counts of detected and suppressed errors, rerun with: -v
==1381== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1385== Memcheck, a memory error detector
==1385== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1385== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1385== Command: ./test -r xml "List::insertBack\ size"
==1385== 
==1385== 
==1385== HEAP SUMMARY:
==1385==     in use at exit: 0 bytes in 0 blocks
==1385==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==1385== 
==1385== All heap blocks were freed -- no leaks are possible
==1385== 
==1385== For counts of detected and suppressed errors, rerun with: -v
==1385== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1387== Memcheck, a memory error detector
==1387== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1387== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1387== Command: ./test -r xml "List::insert\ contents"
==1387== 
==1387== 
==1387== HEAP SUMMARY:
==1387==     in use at exit: 0 bytes in 0 blocks
==1387==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==1387== 
==1387== All heap blocks were freed -- no leaks are possible
==1387== 
==1387== For counts of detected and suppressed errors, rerun with: -v
==1387== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1390== Memcheck, a memory error detector
==1390== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1390== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1390== Command: ./test -r xml "List::split\ simple"
==1390== 
==1390== 
==1390== HEAP SUMMARY:
==1390==     in use at exit: 0 bytes in 0 blocks
==1390==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==1390== 
==1390== All heap blocks were freed -- no leaks are possible
==1390== 
==1390== For counts of detected and suppressed errors, rerun with: -v
==1390== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1393== Memcheck, a memory error detector
==1393== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1393== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1393== Command: ./test -r xml "List::_destroy\ empty\ list"
==1393== 
==1393== 
==1393== HEAP SUMMARY:
==1393==     in use at exit: 0 bytes in 0 blocks
==1393==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==1393== 
==1393== All heap blocks were freed -- no leaks are possible
==1393== 
==1393== For counts of detected and suppressed errors, rerun with: -v
==1393== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1395== Memcheck, a memory error detector
==1395== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1395== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1395== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==1395== 
==1395== 
==1395== HEAP SUMMARY:
==1395==     in use at exit: 0 bytes in 0 blocks
==1395==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==1395== 
==1395== All heap blocks were freed -- no leaks are possible
==1395== 
==1395== For counts of detected and suppressed errors, rerun with: -v
==1395== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1420== Memcheck, a memory error detector
==1420== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1420== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1420== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==1420== 
==1420== 
==1420== HEAP SUMMARY:
==1420==     in use at exit: 0 bytes in 0 blocks
==1420==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==1420== 
==1420== All heap blocks were freed -- no leaks are possible
==1420== 
==1420== For counts of detected and suppressed errors, rerun with: -v
==1420== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1424== Memcheck, a memory error detector
==1424== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1424== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1424== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==1424== 
==1424== 
==1424== HEAP SUMMARY:
==1424==     in use at exit: 0 bytes in 0 blocks
==1424==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==1424== 
==1424== All heap blocks were freed -- no leaks are possible
==1424== 
==1424== For counts of detected and suppressed errors, rerun with: -v
==1424== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1428== Memcheck, a memory error detector
==1428== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1428== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1428== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==1428== 
==1428== 
==1428== HEAP SUMMARY:
==1428==     in use at exit: 0 bytes in 0 blocks
==1428==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==1428== 
==1428== All heap blocks were freed -- no leaks are possible
==1428== 
==1428== For counts of detected and suppressed errors, rerun with: -v
==1428== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1431== Memcheck, a memory error detector
==1431== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1431== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1431== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==1431== 
==1431== 
==1431== HEAP SUMMARY:
==1431==     in use at exit: 0 bytes in 0 blocks
==1431==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==1431== 
==1431== All heap blocks were freed -- no leaks are possible
==1431== 
==1431== For counts of detected and suppressed errors, rerun with: -v
==1431== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1435== Memcheck, a memory error detector
==1435== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1435== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1435== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==1435== 
==1435== 
==1435== HEAP SUMMARY:
==1435==     in use at exit: 0 bytes in 0 blocks
==1435==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==1435== 
==1435== All heap blocks were freed -- no leaks are possible
==1435== 
==1435== For counts of detected and suppressed errors, rerun with: -v
==1435== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1438== Memcheck, a memory error detector
==1438== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1438== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1438== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==1438== 
==1438== 
==1438== HEAP SUMMARY:
==1438==     in use at exit: 0 bytes in 0 blocks
==1438==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==1438== 
==1438== All heap blocks were freed -- no leaks are possible
==1438== 
==1438== For counts of detected and suppressed errors, rerun with: -v
==1438== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1442== Memcheck, a memory error detector
==1442== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1442== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1442== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==1442== 
==1442== 
==1442== HEAP SUMMARY:
==1442==     in use at exit: 0 bytes in 0 blocks
==1442==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==1442== 
==1442== All heap blocks were freed -- no leaks are possible
==1442== 
==1442== For counts of detected and suppressed errors, rerun with: -v
==1442== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1446== Memcheck, a memory error detector
==1446== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1446== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1446== Command: ./test -r xml "List::reverse\ simple"
==1446== 
==1446== 
==1446== HEAP SUMMARY:
==1446==     in use at exit: 0 bytes in 0 blocks
==1446==   total heap usage: 2,190 allocs, 2,190 frees, 263,140 bytes allocated
==1446== 
==1446== All heap blocks were freed -- no leaks are possible
==1446== 
==1446== For counts of detected and suppressed errors, rerun with: -v
==1446== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true">
        <StdOut>
here
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==1450== Memcheck, a memory error detector
==1450== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1450== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1450== Command: ./test -r xml "List::reverse\ edge\ cases"
==1450== 
==1450== 
==1450== HEAP SUMMARY:
==1450==     in use at exit: 0 bytes in 0 blocks
==1450==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==1450== 
==1450== All heap blocks were freed -- no leaks are possible
==1450== 
==1450== For counts of detected and suppressed errors, rerun with: -v
==1450== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
"&lt; 10 1 2 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >"
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
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="100">
        <Original>
          s.str() == "&lt; -2 -2 5 >"
        </Original>
        <Expanded>
          "&lt; -2 >" == "&lt; -2 -2 5 >"
        </Expanded>
      </Expression>
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
==1503== Memcheck, a memory error detector
==1503== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1503== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1503== Command: ./test -r xml "List::insert\ contents\ #2"
==1503== 
==1503== 
==1503== HEAP SUMMARY:
==1503==     in use at exit: 0 bytes in 0 blocks
==1503==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==1503== 
==1503== All heap blocks were freed -- no leaks are possible
==1503== 
==1503== For counts of detected and suppressed errors, rerun with: -v
==1503== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1514== Memcheck, a memory error detector
==1514== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1514== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1514== Command: ./test -r xml "List::waterfall\ simple"
==1514== 
==1514== 
==1514== HEAP SUMMARY:
==1514==     in use at exit: 0 bytes in 0 blocks
==1514==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==1514== 
==1514== All heap blocks were freed -- no leaks are possible
==1514== 
==1514== For counts of detected and suppressed errors, rerun with: -v
==1514== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
