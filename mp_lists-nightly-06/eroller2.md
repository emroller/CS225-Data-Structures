


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
==5480== Memcheck, a memory error detector
==5480== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5480== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5480== Command: ./test -r xml "List::insertFront\ size"
==5480== 
==5480== 
==5480== HEAP SUMMARY:
==5480==     in use at exit: 0 bytes in 0 blocks
==5480==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==5480== 
==5480== All heap blocks were freed -- no leaks are possible
==5480== 
==5480== For counts of detected and suppressed errors, rerun with: -v
==5480== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5483== Memcheck, a memory error detector
==5483== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5483== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5483== Command: ./test -r xml "List::insertBack\ size"
==5483== 
==5483== 
==5483== HEAP SUMMARY:
==5483==     in use at exit: 0 bytes in 0 blocks
==5483==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==5483== 
==5483== All heap blocks were freed -- no leaks are possible
==5483== 
==5483== For counts of detected and suppressed errors, rerun with: -v
==5483== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5487== Memcheck, a memory error detector
==5487== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5487== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5487== Command: ./test -r xml "List::insert\ contents"
==5487== 
==5487== 
==5487== HEAP SUMMARY:
==5487==     in use at exit: 0 bytes in 0 blocks
==5487==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==5487== 
==5487== All heap blocks were freed -- no leaks are possible
==5487== 
==5487== For counts of detected and suppressed errors, rerun with: -v
==5487== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5495== Memcheck, a memory error detector
==5495== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5495== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5495== Command: ./test -r xml "List::split\ simple"
==5495== 
==5495== 
==5495== HEAP SUMMARY:
==5495==     in use at exit: 0 bytes in 0 blocks
==5495==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==5495== 
==5495== All heap blocks were freed -- no leaks are possible
==5495== 
==5495== For counts of detected and suppressed errors, rerun with: -v
==5495== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5502== Memcheck, a memory error detector
==5502== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5502== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5502== Command: ./test -r xml "List::_destroy\ empty\ list"
==5502== 
==5502== 
==5502== HEAP SUMMARY:
==5502==     in use at exit: 0 bytes in 0 blocks
==5502==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==5502== 
==5502== All heap blocks were freed -- no leaks are possible
==5502== 
==5502== For counts of detected and suppressed errors, rerun with: -v
==5502== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5506== Memcheck, a memory error detector
==5506== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5506== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5506== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==5506== 
==5506== 
==5506== HEAP SUMMARY:
==5506==     in use at exit: 0 bytes in 0 blocks
==5506==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==5506== 
==5506== All heap blocks were freed -- no leaks are possible
==5506== 
==5506== For counts of detected and suppressed errors, rerun with: -v
==5506== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5510== Memcheck, a memory error detector
==5510== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5510== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5510== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==5510== 
==5510== 
==5510== HEAP SUMMARY:
==5510==     in use at exit: 0 bytes in 0 blocks
==5510==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==5510== 
==5510== All heap blocks were freed -- no leaks are possible
==5510== 
==5510== For counts of detected and suppressed errors, rerun with: -v
==5510== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5516== Memcheck, a memory error detector
==5516== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5516== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5516== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==5516== 
==5516== 
==5516== HEAP SUMMARY:
==5516==     in use at exit: 0 bytes in 0 blocks
==5516==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==5516== 
==5516== All heap blocks were freed -- no leaks are possible
==5516== 
==5516== For counts of detected and suppressed errors, rerun with: -v
==5516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5520== Memcheck, a memory error detector
==5520== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5520== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5520== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==5520== 
==5520== 
==5520== HEAP SUMMARY:
==5520==     in use at exit: 0 bytes in 0 blocks
==5520==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==5520== 
==5520== All heap blocks were freed -- no leaks are possible
==5520== 
==5520== For counts of detected and suppressed errors, rerun with: -v
==5520== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5524== Memcheck, a memory error detector
==5524== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5524== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5524== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==5524== 
==5524== 
==5524== HEAP SUMMARY:
==5524==     in use at exit: 0 bytes in 0 blocks
==5524==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==5524== 
==5524== All heap blocks were freed -- no leaks are possible
==5524== 
==5524== For counts of detected and suppressed errors, rerun with: -v
==5524== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5528== Memcheck, a memory error detector
==5528== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5528== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5528== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==5528== 
==5528== 
==5528== HEAP SUMMARY:
==5528==     in use at exit: 0 bytes in 0 blocks
==5528==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==5528== 
==5528== All heap blocks were freed -- no leaks are possible
==5528== 
==5528== For counts of detected and suppressed errors, rerun with: -v
==5528== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5532== Memcheck, a memory error detector
==5532== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5532== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5532== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==5532== 
==5532== 
==5532== HEAP SUMMARY:
==5532==     in use at exit: 0 bytes in 0 blocks
==5532==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==5532== 
==5532== All heap blocks were freed -- no leaks are possible
==5532== 
==5532== For counts of detected and suppressed errors, rerun with: -v
==5532== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5536== Memcheck, a memory error detector
==5536== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5536== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5536== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==5536== 
==5536== 
==5536== HEAP SUMMARY:
==5536==     in use at exit: 0 bytes in 0 blocks
==5536==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==5536== 
==5536== All heap blocks were freed -- no leaks are possible
==5536== 
==5536== For counts of detected and suppressed errors, rerun with: -v
==5536== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5542== Memcheck, a memory error detector
==5542== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5542== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5542== Command: ./test -r xml "List::reverse\ simple"
==5542== 
==5542== 
==5542== HEAP SUMMARY:
==5542==     in use at exit: 0 bytes in 0 blocks
==5542==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==5542== 
==5542== All heap blocks were freed -- no leaks are possible
==5542== 
==5542== For counts of detected and suppressed errors, rerun with: -v
==5542== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5571== Memcheck, a memory error detector
==5571== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5571== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5571== Command: ./test -r xml "List::reverse\ edge\ cases"
==5571== 
==5571== 
==5571== HEAP SUMMARY:
==5571==     in use at exit: 0 bytes in 0 blocks
==5571==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==5571== 
==5571== All heap blocks were freed -- no leaks are possible
==5571== 
==5571== For counts of detected and suppressed errors, rerun with: -v
==5571== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5616== Memcheck, a memory error detector
==5616== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5616== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5616== Command: ./test -r xml "List::insert\ contents\ #2"
==5616== 
==5616== 
==5616== HEAP SUMMARY:
==5616==     in use at exit: 0 bytes in 0 blocks
==5616==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==5616== 
==5616== All heap blocks were freed -- no leaks are possible
==5616== 
==5616== For counts of detected and suppressed errors, rerun with: -v
==5616== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5635== Memcheck, a memory error detector
==5635== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5635== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5635== Command: ./test -r xml "List::waterfall\ simple"
==5635== 
==5635== 
==5635== HEAP SUMMARY:
==5635==     in use at exit: 0 bytes in 0 blocks
==5635==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==5635== 
==5635== All heap blocks were freed -- no leaks are possible
==5635== 
==5635== For counts of detected and suppressed errors, rerun with: -v
==5635== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
