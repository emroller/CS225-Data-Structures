


## Score: 19/19 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Image.cpp -o .objs/Image.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part1.cpp -o .objs/tests/tests-part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part2.cpp -o .objs/tests/tests-part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/Image.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-part1.o .objs/tests/tests-part2.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Image lighten() lightens pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image lighten() does not lighten a pixel above 1.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) darkens pixels by 0.2

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) does not darken a pixel below 0.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image saturate() saturates a pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) rotates the color

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) keeps the hue in the range 0..360

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2.0) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(10000\, 200) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(240\, 50) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(180\, 80) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(10000\, 200) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(240\, 50) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(180\, 80) scales pixel data in a reasonable way

- **Points**: 1 / 1





---

This report was generated for **eroller2** using **42468eb07fd2918cbf78f02598d48a462eb8086d** (from **September 23rd 2019, 12:15:00 am**)
