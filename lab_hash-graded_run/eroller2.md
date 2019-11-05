


## Score: 150/150 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==2295== Memcheck, a memory error detector
==2295== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2295== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2295== Command: ./test -r xml "DH::testRemoveEASY"
==2295== 
==2295== 
==2295== HEAP SUMMARY:
==2295==     in use at exit: 0 bytes in 0 blocks
==2295==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==2295== 
==2295== All heap blocks were freed -- no leaks are possible
==2295== 
==2295== For counts of detected and suppressed errors, rerun with: -v
==2295== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==2297== Memcheck, a memory error detector
==2297== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2297== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2297== Command: ./test -r xml "DH::testRemoveHard"
==2297== 
==2297== 
==2297== HEAP SUMMARY:
==2297==     in use at exit: 0 bytes in 0 blocks
==2297==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==2297== 
==2297== All heap blocks were freed -- no leaks are possible
==2297== 
==2297== For counts of detected and suppressed errors, rerun with: -v
==2297== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==2300== Memcheck, a memory error detector
==2300== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2300== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2300== Command: ./test -r xml "DH::testResizeOnce"
==2300== 
==2300== 
==2300== HEAP SUMMARY:
==2300==     in use at exit: 0 bytes in 0 blocks
==2300==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==2300== 
==2300== All heap blocks were freed -- no leaks are possible
==2300== 
==2300== For counts of detected and suppressed errors, rerun with: -v
==2300== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-dh.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==2302== Memcheck, a memory error detector
==2302== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2302== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2302== Command: ./test -r xml "DH::testResizeAll"
==2302== 
==2302== 
==2302== HEAP SUMMARY:
==2302==     in use at exit: 0 bytes in 0 blocks
==2302==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==2302== 
==2302== All heap blocks were freed -- no leaks are possible
==2302== 
==2302== For counts of detected and suppressed errors, rerun with: -v
==2302== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-dh.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==2304== Memcheck, a memory error detector
==2304== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2304== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2304== Command: ./test -r xml "DH::testInsertEasy"
==2304== 
==2304== 
==2304== HEAP SUMMARY:
==2304==     in use at exit: 0 bytes in 0 blocks
==2304==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==2304== 
==2304== All heap blocks were freed -- no leaks are possible
==2304== 
==2304== For counts of detected and suppressed errors, rerun with: -v
==2304== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==2306== Memcheck, a memory error detector
==2306== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2306== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2306== Command: ./test -r xml "DH::testInsertHard"
==2306== 
==2306== 
==2306== HEAP SUMMARY:
==2306==     in use at exit: 0 bytes in 0 blocks
==2306==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==2306== 
==2306== All heap blocks were freed -- no leaks are possible
==2306== 
==2306== For counts of detected and suppressed errors, rerun with: -v
==2306== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==2308== Memcheck, a memory error detector
==2308== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2308== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2308== Command: ./test -r xml "SC::testRemoveEASY"
==2308== 
==2308== 
==2308== HEAP SUMMARY:
==2308==     in use at exit: 0 bytes in 0 blocks
==2308==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==2308== 
==2308== All heap blocks were freed -- no leaks are possible
==2308== 
==2308== For counts of detected and suppressed errors, rerun with: -v
==2308== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==2310== Memcheck, a memory error detector
==2310== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2310== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2310== Command: ./test -r xml "SC::testRemoveHard"
==2310== 
==2310== 
==2310== HEAP SUMMARY:
==2310==     in use at exit: 0 bytes in 0 blocks
==2310==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==2310== 
==2310== All heap blocks were freed -- no leaks are possible
==2310== 
==2310== For counts of detected and suppressed errors, rerun with: -v
==2310== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==2313== Memcheck, a memory error detector
==2313== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2313== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2313== Command: ./test -r xml "SC::testResizeOnce"
==2313== 
==2313== 
==2313== HEAP SUMMARY:
==2313==     in use at exit: 0 bytes in 0 blocks
==2313==   total heap usage: 2,009 allocs, 2,009 frees, 249,760 bytes allocated
==2313== 
==2313== All heap blocks were freed -- no leaks are possible
==2313== 
==2313== For counts of detected and suppressed errors, rerun with: -v
==2313== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-sc.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==2315== Memcheck, a memory error detector
==2315== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2315== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2315== Command: ./test -r xml "SC::testResizeAll"
==2315== 
==2315== 
==2315== HEAP SUMMARY:
==2315==     in use at exit: 0 bytes in 0 blocks
==2315==   total heap usage: 1,908 allocs, 1,908 frees, 242,944 bytes allocated
==2315== 
==2315== All heap blocks were freed -- no leaks are possible
==2315== 
==2315== For counts of detected and suppressed errors, rerun with: -v
==2315== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-sc.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==2317== Memcheck, a memory error detector
==2317== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2317== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2317== Command: ./test -r xml "SC::testInsertEasy"
==2317== 
==2317== 
==2317== HEAP SUMMARY:
==2317==     in use at exit: 0 bytes in 0 blocks
==2317==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==2317== 
==2317== All heap blocks were freed -- no leaks are possible
==2317== 
==2317== For counts of detected and suppressed errors, rerun with: -v
==2317== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==2319== Memcheck, a memory error detector
==2319== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2319== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2319== Command: ./test -r xml "SC::testInsertHard"
==2319== 
==2319== 
==2319== HEAP SUMMARY:
==2319==     in use at exit: 0 bytes in 0 blocks
==2319==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==2319== 
==2319== All heap blocks were freed -- no leaks are possible
==2319== 
==2319== For counts of detected and suppressed errors, rerun with: -v
==2319== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==2326== Memcheck, a memory error detector
==2326== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2326== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2326== Command: ./test -r xml "LP::testRemoveEASY"
==2326== 
==2326== 
==2326== HEAP SUMMARY:
==2326==     in use at exit: 0 bytes in 0 blocks
==2326==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==2326== 
==2326== All heap blocks were freed -- no leaks are possible
==2326== 
==2326== For counts of detected and suppressed errors, rerun with: -v
==2326== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==2329== Memcheck, a memory error detector
==2329== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2329== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2329== Command: ./test -r xml "LP::testRemoveHard"
==2329== 
==2329== 
==2329== HEAP SUMMARY:
==2329==     in use at exit: 0 bytes in 0 blocks
==2329==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==2329== 
==2329== All heap blocks were freed -- no leaks are possible
==2329== 
==2329== For counts of detected and suppressed errors, rerun with: -v
==2329== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="34">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - LP::testResizeOnce

- **Points**: 7 / 7

```
==2331== Memcheck, a memory error detector
==2331== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2331== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2331== Command: ./test -r xml "LP::testResizeOnce"
==2331== 
==2331== 
==2331== HEAP SUMMARY:
==2331==     in use at exit: 0 bytes in 0 blocks
==2331==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==2331== 
==2331== All heap blocks were freed -- no leaks are possible
==2331== 
==2331== For counts of detected and suppressed errors, rerun with: -v
==2331== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-lp.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==2333== Memcheck, a memory error detector
==2333== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2333== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2333== Command: ./test -r xml "LP::testResizeAll"
==2333== 
==2333== 
==2333== HEAP SUMMARY:
==2333==     in use at exit: 0 bytes in 0 blocks
==2333==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==2333== 
==2333== All heap blocks were freed -- no leaks are possible
==2333== 
==2333== For counts of detected and suppressed errors, rerun with: -v
==2333== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-lp.cpp" line="83">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==2335== Memcheck, a memory error detector
==2335== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2335== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2335== Command: ./test -r xml "LP::testInsertEasy"
==2335== 
==2335== 
==2335== HEAP SUMMARY:
==2335==     in use at exit: 0 bytes in 0 blocks
==2335==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==2335== 
==2335== All heap blocks were freed -- no leaks are possible
==2335== 
==2335== For counts of detected and suppressed errors, rerun with: -v
==2335== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==2339== Memcheck, a memory error detector
==2339== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2339== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2339== Command: ./test -r xml "LP::testInsertHard"
==2339== 
==2339== 
==2339== HEAP SUMMARY:
==2339==     in use at exit: 0 bytes in 0 blocks
==2339==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==2339== 
==2339== All heap blocks were freed -- no leaks are possible
==2339== 
==2339== For counts of detected and suppressed errors, rerun with: -v
==2339== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **eroller2** using **d563878be43b1577a7ee073a1c96ad9b08f59c1c** (from **November 4th 2019, 12:15:00 am**)
