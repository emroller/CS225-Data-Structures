


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m
StickerSheet.cpp:28:21: fatal error: no viable conversion from 'StickerSheet *' to 'const StickerSheet'
        const StickerSheet this_ = new StickerSheet(*image, 10);
                           ^       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~
StickerSheet.cpp:23:15: note: candidate constructor not viable: no known conversion from 'StickerSheet *' to 'const StickerSheet &' for 1st argument; dereference the argument with *
StickerSheet::StickerSheet (const StickerSheet &other) {
              ^
1 error generated.
make: *** [.objs/StickerSheet.o] Error 1

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Image.cpp -o .objs/Image.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c StickerSheet.cpp -o .objs/StickerSheet.o

```


---

This report was generated for **eroller2** using **4e834b21433117fe9fd2ad72eba336d676e21ea9** (from **September 16th 2019, 12:15:00 am**)
