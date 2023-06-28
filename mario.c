#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int x, l, s ,d;

    do{
        x = get_int("Height: ");
    }while(x < 1 || x > 8);

    for(l = 0; l < x; l++){
        for(d = 0; d < x - l - 1; d++){
            printf(" ");
        }
        for(s = 0; s <= l; s++){
            printf("#");
        }
        printf("\n");
    }
}