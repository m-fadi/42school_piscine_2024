// • Create a function that displays the memory area onscreen.
// • The display of this memory area should be split into three "columns" separated by a space :
//    - The hexadecimal address of the first line’s first character followed by a ’:’.
//    -The content in hexadecimal with a space each 2 characters and should be
//      padded with spaces if needed (see the example below)
//    -The content in printable characters.
// • If a character is non -printable,it’ll be replaced by a dot.
// • Each line should handle sixteen characters.
// • If size is equal to 0, nothing should be displayed.
// • Example
// : $ >./ ft_print_memory
// 000000010a161f40 : 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
// 000000010a161f50 : 6368 6573 090a 0963 0720 6573 7420 666f ches... c.est fo
// 000000010a161f60 : 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on
// 000000010a161f70 : 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.
// 000000010a161f80 : 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..
// 000000010a161f90 : 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol..$
//  >./ ft_print_memory | cat - te
// 0000000107ff9f40 : 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin$
// 0000000107ff9f50 : 6368 6573 090a 0963 0720 6573 7420 666f ches... c.est fo$
// 0000000107ff9f60 : 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on $
// 0000000107ff9f70 : 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.$
// 0000000107ff9f80 : 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..$
// 0000000107ff9f90 : 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol..$ $ >
// • Here’s how it should be prototyped :;
// • It should return addr.
// #include <stdio.h>
#include <unistd.h>

// #include <unistd.h>

void xy_putchar(char c)
{
     write(1, &c, 1);
}

void *str_to_hex(void *addr, unsigned int size)
{
     unsigned int i = 0;
     unsigned char *addr_lng = (unsigned char *)addr;

     char *hex_char = "0123456789abcdef";
     while (i < size)
     {
          xy_putchar(hex_char[addr_lng[i] / 16]);
          xy_putchar(hex_char[addr_lng[i] % 16]);
          if ((i + 1) % 2 == 0)
               xy_putchar(' ');
          i++;
     }
     return (addr);
}
void ft_print_memory(void *addr, unsigned int size)
{
     char *hex_char = "0123456789abcdef";
     unsigned long addr_lng = (unsigned long)addr;
     // printf(" addr:  %p \n ", (void *)addr);
     // printf(" addr_lng:  %p \n ", (void *)addr_lng);
     char number[16];

     unsigned int i = size;
     while (i < size)
     {
          number[i++] = hex_char[addr_lng & 0xf];
          // printf(" addr_lng: %ld \n ", addr_lng);
          addr_lng >>= 4;
     }
     write(1, number, 16);
     write(1, " : ", 3);
     str_to_hex(addr, sizeof(addr));
}

int main()
{
     char *str = " Bonjour les amin";
     ft_print_memory(str, sizeof(str));
     return 0;
}
