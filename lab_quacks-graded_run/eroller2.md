


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==3478== Memcheck, a memory error detector
==3478== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3478== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3478== Command: ./test -r xml "sumDigits"
==3478== 
==3478== 
==3478== HEAP SUMMARY:
==3478==     in use at exit: 0 bytes in 0 blocks
==3478==   total heap usage: 1,714 allocs, 1,714 frees, 219,888 bytes allocated
==3478== 
==3478== All heap blocks were freed -- no leaks are possible
==3478== 
==3478== For counts of detected and suppressed errors, rerun with: -v
==3478== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sumDigits" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="26">
      <Section name="Base cases work" filename="tests/basic.cpp" line="27">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Multiple digits sum correctly" filename="tests/basic.cpp" line="31">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==3481== Memcheck, a memory error detector
==3481== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3481== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3481== Command: ./test -r xml "triangle"
==3481== 
==3481== 
==3481== HEAP SUMMARY:
==3481==     in use at exit: 0 bytes in 0 blocks
==3481==   total heap usage: 1,700 allocs, 1,700 frees, 219,440 bytes allocated
==3481== 
==3481== All heap blocks were freed -- no leaks are possible
==3481== 
==3481== For counts of detected and suppressed errors, rerun with: -v
==3481== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="triangle" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="37">
      <Section name="Base cases work" filename="tests/basic.cpp" line="38">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Recursive cases work" filename="tests/basic.cpp" line="41">
        <OverallResults successes="3" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - sum

- **Points**: 3 / 3

```
==3516== Memcheck, a memory error detector
==3516== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3516== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3516== Command: ./test -r xml "sum"
==3516== 
==3516== 
==3516== HEAP SUMMARY:
==3516==     in use at exit: 0 bytes in 0 blocks
==3516==   total heap usage: 1,771 allocs, 1,771 frees, 303,392 bytes allocated
==3516== 
==3516== All heap blocks were freed -- no leaks are possible
==3516== 
==3516== For counts of detected and suppressed errors, rerun with: -v
==3516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sum" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="48">
      <Section name="Sum is correct" filename="tests/basic.cpp" line="53">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="56">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Float sum is correct" filename="tests/basic.cpp" line="69">
        <OverallResults successes="0" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="74">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Did not make any additional stack objects" filename="tests/basic.cpp" line="77">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - isBalanced

- **Points**: 3 / 3

```
==3556== Memcheck, a memory error detector
==3556== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3556== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3556== Command: ./test -r xml "isBalanced"
==3556== 
==3556== 
==3556== HEAP SUMMARY:
==3556==     in use at exit: 0 bytes in 0 blocks
==3556==   total heap usage: 1,763 allocs, 1,763 frees, 315,264 bytes allocated
==3556== 
==3556== All heap blocks were freed -- no leaks are possible
==3556== 
==3556== For counts of detected and suppressed errors, rerun with: -v
==3556== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="isBalanced" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="82">
      <Section name="balanced" filename="tests/basic.cpp" line="85">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="unbalanced" filename="tests/basic.cpp" line="101">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Only used 1 stack" filename="tests/basic.cpp" line="117">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="14" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="14" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 17

- **Points**: 3 / 3

```
==3589== Memcheck, a memory error detector
==3589== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3589== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3589== Command: ./test -r xml "scramble\ 17"
==3589== 
==3589== 
==3589== HEAP SUMMARY:
==3589==     in use at exit: 0 bytes in 0 blocks
==3589==   total heap usage: 1,710 allocs, 1,710 frees, 228,256 bytes allocated
==3589== 
==3589== All heap blocks were freed -- no leaks are possible
==3589== 
==3589== For counts of detected and suppressed errors, rerun with: -v
==3589== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 17" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 9

- **Points**: 3 / 3

```
==3595== Memcheck, a memory error detector
==3595== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3595== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==3595== Command: ./test -r xml "scramble\ 9"
==3595== 
==3595== 
==3595== HEAP SUMMARY:
==3595==     in use at exit: 0 bytes in 0 blocks
==3595==   total heap usage: 1,705 allocs, 1,705 frees, 227,584 bytes allocated
==3595== 
==3595== All heap blocks were freed -- no leaks are possible
==3595== 
==3595== For counts of detected and suppressed errors, rerun with: -v
==3595== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 9" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="158">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/0] - verifySame (EXTRA CREDIT)

- **Points**: 0 / 0


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="verifySame (EXTRA CREDIT)" tags="[extraCredit=1][valgrind][weight=0]" filename="tests/basic.cpp" line="186">
      <Section name="Result for different stack and queue is different" filename="tests/basic.cpp" line="187">
        <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="206">
          <Original>
            verifySame(s, q)== false
          </Original>
          <Expanded>
            true == false
          </Expanded>
        </Expression>
        <OverallResults successes="0" failures="1" expectedFailures="0"/>
      </Section>
      <Section name="Result for same stack and queue is same" filename="tests/basic.cpp" line="224">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **eroller2** using **160a39cda6fd91ca9152f9154fda2b359def6093** (from **September 30th 2019, 12:15:00 am**)
