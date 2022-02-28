#include <stdio.h>

void meow(int n);

int main(void)
{
    // while loop counter-- variable exists outside of loop
    int i = 0;
    while (i < 3)
    {
        printf("meow\n");
        i++;
    }

    // for loop counter-- variable exists only inside of loop
    for (int i = 0; i < 3; i++){
        meow();
    }

    // with for loop abstracted
    meow(3)
}

void meow(int n)
{
    for (int i = 0; i < n; i++){
    printf("meow\n");
    }
}
