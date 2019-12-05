


## Score: 20/36 (55.56%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c CYOA.cpp -o .objs/CYOA.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/DirectedEdgeTests.cpp -o .objs/tests/DirectedEdgeTests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/GraphTests.cpp -o .objs/tests/GraphTests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/ShortestPath.cpp -o .objs/tests/ShortestPath.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/KeyCountingTests.cpp -o .objs/tests/KeyCountingTests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/CYOA.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/DirectedEdgeTests.o .objs/tests/GraphTests.o .objs/tests/ShortestPath.o .objs/tests/KeyCountingTests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Graphs with `DirectedEdge`s have directed edges

- **Points**: 1 / 1





### ✓ - [1/1] - Directed: eight-vertex test graph has correct properties

- **Points**: 1 / 1





### ✓ - [1/1] - Directed: Graph::degree is correct

- **Points**: 1 / 1





### ✓ - [1/1] - Directed: Graph::incidentEdges contains all incident edges

- **Points**: 1 / 1





### ✗ - [0/1] - Directed: Graph::isAdjacent is correct (same-order test)

- **Points**: 0 / 1


```
Original: g.isAdjacent("c", "a") == true
Expanded: false == true
```


### ✓ - [1/1] - Directed: Graph::isAdjacent is correct (opposite-order test)

- **Points**: 1 / 1





### ✗ - [0/1] - Directed: Graph::removeEdge is correct

- **Points**: 0 / 1


```
Original: g.isAdjacent("h", "c") == true
Expanded: false == true
```


### ✓ - [1/1] - Directed: Graph::removeVertex is correct

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::numVertices() returns the vertex count

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::size returns the edge count

- **Points**: 1 / 1





### ✓ - [1/1] - Nine-vertex test graph has correct properties

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::degree is correct

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::removeEdge is correct

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::removeVertex is correct

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::incidentEdges contains incident edges (origin-only test)

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::incidentEdges contains incident edges (dest-only test)

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::incidentEdges contains incident edges (hybrid test)

- **Points**: 1 / 1





### ✗ - [0/1] - Graph::isAdjacent is correct (same-order test)

- **Points**: 0 / 1


```
Original: g.isAdjacent("a", "d") == true
Expanded: false == true
```


### ✗ - [0/1] - Graph::isAdjacent is correct (opposite-order test)

- **Points**: 0 / 1


```
Original: g.isAdjacent("a", "d") == true
Expanded: false == true
```


### ✗ - [0/2] - Graph::shortestPath finds a shortest path with two vertices

- **Points**: 0 / 2


```
Original: path.size() == 2
Expanded: 0 == 2
```


### ✗ - [0/2] - Graph::shortestPath finds a shortest path with three vertices

- **Points**: 0 / 2


```
Original: path.size() == 3
Expanded: 0 == 3
```


### ✗ - [0/2] - Graph::shortestPath finds a shortest path with four vertices

- **Points**: 0 / 2


```
Original: path.size() == 4
Expanded: 0 == 4
```


### ✗ - [0/2] - Graph::shortestPath finds a shortest path with four vertices (reverse)

- **Points**: 0 / 2


```
Original: path.size() == 4
Expanded: 0 == 4
```


### ✗ - [0/2] - Graph::shortestPath finds a shortest path with five vertices

- **Points**: 0 / 2


```
Original: path.size() == 5
Expanded: 0 == 5
```


### ✗ - [0/2] - Graph::shortestPath finds a shortest path with six vertices

- **Points**: 0 / 2


```
Original: path.size() == 6
Expanded: 0 == 6
```


### ✓ - [5/5] - Graph::isAdjacent satisfies runtime constraints

- **Points**: 5 / 5





---

This report was generated for **eroller2** using **990da8eaec0607c5e4bc6a19a2d372cf4e94d7cb** (from **December 4th 2019, 11:59:01 pm**)
