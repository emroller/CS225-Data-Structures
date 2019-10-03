


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
==14087== Memcheck, a memory error detector
==14087== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14087== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14087== Command: ./test -r xml "List::insertFront\ size"
==14087== 
==14087== 
==14087== HEAP SUMMARY:
==14087==     in use at exit: 0 bytes in 0 blocks
==14087==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==14087== 
==14087== All heap blocks were freed -- no leaks are possible
==14087== 
==14087== For counts of detected and suppressed errors, rerun with: -v
==14087== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14089== Memcheck, a memory error detector
==14089== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14089== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14089== Command: ./test -r xml "List::insertBack\ size"
==14089== 
==14089== 
==14089== HEAP SUMMARY:
==14089==     in use at exit: 0 bytes in 0 blocks
==14089==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==14089== 
==14089== All heap blocks were freed -- no leaks are possible
==14089== 
==14089== For counts of detected and suppressed errors, rerun with: -v
==14089== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14114== Memcheck, a memory error detector
==14114== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14114== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14114== Command: ./test -r xml "List::insert\ contents"
==14114== 
==14114== 
==14114== HEAP SUMMARY:
==14114==     in use at exit: 0 bytes in 0 blocks
==14114==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==14114== 
==14114== All heap blocks were freed -- no leaks are possible
==14114== 
==14114== For counts of detected and suppressed errors, rerun with: -v
==14114== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14121== Memcheck, a memory error detector
==14121== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14121== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14121== Command: ./test -r xml "List::split\ simple"
==14121== 
==14121== 
==14121== HEAP SUMMARY:
==14121==     in use at exit: 0 bytes in 0 blocks
==14121==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==14121== 
==14121== All heap blocks were freed -- no leaks are possible
==14121== 
==14121== For counts of detected and suppressed errors, rerun with: -v
==14121== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14127== Memcheck, a memory error detector
==14127== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14127== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14127== Command: ./test -r xml "List::_destroy\ empty\ list"
==14127== 
==14127== 
==14127== HEAP SUMMARY:
==14127==     in use at exit: 0 bytes in 0 blocks
==14127==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==14127== 
==14127== All heap blocks were freed -- no leaks are possible
==14127== 
==14127== For counts of detected and suppressed errors, rerun with: -v
==14127== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14130== Memcheck, a memory error detector
==14130== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14130== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14130== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==14130== 
==14130== 
==14130== HEAP SUMMARY:
==14130==     in use at exit: 0 bytes in 0 blocks
==14130==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==14130== 
==14130== All heap blocks were freed -- no leaks are possible
==14130== 
==14130== For counts of detected and suppressed errors, rerun with: -v
==14130== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14134== Memcheck, a memory error detector
==14134== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14134== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14134== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==14134== 
==14134== 
==14134== HEAP SUMMARY:
==14134==     in use at exit: 0 bytes in 0 blocks
==14134==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==14134== 
==14134== All heap blocks were freed -- no leaks are possible
==14134== 
==14134== For counts of detected and suppressed errors, rerun with: -v
==14134== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14138== Memcheck, a memory error detector
==14138== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14138== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14138== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==14138== 
==14138== 
==14138== HEAP SUMMARY:
==14138==     in use at exit: 0 bytes in 0 blocks
==14138==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==14138== 
==14138== All heap blocks were freed -- no leaks are possible
==14138== 
==14138== For counts of detected and suppressed errors, rerun with: -v
==14138== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14142== Memcheck, a memory error detector
==14142== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14142== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14142== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==14142== 
==14142== 
==14142== HEAP SUMMARY:
==14142==     in use at exit: 0 bytes in 0 blocks
==14142==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==14142== 
==14142== All heap blocks were freed -- no leaks are possible
==14142== 
==14142== For counts of detected and suppressed errors, rerun with: -v
==14142== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14146== Memcheck, a memory error detector
==14146== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14146== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14146== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==14146== 
==14146== 
==14146== HEAP SUMMARY:
==14146==     in use at exit: 0 bytes in 0 blocks
==14146==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==14146== 
==14146== All heap blocks were freed -- no leaks are possible
==14146== 
==14146== For counts of detected and suppressed errors, rerun with: -v
==14146== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14150== Memcheck, a memory error detector
==14150== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14150== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14150== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==14150== 
==14150== 
==14150== HEAP SUMMARY:
==14150==     in use at exit: 0 bytes in 0 blocks
==14150==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==14150== 
==14150== All heap blocks were freed -- no leaks are possible
==14150== 
==14150== For counts of detected and suppressed errors, rerun with: -v
==14150== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14156== Memcheck, a memory error detector
==14156== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14156== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14156== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==14156== 
==14156== 
==14156== HEAP SUMMARY:
==14156==     in use at exit: 0 bytes in 0 blocks
==14156==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==14156== 
==14156== All heap blocks were freed -- no leaks are possible
==14156== 
==14156== For counts of detected and suppressed errors, rerun with: -v
==14156== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14160== Memcheck, a memory error detector
==14160== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14160== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14160== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==14160== 
==14160== 
==14160== HEAP SUMMARY:
==14160==     in use at exit: 0 bytes in 0 blocks
==14160==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==14160== 
==14160== All heap blocks were freed -- no leaks are possible
==14160== 
==14160== For counts of detected and suppressed errors, rerun with: -v
==14160== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14165== Memcheck, a memory error detector
==14165== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14165== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14165== Command: ./test -r xml "List::reverse\ edge\ cases"
==14165== 
==14165== 
==14165== HEAP SUMMARY:
==14165==     in use at exit: 0 bytes in 0 blocks
==14165==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==14165== 
==14165== All heap blocks were freed -- no leaks are possible
==14165== 
==14165== For counts of detected and suppressed errors, rerun with: -v
==14165== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14173== Memcheck, a memory error detector
==14173== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14173== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14173== Command: ./test -r xml "List::insert\ contents\ #2"
==14173== 
==14173== 
==14173== HEAP SUMMARY:
==14173==     in use at exit: 0 bytes in 0 blocks
==14173==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==14173== 
==14173== All heap blocks were freed -- no leaks are possible
==14173== 
==14173== For counts of detected and suppressed errors, rerun with: -v
==14173== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14185== Memcheck, a memory error detector
==14185== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14185== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14185== Command: ./test -r xml "List::waterfall\ simple"
==14185== 
==14185== 
==14185== HEAP SUMMARY:
==14185==     in use at exit: 0 bytes in 0 blocks
==14185==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==14185== 
==14185== All heap blocks were freed -- no leaks are possible
==14185== 
==14185== For counts of detected and suppressed errors, rerun with: -v
==14185== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **eroller2** using **7d485d7475250d9498740d3eae0b80073f9282cd** (from **October 3rd 2019, 12:15:00 am**)
