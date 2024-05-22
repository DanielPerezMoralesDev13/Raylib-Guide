<!-- Autor: Daniel Benjamin Perez Morales -->
<!-- GitHub: https://github.com/DanielPerezMoralesDev13 -->
<!-- Correo electrónico: danielperezdev@proton.me  -->
# ***compilacion raylib***

```bash
gcc -Wall -Wextra -pedantic -std=c11 -Werror -Wunused -Wuninitialized -Wshadow -Wformat -Wconversion -Wmissing-prototypes -Wmissing-declarations -Wcast-qual -Wpointer-arith -Wlogical-op -o main main.c /usr/local/lib/libraylib.a -lm
```

## ***compilacion avanzada***

```bash
gcc -Wall -Wextra -pedantic -std=c11 -Werror -Wunused -Wuninitialized -Wshadow -Wformat -Wconversion -Wmissing-prototypes -Wmissing-declarations -Wcast-qual -Wpointer-arith -Wlogical-op -o main main.c /usr/local/lib/libraylib.a -lm -lpthread -ldl -lrt -lX11
```
