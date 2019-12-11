


## Score: 10/10 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c NetworkFlow.cpp -o .objs/NetworkFlow.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NetworkFlow.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Graph a - 4 -> b  has flow of 4.

- **Points**: 1 / 1

```
==23901== Memcheck, a memory error detector
==23901== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23901== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23901== Command: ./test -r xml "Graph\ a\ -\ 4\ -\>\ b\ \ has\ flow\ of\ 4."
==23901== 
==23901== 
==23901== HEAP SUMMARY:
==23901==     in use at exit: 0 bytes in 0 blocks
==23901==   total heap usage: 1,977 allocs, 1,977 frees, 235,032 bytes allocated
==23901== 
==23901== All heap blocks were freed -- no leaks are possible
==23901== 
==23901== For counts of detected and suppressed errors, rerun with: -v
==23901== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 4 -> b  has flow of 4." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes - secret test

- **Points**: 1 / 1

```
==23914== Memcheck, a memory error detector
==23914== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23914== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23914== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes\ -\ secret\ test"
==23914== 
==23914== 
==23914== HEAP SUMMARY:
==23914==     in use at exit: 0 bytes in 0 blocks
==23914==   total heap usage: 2,019 allocs, 2,019 frees, 238,256 bytes allocated
==23914== 
==23914== All heap blocks were freed -- no leaks are possible
==23914== 
==23914== For counts of detected and suppressed errors, rerun with: -v
==23914== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes - secret test" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="23">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Graph a - 10 -> b  has flow of 10.

- **Points**: 1 / 1

```
==23919== Memcheck, a memory error detector
==23919== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23919== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23919== Command: ./test -r xml "Graph\ a\ -\ 10\ -\>\ b\ \ has\ flow\ of\ 10."
==23919== 
==23919== 
==23919== HEAP SUMMARY:
==23919==     in use at exit: 0 bytes in 0 blocks
==23919==   total heap usage: 1,977 allocs, 1,977 frees, 235,032 bytes allocated
==23919== 
==23919== All heap blocks were freed -- no leaks are possible
==23919== 
==23919== For counts of detected and suppressed errors, rerun with: -v
==23919== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 10 -> b  has flow of 10." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="40">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes

- **Points**: 1 / 1

```
==23924== Memcheck, a memory error detector
==23924== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23924== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23924== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes"
==23924== 
==23924== 
==23924== HEAP SUMMARY:
==23924==     in use at exit: 0 bytes in 0 blocks
==23924==   total heap usage: 2,019 allocs, 2,019 frees, 238,064 bytes allocated
==23924== 
==23924== All heap blocks were freed -- no leaks are possible
==23924== 
==23924== For counts of detected and suppressed errors, rerun with: -v
==23924== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="53">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow - secret

- **Points**: 1 / 1

```
==23936== Memcheck, a memory error detector
==23936== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23936== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23936== Command: ./test -r xml "Testing\ simple\ backflow\ -\ secret"
==23936== 
==23936== 
==23936== HEAP SUMMARY:
==23936==     in use at exit: 0 bytes in 0 blocks
==23936==   total heap usage: 2,085 allocs, 2,085 frees, 243,672 bytes allocated
==23936== 
==23936== All heap blocks were freed -- no leaks are possible
==23936== 
==23936== For counts of detected and suppressed errors, rerun with: -v
==23936== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="70">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow

- **Points**: 1 / 1

```
==23941== Memcheck, a memory error detector
==23941== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23941== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23941== Command: ./test -r xml "Testing\ simple\ backflow"
==23941== 
==23941== 
==23941== HEAP SUMMARY:
==23941==     in use at exit: 0 bytes in 0 blocks
==23941==   total heap usage: 2,065 allocs, 2,065 frees, 239,664 bytes allocated
==23941== 
==23941== All heap blocks were freed -- no leaks are possible
==23941== 
==23941== For counts of detected and suppressed errors, rerun with: -v
==23941== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage - secret

- **Points**: 1 / 1

```
==23944== Memcheck, a memory error detector
==23944== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23944== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23944== Command: ./test -r xml "Testing\ full\ pipe\ usage\ -\ secret"
==23944== 
==23944== 
==23944== HEAP SUMMARY:
==23944==     in use at exit: 0 bytes in 0 blocks
==23944==   total heap usage: 2,098 allocs, 2,098 frees, 244,752 bytes allocated
==23944== 
==23944== All heap blocks were freed -- no leaks are possible
==23944== 
==23944== For counts of detected and suppressed errors, rerun with: -v
==23944== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage

- **Points**: 1 / 1

```
==23957== Memcheck, a memory error detector
==23957== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23957== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23957== Command: ./test -r xml "Testing\ full\ pipe\ usage"
==23957== 
==23957== 
==23957== HEAP SUMMARY:
==23957==     in use at exit: 0 bytes in 0 blocks
==23957==   total heap usage: 2,112 allocs, 2,112 frees, 243,072 bytes allocated
==23957== 
==23957== All heap blocks were freed -- no leaks are possible
==23957== 
==23957== For counts of detected and suppressed errors, rerun with: -v
==23957== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="139">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing - secret

- **Points**: 1 / 1

```
==23961== Memcheck, a memory error detector
==23961== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23961== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23961== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing\ -\ secret"
==23961== 
==23961== 
==23961== HEAP SUMMARY:
==23961==     in use at exit: 0 bytes in 0 blocks
==23961==   total heap usage: 2,181 allocs, 2,181 frees, 252,240 bytes allocated
==23961== 
==23961== All heap blocks were freed -- no leaks are possible
==23961== 
==23961== For counts of detected and suppressed errors, rerun with: -v
==23961== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing

- **Points**: 1 / 1

```
==23965== Memcheck, a memory error detector
==23965== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23965== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23965== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing"
==23965== 
==23965== 
==23965== HEAP SUMMARY:
==23965==     in use at exit: 0 bytes in 0 blocks
==23965==   total heap usage: 2,184 allocs, 2,184 frees, 250,424 bytes allocated
==23965== 
==23965== All heap blocks were freed -- no leaks are possible
==23965== 
==23965== For counts of detected and suppressed errors, rerun with: -v
==23965== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="203">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **eroller2** using **b746e1fde53a70dd057186d750c5ee8012c36b2f** (from **December 9th 2019, 12:15:00 am**)
