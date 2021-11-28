#include<stdio.h>
#include"my_mat.h"

int Mat[10][10];

int main(){
    int i,j;
    char letter = 'E';
    while (letter != 'D')
    {
        // scan the input char
        scanf("%c", &letter);

        // 1) if the char is A:
        if (letter == 'A')
        {
            dinamicProgramMatrics(Mat);
        }
        // 2) if the char is B:
        else if (letter == 'B')
        {
            scanf("%d", &i);
            scanf("%d", &j);
            thereIsRoute(Mat, i, j);
        }
        // 3) if the char is C:
        else if (letter == 'C')
        {
            scanf("%d", &i);
            scanf("%d", &j);
            bestRoute(Mat, i, j);
        }   
        
    }
    
}