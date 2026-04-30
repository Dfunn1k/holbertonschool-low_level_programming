# Holberton School – Low Level Programming

Repositorio académico de práctica intensiva en **C** (fundamentos, memoria, estructuras de datos y herramientas de compilación).

## Objetivo

Fortalecer habilidades de programación de bajo nivel mediante ejercicios progresivos orientados a:

- Sintaxis y flujo de control en C.
- Punteros, memoria dinámica y cadenas.
- Listas enlazadas, tablas hash y manipulación de bits.
- Entrada/salida de archivos, librerías y Makefiles.

## Estructura de módulos

| Carpeta | Tema |
|---|---|
| `0x00-hello_world` | Introducción a C: compilación, preprocesado y primeros programas. |
| `0x01-variables_if_else_while` | Variables, operadores, condicionales y bucles básicos. |
| `0x02-functions_nested_loops` | Funciones en C, prototipos y bucles anidados. |
| `0x03-debugging` | Depuración y análisis de errores lógicos/sintácticos. |
| `0x04-more_functions_nested_loops` | Más práctica con funciones y estructuras de repetición. |
| `0x05-pointers_arrays_strings` | Fundamentos de punteros, arreglos y cadenas. |
| `0x06-pointers_arrays_strings` | Manipulación avanzada de strings y punteros. |
| `0x07-pointers_arrays_strings` | Más ejercicios de memoria, arrays multidimensionales y cadenas. |
| `0x08-recursion` | Resolución de problemas mediante recursión. |
| `0x09-static_libraries` | Creación y uso de bibliotecas estáticas. |
| `0x0A-argc_argv` | Argumentos de línea de comandos (`argc`, `argv`). |
| `0x0B-malloc_free` | Memoria dinámica con `malloc` y `free`. |
| `0x0C-more_malloc_free` | Asignación dinámica avanzada (`calloc`, `realloc`, etc.). |
| `0x0D-preprocessor` | Macros y directivas del preprocesador en C. |
| `0x0E-structures_typedef` | Uso de `struct` y `typedef`. |
| `0x0F-function_pointers` | Punteros a funciones y callbacks básicos. |
| `0x10-variadic_functions` | Funciones variádicas con `<stdarg.h>`. |
| `0x12-singly_linked_lists` | Listas enlazadas simples: creación y recorrido. |
| `0x13-more_singly_linked_lists` | Operaciones avanzadas sobre listas simplemente enlazadas. |
| `0x14-bit_manipulation` | Operaciones bit a bit y conversión binaria. |
| `0x15-file_io` | Entrada/salida de archivos con llamadas del sistema. |
| `0x17-doubly_linked_lists` | Implementación de listas doblemente enlazadas. |
| `0x18-dynamic_libraries` | Creación/carga de bibliotecas dinámicas. |
| `0x1A-hash_tables` | Implementación de tablas hash y funciones hash. |
| `0x1C-makefiles` | Automatización de compilación con `make` y Makefiles. |
| `_PRINTF` | Proyecto colaborativo: implementación personalizada de `printf`. |

## Requisitos generales

- `gcc`
- `make` (en proyectos que incluyen `Makefile`)
- Estilo **Betty**

## Uso rápido

```bash
# Entrar a un módulo
cd 0x00-hello_world

# Compilar (ajustar según archivo/ejercicio)
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 4-puts.c -o 4-puts
./4-puts
```

## Nota

Este repositorio prioriza el aprendizaje y la legibilidad del proceso de resolución de problemas en C.
