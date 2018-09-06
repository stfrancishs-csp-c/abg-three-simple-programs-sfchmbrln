#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int userInput;
    do
    {
    userInput = get_int("\a Enter an integer between 25-50 inclusive: ");
    }
    while ((userInput < 25) || (userInput > 50));
printf("Success\n");
return 0;
}