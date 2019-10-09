


## Score: 109/114 (95.61%)


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





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==10467== Memcheck, a memory error detector
==10467== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10467== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10467== Command: ./test -r xml "List::merge"
==10467== 
==10467== 
==10467== HEAP SUMMARY:
==10467==     in use at exit: 0 bytes in 0 blocks
==10467==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==10467== 
==10467== All heap blocks were freed -- no leaks are possible
==10467== 
==10467== For counts of detected and suppressed errors, rerun with: -v
==10467== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==10469== Memcheck, a memory error detector
==10469== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10469== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10469== Command: ./test -r xml "List::sort\ simple\ #1"
==10469== 
==10469== 
==10469== HEAP SUMMARY:
==10469==     in use at exit: 0 bytes in 0 blocks
==10469==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==10469== 
==10469== All heap blocks were freed -- no leaks are possible
==10469== 
==10469== For counts of detected and suppressed errors, rerun with: -v
==10469== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==10471== Memcheck, a memory error detector
==10471== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10471== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10471== Command: ./test -r xml "List::sort\ simple\ #2"
==10471== 
==10471== 
==10471== HEAP SUMMARY:
==10471==     in use at exit: 0 bytes in 0 blocks
==10471==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==10471== 
==10471== All heap blocks were freed -- no leaks are possible
==10471== 
==10471== For counts of detected and suppressed errors, rerun with: -v
==10471== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==10477== Memcheck, a memory error detector
==10477== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10477== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10477== Command: ./test -r xml "List::insertFront\ size"
==10477== 
==10477== 
==10477== HEAP SUMMARY:
==10477==     in use at exit: 0 bytes in 0 blocks
==10477==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==10477== 
==10477== All heap blocks were freed -- no leaks are possible
==10477== 
==10477== For counts of detected and suppressed errors, rerun with: -v
==10477== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10481== Memcheck, a memory error detector
==10481== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10481== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10481== Command: ./test -r xml "List::insertBack\ size"
==10481== 
==10481== 
==10481== HEAP SUMMARY:
==10481==     in use at exit: 0 bytes in 0 blocks
==10481==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==10481== 
==10481== All heap blocks were freed -- no leaks are possible
==10481== 
==10481== For counts of detected and suppressed errors, rerun with: -v
==10481== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10483== Memcheck, a memory error detector
==10483== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10483== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10483== Command: ./test -r xml "List::insert\ contents"
==10483== 
==10483== 
==10483== HEAP SUMMARY:
==10483==     in use at exit: 0 bytes in 0 blocks
==10483==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==10483== 
==10483== All heap blocks were freed -- no leaks are possible
==10483== 
==10483== For counts of detected and suppressed errors, rerun with: -v
==10483== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10486== Memcheck, a memory error detector
==10486== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10486== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10486== Command: ./test -r xml "List::split\ simple"
==10486== 
==10486== 
==10486== HEAP SUMMARY:
==10486==     in use at exit: 0 bytes in 0 blocks
==10486==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==10486== 
==10486== All heap blocks were freed -- no leaks are possible
==10486== 
==10486== For counts of detected and suppressed errors, rerun with: -v
==10486== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10489== Memcheck, a memory error detector
==10489== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10489== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10489== Command: ./test -r xml "List::_destroy\ empty\ list"
==10489== 
==10489== 
==10489== HEAP SUMMARY:
==10489==     in use at exit: 0 bytes in 0 blocks
==10489==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==10489== 
==10489== All heap blocks were freed -- no leaks are possible
==10489== 
==10489== For counts of detected and suppressed errors, rerun with: -v
==10489== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10491== Memcheck, a memory error detector
==10491== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10491== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10491== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==10491== 
==10491== 
==10491== HEAP SUMMARY:
==10491==     in use at exit: 0 bytes in 0 blocks
==10491==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==10491== 
==10491== All heap blocks were freed -- no leaks are possible
==10491== 
==10491== For counts of detected and suppressed errors, rerun with: -v
==10491== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10493== Memcheck, a memory error detector
==10493== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10493== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10493== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==10493== 
==10493== 
==10493== HEAP SUMMARY:
==10493==     in use at exit: 0 bytes in 0 blocks
==10493==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==10493== 
==10493== All heap blocks were freed -- no leaks are possible
==10493== 
==10493== For counts of detected and suppressed errors, rerun with: -v
==10493== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10495== Memcheck, a memory error detector
==10495== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10495== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10495== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==10495== 
==10495== 
==10495== HEAP SUMMARY:
==10495==     in use at exit: 0 bytes in 0 blocks
==10495==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==10495== 
==10495== All heap blocks were freed -- no leaks are possible
==10495== 
==10495== For counts of detected and suppressed errors, rerun with: -v
==10495== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10497== Memcheck, a memory error detector
==10497== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10497== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10497== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==10497== 
==10497== 
==10497== HEAP SUMMARY:
==10497==     in use at exit: 0 bytes in 0 blocks
==10497==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==10497== 
==10497== All heap blocks were freed -- no leaks are possible
==10497== 
==10497== For counts of detected and suppressed errors, rerun with: -v
==10497== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10499== Memcheck, a memory error detector
==10499== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10499== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10499== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==10499== 
==10499== 
==10499== HEAP SUMMARY:
==10499==     in use at exit: 0 bytes in 0 blocks
==10499==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==10499== 
==10499== All heap blocks were freed -- no leaks are possible
==10499== 
==10499== For counts of detected and suppressed errors, rerun with: -v
==10499== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10501== Memcheck, a memory error detector
==10501== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10501== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10501== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==10501== 
==10501== 
==10501== HEAP SUMMARY:
==10501==     in use at exit: 0 bytes in 0 blocks
==10501==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==10501== 
==10501== All heap blocks were freed -- no leaks are possible
==10501== 
==10501== For counts of detected and suppressed errors, rerun with: -v
==10501== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10503== Memcheck, a memory error detector
==10503== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10503== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10503== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==10503== 
==10503== 
==10503== HEAP SUMMARY:
==10503==     in use at exit: 0 bytes in 0 blocks
==10503==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==10503== 
==10503== All heap blocks were freed -- no leaks are possible
==10503== 
==10503== For counts of detected and suppressed errors, rerun with: -v
==10503== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10505== Memcheck, a memory error detector
==10505== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10505== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10505== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==10505== 
==10505== 
==10505== HEAP SUMMARY:
==10505==     in use at exit: 0 bytes in 0 blocks
==10505==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==10505== 
==10505== All heap blocks were freed -- no leaks are possible
==10505== 
==10505== For counts of detected and suppressed errors, rerun with: -v
==10505== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10507== Memcheck, a memory error detector
==10507== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10507== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10507== Command: ./test -r xml "List::reverse\ simple"
==10507== 
==10507== 
==10507== HEAP SUMMARY:
==10507==     in use at exit: 0 bytes in 0 blocks
==10507==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==10507== 
==10507== All heap blocks were freed -- no leaks are possible
==10507== 
==10507== For counts of detected and suppressed errors, rerun with: -v
==10507== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10509== Memcheck, a memory error detector
==10509== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10509== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10509== Command: ./test -r xml "List::reverse\ edge\ cases"
==10509== 
==10509== 
==10509== HEAP SUMMARY:
==10509==     in use at exit: 0 bytes in 0 blocks
==10509==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==10509== 
==10509== All heap blocks were freed -- no leaks are possible
==10509== 
==10509== For counts of detected and suppressed errors, rerun with: -v
==10509== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==10511== Memcheck, a memory error detector
==10511== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10511== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10511== Command: ./test -r xml "List::reverseNth\ #3"
==10511== 
==10511== 
==10511== HEAP SUMMARY:
==10511==     in use at exit: 0 bytes in 0 blocks
==10511==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==10511== 
==10511== All heap blocks were freed -- no leaks are possible
==10511== 
==10511== For counts of detected and suppressed errors, rerun with: -v
==10511== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==10513== Memcheck, a memory error detector
==10513== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10513== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10513== Command: ./test -r xml "List::merge\ #2"
==10513== 
==10513== 
==10513== HEAP SUMMARY:
==10513==     in use at exit: 0 bytes in 0 blocks
==10513==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==10513== 
==10513== All heap blocks were freed -- no leaks are possible
==10513== 
==10513== For counts of detected and suppressed errors, rerun with: -v
==10513== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==10515== Memcheck, a memory error detector
==10515== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10515== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10515== Command: ./test -r xml "List::sort\ simple\ #3"
==10515== 
==10515== 
==10515== HEAP SUMMARY:
==10515==     in use at exit: 0 bytes in 0 blocks
==10515==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==10515== 
==10515== All heap blocks were freed -- no leaks are possible
==10515== 
==10515== For counts of detected and suppressed errors, rerun with: -v
==10515== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
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
==10517== Memcheck, a memory error detector
==10517== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10517== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10517== Command: ./test -r xml "List::insert\ contents\ #2"
==10517== 
==10517== 
==10517== HEAP SUMMARY:
==10517==     in use at exit: 0 bytes in 0 blocks
==10517==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==10517== 
==10517== All heap blocks were freed -- no leaks are possible
==10517== 
==10517== For counts of detected and suppressed errors, rerun with: -v
==10517== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==10519== Memcheck, a memory error detector
==10519== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10519== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10519== Command: ./test -r xml "List::split\ edge\ cases"
==10519== 
==10519== 
==10519== HEAP SUMMARY:
==10519==     in use at exit: 0 bytes in 0 blocks
==10519==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==10519== 
==10519== All heap blocks were freed -- no leaks are possible
==10519== 
==10519== For counts of detected and suppressed errors, rerun with: -v
==10519== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::waterfall simple

- **Points**: 5 / 5

```
==10521== Memcheck, a memory error detector
==10521== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10521== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10521== Command: ./test -r xml "List::waterfall\ simple"
==10521== 
==10521== 
==10521== HEAP SUMMARY:
==10521==     in use at exit: 0 bytes in 0 blocks
==10521==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==10521== 
==10521== All heap blocks were freed -- no leaks are possible
==10521== 
==10521== For counts of detected and suppressed errors, rerun with: -v
==10521== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **eroller2** using **b01b9603a53d590dc2a396a738773ff24c45f77a** (from **October 9th 2019, 12:15:00 am**)
