

// Create a function that returns the result of the conversion of the string nbr from a
//     base base_from to a base base_to.
// • nbr,base_from, base_to may be not writable.
// • nbr will follow the same rules as ft_atoi_base(from an other module).Beware of
// ’+’, ’-’ and whitespaces.
// • The number represented by nbr must fit inside an int.
// • If a base is wrong, NULL should be returned.
// • The returned number must be prefix only by a single and uniq ’-’
//  if necessary, no whitespaces, no ’+’.
// • Here’s how it should be prototyped :

// Files to turn in : ft_convert_base.c, ft_convert_base2.c
//  Allowed functions : malloc, free

#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int str_len(char *s)
{
    int i = 0;
    while (*s++)
        i++;
    return (i);
}

int base_is_valid(char *str)
{
    int i = 1;
    if (str_len(str) == 0 || !*str)
        return (0);
    while (*str)
    {
        while (*str != str[i] && i < str_len(str) && *str != '-' && *str != '+')
            i++;
        if (*str == str[i] || *str == '-' || *str == '+')
            return (0);
        str++;
    }
    return (1);
}
// should work for any base smaller than base 10
int atoi_smaller_10(char *str, int number, int base_len, char *base)
{

    while ((*str <= base[base_len - 1] && *str >= base[0]))
    {
        number = number * base_len + *str++ - '0';
    }
    return (number);
}
// for Hex numbers
int atoi_16(char *str, int number)
{

    while ((*str >= '0' && *str <= '9') || (*str >= 'A' && *str <= 'F') || (*str >= 'a' && *str <= 'f'))
    {
        if (*str >= '0' && *str <= '9')
            number = number * 16 + (*str - '0');
        else if (*str >= 'A' && *str <= 'F')
            number = number * 16 + (*str - 'A' + 10);
        else if (*str >= 'a' && *str <= 'f')
            number = number * 16 + (*str - 'a' + 10);
        str++;
    }

    return (number);
}
convert_to_decimal(char *nbr, char *base_from)
{
    // convert the string nbr to decimal number
    char *hex_str= "0123456789abcdef"

}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    if (!base_is_valid(base_from) || !base_is_valid(base_to))
        return (0);
    int converted_num = 0;
    int sign = 1;
    while (*nbr == ' ' || *nbr == '\t' || (*nbr > 9 && *nbr <= 13))
        nbr++;
    while (*nbr == '-' || *nbr == '+')
    {
        if (*nbr == '-')
            sign *= -1;
        nbr++;
    }

    int base_len = str_len(base_to);
    int decimal_number = convert_to_decimal(nbr, base_from);
    if (base_len <= 10)
        converted_num = atoi_smaller_10(nbr, converted_num, base_len, base_to);
    else if (base_len == 16)
        converted_num = atoi_16(nbr, converted_num);
    return (converted_num * sign);
}