*Este proyecto ha sido creado como parte del currículo de 42 por ceboyero.*

# ft_printf

## Descripción
`ft_printf` es una implementación personalizada de la función estándar `printf` de C. Su objetivo es proporcionar una alternativa funcional que cumpla con las restricciones del currículo de 42, permitiendo el manejo de múltiples especificadores de formato como `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, y `%p`.

El proyecto busca profundizar en el entendimiento de la manipulación de argumentos variables, el uso de punteros y la gestión de memoria en C.

## Instrucciones

### Compilación
Para compilar la biblioteca y generar el archivo `libftprintf.a`, ejecuta el siguiente comando en la raíz del proyecto:

```bash
make
```

Esto generará la biblioteca estática `libftprintf.a`.

### Uso
Para usar `ft_printf` en tu proyecto, incluye el archivo de cabecera `ft_printf.h` y enlaza la biblioteca estática:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hola, %s!\n", "mundo");
    return 0;
}
```

Compila tu programa con:

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o main
```

### Limpieza
Para eliminar los archivos objeto y la biblioteca generada:

```bash
make fclean
```

## Recursos
- [Documentación de printf](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic Functions en C](https://en.cppreference.com/w/c/variadic)
- [Guía de Norminette](https://github.com/42School/norminette)

### Uso de IA
Se utilizó IA para:
- Generar ejemplos de código y pruebas.
- Mejorar la estructura del código para cumplir con la Norminette.
- Crear este archivo README.md.

## Decisiones técnicas
- **Algoritmo:** Se eligió un enfoque recursivo para las conversiones numéricas (`ft_puthex`, `ft_putin`) debido a su simplicidad y claridad.
- **Estructura de datos:** Se utilizó una estructura de argumentos variádicos (`va_list`) para manejar múltiples tipos de entrada, siguiendo el estándar de `printf`.

## Ejemplos de uso
```c
ft_printf("Número: %d, Hexadecimal: %x\n", 42, 42);
ft_printf("Puntero: %p\n", &main);
```

Salida esperada:
```
Número: 42, Hexadecimal: 2a
Puntero: 0x7ffee7c3e8b8
```
