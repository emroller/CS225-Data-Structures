


## Score: 20/20 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - test_heapify_down_1

- **Points**: 1 / 1

```
==27543== Memcheck, a memory error detector
==27543== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27543== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27543== Command: ./test -r xml "test_heapify_down_1"
==27543== 
==27543== 
==27543== HEAP SUMMARY:
==27543==     in use at exit: 0 bytes in 0 blocks
==27543==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==27543== 
==27543== All heap blocks were freed -- no leaks are possible
==27543== 
==27543== For counts of detected and suppressed errors, rerun with: -v
==27543== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_2

- **Points**: 1 / 1

```
==27591== Memcheck, a memory error detector
==27591== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27591== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27591== Command: ./test -r xml "test_heapify_down_2"
==27591== 
==27591== 
==27591== HEAP SUMMARY:
==27591==     in use at exit: 0 bytes in 0 blocks
==27591==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==27591== 
==27591== All heap blocks were freed -- no leaks are possible
==27591== 
==27591== For counts of detected and suppressed errors, rerun with: -v
==27591== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="73">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_3

- **Points**: 1 / 1

```
==27615== Memcheck, a memory error detector
==27615== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27615== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27615== Command: ./test -r xml "test_heapify_down_3"
==27615== 
==27615== 
==27615== HEAP SUMMARY:
==27615==     in use at exit: 0 bytes in 0 blocks
==27615==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==27615== 
==27615== All heap blocks were freed -- no leaks are possible
==27615== 
==27615== For counts of detected and suppressed errors, rerun with: -v
==27615== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="79">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_4

- **Points**: 1 / 1

```
==27622== Memcheck, a memory error detector
==27622== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27622== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27622== Command: ./test -r xml "test_heapify_down_4"
==27622== 
==27622== 
==27622== HEAP SUMMARY:
==27622==     in use at exit: 0 bytes in 0 blocks
==27622==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==27622== 
==27622== All heap blocks were freed -- no leaks are possible
==27622== 
==27622== For counts of detected and suppressed errors, rerun with: -v
==27622== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_5

- **Points**: 1 / 1

```
==27648== Memcheck, a memory error detector
==27648== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27648== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27648== Command: ./test -r xml "test_heapify_down_5"
==27648== 
==27648== 
==27648== HEAP SUMMARY:
==27648==     in use at exit: 0 bytes in 0 blocks
==27648==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==27648== 
==27648== All heap blocks were freed -- no leaks are possible
==27648== 
==27648== For counts of detected and suppressed errors, rerun with: -v
==27648== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="91">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_6

- **Points**: 1 / 1

```
==27670== Memcheck, a memory error detector
==27670== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27670== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27670== Command: ./test -r xml "test_heapify_down_6"
==27670== 
==27670== 
==27670== HEAP SUMMARY:
==27670==     in use at exit: 0 bytes in 0 blocks
==27670==   total heap usage: 1,869 allocs, 1,869 frees, 237,456 bytes allocated
==27670== 
==27670== All heap blocks were freed -- no leaks are possible
==27670== 
==27670== For counts of detected and suppressed errors, rerun with: -v
==27670== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_6" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="100">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_7

- **Points**: 1 / 1

```
==27676== Memcheck, a memory error detector
==27676== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27676== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27676== Command: ./test -r xml "test_heapify_down_7"
==27676== 
==27676== 
==27676== HEAP SUMMARY:
==27676==     in use at exit: 0 bytes in 0 blocks
==27676==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==27676== 
==27676== All heap blocks were freed -- no leaks are possible
==27676== 
==27676== For counts of detected and suppressed errors, rerun with: -v
==27676== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_7" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="106">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_8

- **Points**: 1 / 1

```
==27700== Memcheck, a memory error detector
==27700== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27700== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27700== Command: ./test -r xml "test_heapify_down_8"
==27700== 
==27700== 
==27700== HEAP SUMMARY:
==27700==     in use at exit: 0 bytes in 0 blocks
==27700==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==27700== 
==27700== All heap blocks were freed -- no leaks are possible
==27700== 
==27700== For counts of detected and suppressed errors, rerun with: -v
==27700== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_8" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="112">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_9

- **Points**: 1 / 1

```
==27720== Memcheck, a memory error detector
==27720== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27720== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27720== Command: ./test -r xml "test_heapify_down_9"
==27720== 
==27720== 
==27720== HEAP SUMMARY:
==27720==     in use at exit: 0 bytes in 0 blocks
==27720==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==27720== 
==27720== All heap blocks were freed -- no leaks are possible
==27720== 
==27720== For counts of detected and suppressed errors, rerun with: -v
==27720== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_9" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="118">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="21" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="21" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_10

- **Points**: 1 / 1

```
==27746== Memcheck, a memory error detector
==27746== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27746== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27746== Command: ./test -r xml "test_heapify_down_10"
==27746== 
==27746== 
==27746== HEAP SUMMARY:
==27746==     in use at exit: 0 bytes in 0 blocks
==27746==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==27746== 
==27746== All heap blocks were freed -- no leaks are possible
==27746== 
==27746== For counts of detected and suppressed errors, rerun with: -v
==27746== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_10" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="124">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="30" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="30" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_1

- **Points**: 1 / 1

```
==27756== Memcheck, a memory error detector
==27756== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27756== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27756== Command: ./test -r xml "test_build_heap_1"
==27756== 
==27756== 
==27756== HEAP SUMMARY:
==27756==     in use at exit: 0 bytes in 0 blocks
==27756==   total heap usage: 1,870 allocs, 1,870 frees, 236,992 bytes allocated
==27756== 
==27756== All heap blocks were freed -- no leaks are possible
==27756== 
==27756== For counts of detected and suppressed errors, rerun with: -v
==27756== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_2

- **Points**: 1 / 1

```
==27775== Memcheck, a memory error detector
==27775== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27775== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27775== Command: ./test -r xml "test_build_heap_2"
==27775== 
==27775== 
==27775== HEAP SUMMARY:
==27775==     in use at exit: 0 bytes in 0 blocks
==27775==   total heap usage: 1,872 allocs, 1,872 frees, 237,108 bytes allocated
==27775== 
==27775== All heap blocks were freed -- no leaks are possible
==27775== 
==27775== For counts of detected and suppressed errors, rerun with: -v
==27775== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="141">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_3

- **Points**: 1 / 1

```
==27808== Memcheck, a memory error detector
==27808== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27808== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27808== Command: ./test -r xml "test_build_heap_3"
==27808== 
==27808== 
==27808== HEAP SUMMARY:
==27808==     in use at exit: 0 bytes in 0 blocks
==27808==   total heap usage: 1,873 allocs, 1,873 frees, 237,340 bytes allocated
==27808== 
==27808== All heap blocks were freed -- no leaks are possible
==27808== 
==27808== For counts of detected and suppressed errors, rerun with: -v
==27808== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="153">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_4

- **Points**: 1 / 1

```
==27816== Memcheck, a memory error detector
==27816== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27816== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27816== Command: ./test -r xml "test_build_heap_4"
==27816== 
==27816== 
==27816== HEAP SUMMARY:
==27816==     in use at exit: 0 bytes in 0 blocks
==27816==   total heap usage: 1,874 allocs, 1,874 frees, 237,564 bytes allocated
==27816== 
==27816== All heap blocks were freed -- no leaks are possible
==27816== 
==27816== For counts of detected and suppressed errors, rerun with: -v
==27816== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="165">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_5

- **Points**: 1 / 1

```
==27835== Memcheck, a memory error detector
==27835== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27835== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27835== Command: ./test -r xml "test_build_heap_5"
==27835== 
==27835== 
==27835== HEAP SUMMARY:
==27835==     in use at exit: 0 bytes in 0 blocks
==27835==   total heap usage: 1,876 allocs, 1,876 frees, 239,508 bytes allocated
==27835== 
==27835== All heap blocks were freed -- no leaks are possible
==27835== 
==27835== For counts of detected and suppressed errors, rerun with: -v
==27835== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="177">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_1

- **Points**: 1 / 1

```
==27857== Memcheck, a memory error detector
==27857== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27857== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27857== Command: ./test -r xml "test_update_elem_1"
==27857== 
==27857== 
==27857== HEAP SUMMARY:
==27857==     in use at exit: 0 bytes in 0 blocks
==27857==   total heap usage: 1,870 allocs, 1,870 frees, 237,160 bytes allocated
==27857== 
==27857== All heap blocks were freed -- no leaks are possible
==27857== 
==27857== For counts of detected and suppressed errors, rerun with: -v
==27857== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="192">
      <OverallResult success="true">
        <StdOut>
here
here
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_2

- **Points**: 1 / 1

```
==27862== Memcheck, a memory error detector
==27862== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27862== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27862== Command: ./test -r xml "test_update_elem_2"
==27862== 
==27862== 
==27862== HEAP SUMMARY:
==27862==     in use at exit: 0 bytes in 0 blocks
==27862==   total heap usage: 1,871 allocs, 1,871 frees, 237,228 bytes allocated
==27862== 
==27862== All heap blocks were freed -- no leaks are possible
==27862== 
==27862== For counts of detected and suppressed errors, rerun with: -v
==27862== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="198">
      <OverallResult success="true">
        <StdOut>
here
here
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_3

- **Points**: 1 / 1

```
==27900== Memcheck, a memory error detector
==27900== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27900== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27900== Command: ./test -r xml "test_update_elem_3"
==27900== 
==27900== 
==27900== HEAP SUMMARY:
==27900==     in use at exit: 0 bytes in 0 blocks
==27900==   total heap usage: 1,872 allocs, 1,872 frees, 237,352 bytes allocated
==27900== 
==27900== All heap blocks were freed -- no leaks are possible
==27900== 
==27900== For counts of detected and suppressed errors, rerun with: -v
==27900== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="204">
      <OverallResult success="true">
        <StdOut>
here
here
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_4

- **Points**: 1 / 1

```
==27919== Memcheck, a memory error detector
==27919== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27919== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27919== Command: ./test -r xml "test_update_elem_4"
==27919== 
==27919== 
==27919== HEAP SUMMARY:
==27919==     in use at exit: 0 bytes in 0 blocks
==27919==   total heap usage: 1,872 allocs, 1,872 frees, 237,400 bytes allocated
==27919== 
==27919== All heap blocks were freed -- no leaks are possible
==27919== 
==27919== For counts of detected and suppressed errors, rerun with: -v
==27919== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="210">
      <OverallResult success="true">
        <StdOut>
here
here
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_5

- **Points**: 1 / 1

```
==27922== Memcheck, a memory error detector
==27922== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27922== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27922== Command: ./test -r xml "test_update_elem_5"
==27922== 
==27922== 
==27922== HEAP SUMMARY:
==27922==     in use at exit: 0 bytes in 0 blocks
==27922==   total heap usage: 1,875 allocs, 1,875 frees, 238,908 bytes allocated
==27922== 
==27922== All heap blocks were freed -- no leaks are possible
==27922== 
==27922== For counts of detected and suppressed errors, rerun with: -v
==27922== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="216">
      <OverallResult success="true">
        <StdOut>
here
here
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **eroller2** using **d62933e5631093d12f723a61e02d2119d56b637a** (from **November 11th 2019, 12:15:00 am**)
