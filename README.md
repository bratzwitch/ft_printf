# ft_printf

A recreation of the C standard library printf function with support for various format specifiers.

## Description

ft_printf is a project that involves recreating the famous printf function from the C standard library. This project teaches you about variadic functions, format parsing, and proper output formatting. It handles multiple data types and conversion specifiers.

## Features

- Supports major format specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
- Handles variadic arguments
- Proper conversion and formatting
- Memory-safe implementation
- Compatible with the original printf behavior

## Function Prototype

```c
int ft_printf(const char *format, ...);
```

## Supported Format Specifiers

- `%c`: Character
- `%s`: String
- `%p`: Pointer address (hexadecimal)
- `%d`: Signed decimal integer
- `%i`: Signed integer
- `%u`: Unsigned decimal integer
- `%x`: Hexadecimal integer (lowercase)
- `%X`: Hexadecimal integer (uppercase)
- `%%`: Literal % character

## Compilation

```bash
make
```

This creates a `libftprintf.a` static library.

## Usage

1. Clone the repository:
```bash
git clone https://github.com/bratzwitch/ft_printf.git
cd ft_printf
```

2. Compile the library:
```bash
make
```

3. Include in your project:
```c
#include "ft_printf.h"
```

4. Compile your program:
```bash
gcc -Wall -Wextra -Werror your_file.c -L. -lftprintf
```

## Example Usage

```c
#include "ft_printf.h"

int main()
{
    int num = 42;
    char *str = "Hello";
    void *ptr = &num;
    
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", str);
    ft_printf("Pointer: %p\n", ptr);
    ft_printf("Decimal: %d\n", num);
    ft_printf("Hexadecimal: %x\n", num);
    ft_printf("Uppercase hex: %X\n", num);
    ft_printf("Unsigned: %u\n", 3000000000U);
    ft_printf("Percentage: %%\n");
    
    return (0);
}
```

## Return Value

Returns the number of characters printed (excluding the null terminator).

## Files Structure

- `ft_printf.c`: Main function implementation
- `ft_printf_utils.c`: Helper functions for conversions
- `ft_printf.h`: Header file with prototypes
- `Makefile`: Compilation rules

## Implementation Details

- Uses `write()` system call for output
- Handles edge cases (NULL pointers, zero values)
- Proper memory management
- No global variables used
- Follows 42 Norm coding standards

## Requirements

- GCC compiler
- Make
- Standard C library headers

## Testing

```c
#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int ret1, ret2;
    
    ret1 = ft_printf("ft_printf: %d %s %x\n", 42, "test", 255);
    ret2 = printf("printf:    %d %s %x\n", 42, "test", 255);
    
    printf("ft_printf returned: %d\n", ret1);
    printf("printf returned:    %d\n", ret2);
    
    return (0);
}
```

## Author

Viacheslav Moroz - 42 Student
