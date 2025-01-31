# game of life
Render game of life using raylib

# build and develop

```
$ meson setup build
$ ninja -C build && ./build/test/testexe
$ ninja -C build && ./build/src/gameoflife
```

# TODO:

create board type or class:
- initialization logic
- importing board states from txt file (check what formats exist for this already)
