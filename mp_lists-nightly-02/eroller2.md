


## Score: 34/114 (29.82%)


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
==24345== Memcheck, a memory error detector
==24345== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24345== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24345== Command: ./test -r xml "List::insertFront\ size"
==24345== 
==24345== 
==24345== HEAP SUMMARY:
==24345==     in use at exit: 0 bytes in 0 blocks
==24345==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==24345== 
==24345== All heap blocks were freed -- no leaks are possible
==24345== 
==24345== For counts of detected and suppressed errors, rerun with: -v
==24345== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24347== Memcheck, a memory error detector
==24347== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24347== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24347== Command: ./test -r xml "List::insertBack\ size"
==24347== 
==24347== 
==24347== HEAP SUMMARY:
==24347==     in use at exit: 0 bytes in 0 blocks
==24347==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==24347== 
==24347== All heap blocks were freed -- no leaks are possible
==24347== 
==24347== For counts of detected and suppressed errors, rerun with: -v
==24347== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24349== Memcheck, a memory error detector
==24349== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24349== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24349== Command: ./test -r xml "List::insert\ contents"
==24349== 
==24349== 
==24349== HEAP SUMMARY:
==24349==     in use at exit: 0 bytes in 0 blocks
==24349==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==24349== 
==24349== All heap blocks were freed -- no leaks are possible
==24349== 
==24349== For counts of detected and suppressed errors, rerun with: -v
==24349== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24352== Memcheck, a memory error detector
==24352== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24352== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24352== Command: ./test -r xml "List::split\ simple"
==24352== 
==24352== 
==24352== HEAP SUMMARY:
==24352==     in use at exit: 0 bytes in 0 blocks
==24352==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==24352== 
==24352== All heap blocks were freed -- no leaks are possible
==24352== 
==24352== For counts of detected and suppressed errors, rerun with: -v
==24352== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24355== Memcheck, a memory error detector
==24355== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24355== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24355== Command: ./test -r xml "List::_destroy\ empty\ list"
==24355== 
==24355== 
==24355== HEAP SUMMARY:
==24355==     in use at exit: 0 bytes in 0 blocks
==24355==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==24355== 
==24355== All heap blocks were freed -- no leaks are possible
==24355== 
==24355== For counts of detected and suppressed errors, rerun with: -v
==24355== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24357== Memcheck, a memory error detector
==24357== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24357== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24357== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==24357== 
==24357== 
==24357== HEAP SUMMARY:
==24357==     in use at exit: 0 bytes in 0 blocks
==24357==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==24357== 
==24357== All heap blocks were freed -- no leaks are possible
==24357== 
==24357== For counts of detected and suppressed errors, rerun with: -v
==24357== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24359== Memcheck, a memory error detector
==24359== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24359== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24359== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==24359== 
==24359== 
==24359== HEAP SUMMARY:
==24359==     in use at exit: 0 bytes in 0 blocks
==24359==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==24359== 
==24359== All heap blocks were freed -- no leaks are possible
==24359== 
==24359== For counts of detected and suppressed errors, rerun with: -v
==24359== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24361== Memcheck, a memory error detector
==24361== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24361== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24361== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==24361== 
==24361== 
==24361== HEAP SUMMARY:
==24361==     in use at exit: 0 bytes in 0 blocks
==24361==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==24361== 
==24361== All heap blocks were freed -- no leaks are possible
==24361== 
==24361== For counts of detected and suppressed errors, rerun with: -v
==24361== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24363== Memcheck, a memory error detector
==24363== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24363== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24363== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==24363== 
==24363== 
==24363== HEAP SUMMARY:
==24363==     in use at exit: 0 bytes in 0 blocks
==24363==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==24363== 
==24363== All heap blocks were freed -- no leaks are possible
==24363== 
==24363== For counts of detected and suppressed errors, rerun with: -v
==24363== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24365== Memcheck, a memory error detector
==24365== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24365== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24365== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==24365== 
==24365== 
==24365== HEAP SUMMARY:
==24365==     in use at exit: 0 bytes in 0 blocks
==24365==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==24365== 
==24365== All heap blocks were freed -- no leaks are possible
==24365== 
==24365== For counts of detected and suppressed errors, rerun with: -v
==24365== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24367== Memcheck, a memory error detector
==24367== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24367== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24367== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==24367== 
==24367== 
==24367== HEAP SUMMARY:
==24367==     in use at exit: 0 bytes in 0 blocks
==24367==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==24367== 
==24367== All heap blocks were freed -- no leaks are possible
==24367== 
==24367== For counts of detected and suppressed errors, rerun with: -v
==24367== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24369== Memcheck, a memory error detector
==24369== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24369== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24369== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==24369== 
==24369== 
==24369== HEAP SUMMARY:
==24369==     in use at exit: 0 bytes in 0 blocks
==24369==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==24369== 
==24369== All heap blocks were freed -- no leaks are possible
==24369== 
==24369== For counts of detected and suppressed errors, rerun with: -v
==24369== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24371== Memcheck, a memory error detector
==24371== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24371== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24371== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==24371== 
==24371== 
==24371== HEAP SUMMARY:
==24371==     in use at exit: 0 bytes in 0 blocks
==24371==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==24371== 
==24371== All heap blocks were freed -- no leaks are possible
==24371== 
==24371== For counts of detected and suppressed errors, rerun with: -v
==24371== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24374== Memcheck, a memory error detector
==24374== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24374== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24374== Command: ./test -r xml "List::reverse\ edge\ cases"
==24374== 
==24374== 
==24374== HEAP SUMMARY:
==24374==     in use at exit: 0 bytes in 0 blocks
==24374==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==24374== 
==24374== All heap blocks were freed -- no leaks are possible
==24374== 
==24374== For counts of detected and suppressed errors, rerun with: -v
==24374== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24380== Memcheck, a memory error detector
==24380== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24380== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24380== Command: ./test -r xml "List::insert\ contents\ #2"
==24380== 
==24380== 
==24380== HEAP SUMMARY:
==24380==     in use at exit: 0 bytes in 0 blocks
==24380==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==24380== 
==24380== All heap blocks were freed -- no leaks are possible
==24380== 
==24380== For counts of detected and suppressed errors, rerun with: -v
==24380== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
