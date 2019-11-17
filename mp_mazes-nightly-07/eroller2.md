


## Score: 75/215 (34.88%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c dsets.cpp -o .objs/dsets.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c maze.cpp -o .objs/maze.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part1.cpp -o .objs/tests/test_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2.cpp -o .objs/tests/test_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/mazereader.cpp -o .objs/tests/mazereader.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/dsets.o .objs/maze.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/test_part1.o .objs/tests/test_part2.o .objs/tests/mazereader.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - addElements1

- **Points**: 10 / 10





### ✓ - [10/10] - addElements2

- **Points**: 10 / 10





### ✓ - [10/10] - testFindAndSetUnion1

- **Points**: 10 / 10





### ✓ - [10/10] - testFindAndSetUnion2

- **Points**: 10 / 10





### ✓ - [10/10] - testFindAndSetUnion3

- **Points**: 10 / 10





### ✓ - [5/5] - size1

- **Points**: 5 / 5





### ✓ - [10/10] - size2

- **Points**: 10 / 10





### ✗ - [0/10] - testMakeSmallMaze

- **Points**: 0 / 10


```
FAIL: Maze is not connected
```


### ✗ - [0/10] - testMakeMazeConnected

- **Points**: 0 / 10


```
FAIL: Maze is not connected
```


### ✓ - [10/10] - testMakeMazeAcyclic

- **Points**: 10 / 10





### ✗ - [0/10] - testMakeMazeTree1000

- **Points**: 0 / 10


```
FAIL: Maze is not connected
```


### ✗ - [0/10] - testMakeMazeRandom

- **Points**: 0 / 10


```
FAIL: Generated the same 50x50 maze twice
```


### ✗ - [0/10] - testSolveMazeValidPath

- **Points**: 0 / 10


```
FAIL: No solution was generated
```


### ✗ - [0/10] - testSolutionBottomRow

- **Points**: 0 / 10


```
FAIL: Didn't end up at the bottom row
```


### ✗ - [0/10] - testSolutionCorrectSquare

- **Points**: 0 / 10


```
FAIL: Didn't end up at the bottom row
```


### ✗ - [0/10] - testSolveMazeSmall

- **Points**: 0 / 10

```
[Process timed out]
```
```
Unable to Grade (ETIMEDOUT): Your code did not finish within 20000ms.
```


### ✗ - [0/10] - testSolveMazeLarge

- **Points**: 0 / 10


```
Original: soln.getSolutionSize() == solution.size()
Expanded: 3883 (0xf2b) == 0
```


### ✗ - [0/10] - testDrawMazeSmall

- **Points**: 0 / 10


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/10] - testDrawMazeMed

- **Points**: 0 / 10


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/10] - testDrawMazeLarge

- **Points**: 0 / 10


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/10] - testDrawSolutionMed

- **Points**: 0 / 10


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/10] - testDrawSolutionLarge

- **Points**: 0 / 10


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


---

This report was generated for **eroller2** using **5870cfd49225043a4268ab603848996f2b65078b** (from **November 17th 2019, 12:15:00 am**)
