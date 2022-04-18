#include "main.h"
/**
 * @brief main - check my print function
 * 
 * Return: 0
 */

int main(void)
{
    char test = 'I';
    int num = -7699;
    char *str = "Chukwuemeka";

    _printf("Hey man, my name is %%c %s and I'm %d.\n", test, str, num);
    
    return 0;
}
