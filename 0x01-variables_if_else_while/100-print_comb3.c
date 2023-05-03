#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void) {
        for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                        if (j > i) {
                                putchar(i + '0');
                                putchar(j + '0');
                                if (j != 9 || i != 8) {
                                        putchar(44);
                                        putchar(32);
                                }
                        }
                }
        }
        putchar('\n');
        return 0;
}
