


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m
sketchify.cpp:43:10: fatal error: non-const lvalue reference to type 'cs225::PNG' cannot bind to a temporary of type 'cs225::PNG *'
    PNG& output = setupOutput(width, height);
         ^        ~~~~~~~~~~~~~~~~~~~~~~~~~~
1 error generated.
make: *** [.objs/sketchify.o] Error 1

```
```
clang++  -Wno-return-stack-address -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -Wno-return-stack-address -MMD -MP -g -c sketchify.cpp -o .objs/sketchify.o

```


---

This report was generated for **eroller2** using **9061427929076a806b87b63c42034976776a58fc** (from **September 11th 2019, 12:15:00 am**)
