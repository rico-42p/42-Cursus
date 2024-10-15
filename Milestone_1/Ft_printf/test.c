#include <stdio.h>

#include "ft_printf.h"  ///////////////////////  gcc -Wall -Werror -Wextra test.c libftprintf.a && ./a.out

int main() {
    int ret_ft;
    int ret_printf;

    // Test simple avec une chaîne de caractères
    ret_ft = ft_printf("Test   string: %s\n", "Hello, world!");
    ret_printf = printf("Printf string: %s\n", "Hello, world!");
    printf("Retour ft_printf: %d | Retour printf: %d\n\n", ret_ft, ret_printf);

    // Test avec des entiers
    ret_ft = ft_printf("Test   integer: %d\n", 42);
    ret_printf = printf("Printf integer: %d\n", 42);
    printf("Retour ft_printf: %d | Retour printf: %d\n\n", ret_ft, ret_printf);

    // Test avec des hexadécimaux
    ret_ft = ft_printf("Test   hex: %x\n", 255);
    ret_printf = printf("Printf hex: %x\n", 255);
    printf("Retour ft_printf: %d | Retour printf: %d\n\n", ret_ft, ret_printf);

    // Test avec des pourcentages
    ret_ft = ft_printf("Test   percentage: %%\n");
    ret_printf = printf("Printf percentage: %%\n");
    printf("Retour ft_printf: %d | Retour printf: %d\n\n", ret_ft, ret_printf);

    return 0;
}


// #include <stdio.h>
// #include "ft_printf.h"

// int main() {
//     int ret_ft, ret_printf;

//     // Tests combinant différents types
//     ret_ft = ft_printf("FT_:    Char: %c, String: %s, Int: %d, Hex: %x, Pointer: %p\n", 'A', "42", 123, 255, &ret_ft);
//     ret_printf = printf("prin:   Char: %c, String: %s, Int: %d, Hex: %x, Pointer: %p\n", 'A', "42", 123, 255, &ret_ft);
//     printf("ft_printf ret: %d | printf ret: %d\n\n", ret_ft, ret_printf);

//     // Tests pourcentage et caractères spéciaux
//     ret_ft = ft_printf("FT_:    Escaped percent sign: %% | Special chars: \\n \\t\n");
//     ret_printf = printf("prin:   Escaped percent sign: %% | Special chars: \\n \\t\n");
//     printf("ft_printf ret: %d | printf ret: %d\n\n", ret_ft, ret_printf);

//     // Test avec des nombres négatifs et unsigned
//     ret_ft = ft_printf("FT_:    Negative and unsigned: %d, %u\n", -42, 42);
//     ret_printf = printf("prin:   Negative and unsigned: %d, %u\n", -42, 42);
//     printf("ft_printf ret: %d | printf ret: %d\n", ret_ft, ret_printf);

//     return 0;
// }