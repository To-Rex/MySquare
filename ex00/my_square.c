#include <stdio.h>
#include <stdlib.h>
int my_square(int x, int y){
  int i, j;
    for( i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            if(i==0 || i == x - 1){
                if(j>0 && j<y - 1){
                    printf("-");
                    continue;
                }
                printf("o");
            }else if(j == 0 || j == y - 1){
                printf("|");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

int main(int ac, char **av){
    if(ac != 3){
        return 0;
    }
    int x = atoi(av[1]);
    int y = atoi(av[2]);
    my_square(x,y);
} 