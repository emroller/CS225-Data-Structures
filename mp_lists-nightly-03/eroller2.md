


## Score: 54/114 (47.37%)


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


### ✗ - [0/5] - List::reverse

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


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
==19678== Memcheck, a memory error detector
==19678== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19678== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19678== Command: ./test -r xml "List::insertFront\ size"
==19678== 
==19678== 
==19678== HEAP SUMMARY:
==19678==     in use at exit: 0 bytes in 0 blocks
==19678==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==19678== 
==19678== All heap blocks were freed -- no leaks are possible
==19678== 
==19678== For counts of detected and suppressed errors, rerun with: -v
==19678== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19683== Memcheck, a memory error detector
==19683== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19683== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19683== Command: ./test -r xml "List::insertBack\ size"
==19683== 
==19683== 
==19683== HEAP SUMMARY:
==19683==     in use at exit: 0 bytes in 0 blocks
==19683==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==19683== 
==19683== All heap blocks were freed -- no leaks are possible
==19683== 
==19683== For counts of detected and suppressed errors, rerun with: -v
==19683== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19687== Memcheck, a memory error detector
==19687== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19687== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19687== Command: ./test -r xml "List::insert\ contents"
==19687== 
==19687== 
==19687== HEAP SUMMARY:
==19687==     in use at exit: 0 bytes in 0 blocks
==19687==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==19687== 
==19687== All heap blocks were freed -- no leaks are possible
==19687== 
==19687== For counts of detected and suppressed errors, rerun with: -v
==19687== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19694== Memcheck, a memory error detector
==19694== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19694== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19694== Command: ./test -r xml "List::split\ simple"
==19694== 
==19694== 
==19694== HEAP SUMMARY:
==19694==     in use at exit: 0 bytes in 0 blocks
==19694==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==19694== 
==19694== All heap blocks were freed -- no leaks are possible
==19694== 
==19694== For counts of detected and suppressed errors, rerun with: -v
==19694== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19701== Memcheck, a memory error detector
==19701== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19701== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19701== Command: ./test -r xml "List::_destroy\ empty\ list"
==19701== 
==19701== 
==19701== HEAP SUMMARY:
==19701==     in use at exit: 0 bytes in 0 blocks
==19701==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==19701== 
==19701== All heap blocks were freed -- no leaks are possible
==19701== 
==19701== For counts of detected and suppressed errors, rerun with: -v
==19701== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19705== Memcheck, a memory error detector
==19705== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19705== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19705== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==19705== 
==19705== 
==19705== HEAP SUMMARY:
==19705==     in use at exit: 0 bytes in 0 blocks
==19705==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==19705== 
==19705== All heap blocks were freed -- no leaks are possible
==19705== 
==19705== For counts of detected and suppressed errors, rerun with: -v
==19705== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19709== Memcheck, a memory error detector
==19709== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19709== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19709== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==19709== 
==19709== 
==19709== HEAP SUMMARY:
==19709==     in use at exit: 0 bytes in 0 blocks
==19709==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==19709== 
==19709== All heap blocks were freed -- no leaks are possible
==19709== 
==19709== For counts of detected and suppressed errors, rerun with: -v
==19709== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19713== Memcheck, a memory error detector
==19713== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19713== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19713== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==19713== 
==19713== 
==19713== HEAP SUMMARY:
==19713==     in use at exit: 0 bytes in 0 blocks
==19713==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==19713== 
==19713== All heap blocks were freed -- no leaks are possible
==19713== 
==19713== For counts of detected and suppressed errors, rerun with: -v
==19713== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19717== Memcheck, a memory error detector
==19717== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19717== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19717== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==19717== 
==19717== 
==19717== HEAP SUMMARY:
==19717==     in use at exit: 0 bytes in 0 blocks
==19717==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==19717== 
==19717== All heap blocks were freed -- no leaks are possible
==19717== 
==19717== For counts of detected and suppressed errors, rerun with: -v
==19717== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19721== Memcheck, a memory error detector
==19721== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19721== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19721== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==19721== 
==19721== 
==19721== HEAP SUMMARY:
==19721==     in use at exit: 0 bytes in 0 blocks
==19721==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==19721== 
==19721== All heap blocks were freed -- no leaks are possible
==19721== 
==19721== For counts of detected and suppressed errors, rerun with: -v
==19721== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19725== Memcheck, a memory error detector
==19725== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19725== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19725== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==19725== 
==19725== 
==19725== HEAP SUMMARY:
==19725==     in use at exit: 0 bytes in 0 blocks
==19725==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==19725== 
==19725== All heap blocks were freed -- no leaks are possible
==19725== 
==19725== For counts of detected and suppressed errors, rerun with: -v
==19725== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19755== Memcheck, a memory error detector
==19755== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19755== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19755== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==19755== 
==19755== 
==19755== HEAP SUMMARY:
==19755==     in use at exit: 0 bytes in 0 blocks
==19755==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==19755== 
==19755== All heap blocks were freed -- no leaks are possible
==19755== 
==19755== For counts of detected and suppressed errors, rerun with: -v
==19755== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19761== Memcheck, a memory error detector
==19761== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19761== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19761== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==19761== 
==19761== 
==19761== HEAP SUMMARY:
==19761==     in use at exit: 0 bytes in 0 blocks
==19761==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==19761== 
==19761== All heap blocks were freed -- no leaks are possible
==19761== 
==19761== For counts of detected and suppressed errors, rerun with: -v
==19761== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="28">
        <Original>
          "&lt; 4 12 -1 99 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 12 -1 99 3 >" == "&lt; 3 99 -1 12 4 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==19768== Memcheck, a memory error detector
==19768== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19768== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19768== Command: ./test -r xml "List::reverse\ edge\ cases"
==19768== 
==19768== 
==19768== HEAP SUMMARY:
==19768==     in use at exit: 0 bytes in 0 blocks
==19768==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==19768== 
==19768== All heap blocks were freed -- no leaks are possible
==19768== 
==19768== For counts of detected and suppressed errors, rerun with: -v
==19768== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19778== Memcheck, a memory error detector
==19778== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19778== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19778== Command: ./test -r xml "List::insert\ contents\ #2"
==19778== 
==19778== 
==19778== HEAP SUMMARY:
==19778==     in use at exit: 0 bytes in 0 blocks
==19778==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==19778== 
==19778== All heap blocks were freed -- no leaks are possible
==19778== 
==19778== For counts of detected and suppressed errors, rerun with: -v
==19778== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19782== Memcheck, a memory error detector
==19782== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==19782== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==19782== Command: ./test -r xml "List::waterfall\ simple"
==19782== 
==19782== 
==19782== HEAP SUMMARY:
==19782==     in use at exit: 0 bytes in 0 blocks
==19782==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==19782== 
==19782== All heap blocks were freed -- no leaks are possible
==19782== 
==19782== For counts of detected and suppressed errors, rerun with: -v
==19782== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
