


## Score: 6/16 (37.50%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c maptiles.cpp -o .objs/maptiles.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c mosaiccanvas.cpp -o .objs/mosaiccanvas.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c sourceimage.cpp -o .objs/sourceimage.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tileimage.cpp -o .objs/tileimage.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c util/coloredout.cpp -o .objs/util/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c util/util.cpp -o .objs/util/util.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/ColorSpace/ColorSpace.cpp -o .objs/cs225/ColorSpace/ColorSpace.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/ColorSpace/Comparison.cpp -o .objs/cs225/ColorSpace/Comparison.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/ColorSpace/Conversion.cpp -o .objs/cs225/ColorSpace/Conversion.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/LUVAPixel.cpp -o .objs/cs225/LUVAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/maptiles.o .objs/mosaiccanvas.o .objs/sourceimage.o .objs/tileimage.o .objs/util/coloredout.o .objs/util/util.o .objs/cs225/ColorSpace/ColorSpace.o .objs/cs225/ColorSpace/Comparison.o .objs/cs225/ColorSpace/Conversion.o .objs/cs225/LUVAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part1.o .objs/tests/tests_part2.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - KDTree::testSmallerDimVal Tests

- **Points**: 1 / 1





### ✓ - [1/1] - KDTree::shouldReplace Tests

- **Points**: 1 / 1





### ✓ - [1/1] - KDTree constructor\, 1D (Dim=1)

- **Points**: 1 / 1





### ✓ - [1/1] - KDTree constructor\, 3D (Dim = 3)

- **Points**: 1 / 1





### ✓ - [1/1] - KDTree::findNearestNeighbor\, exact match\, 1D (Dim=1)

- **Points**: 1 / 1





### ✓ - [1/1] - KDTree::findNearestNeighbor\, exact match\, 3D (Dim=3)

- **Points**: 1 / 1





### ✗ - [0/1] - KDTree::findNearestNeighbor (2D)\, returns correct result

- **Points**: 0 / 1


```
FAIL: Your output in "test_result_kdtree_2_2.kd" does not match our output in "tests/expected_kdtree_2_2.kd"
```


### ✗ - [0/1] - KDTree::findNearestNeighbor (2D)\, testing correct path

- **Points**: 0 / 1


```
FAIL: Your output in "test_result_kdtree_2_10.kd" does not match our output in "tests/expected_kdtree_2_10.kd"
```


### ✗ - [0/1] - KDTree::findNearestNeighbor (2D)\, testing correct path with fence jumping

- **Points**: 0 / 1


```
FAIL: Your output in "test_result_kdtree_2_20.kd" does not match our output in "tests/expected_kdtree_2_20.kd"
```


### ✗ - [0/1] - KDTree::findNearestNeighbor (3D)\, testing tie-breaking

- **Points**: 0 / 1


```
FAIL: Your output in "test_result_kdtree_3_14.kd" does not match our output in "tests/expected_kdtree_3_14.kd"
```


### ✗ - [0/1] - KDTree::findNearestNeighbor (3D)\, testing that left recursion does not include the root

- **Points**: 0 / 1


```
FAIL: Your output in "test_result_kdtree_3_10.kd" does not match our output in "tests/expected_kdtree_3_10.kd"
```


### ✗ - [0/5] - Creates a basic MosaicCanvas (gridtest)

- **Points**: 0 / 5


```
Original: canvas != __null
Expanded: nullptr != 0
```


---

This report was generated for **eroller2** using **05a8e8e417e37e1cc7a5818357b11ba19dd1f688** (from **October 31st 2019, 12:15:00 am**)
