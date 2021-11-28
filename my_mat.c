#include<stdio.h>
// int Mat[10][10];

int dinamicProgramMatrics(int MATRIX[10][10]){
    
    int k, i, j;
    
    for (i = 0 ; i < 10 ; i++){
        for (j = 0 ; j < 10 ; j++){
            scanf("%d", &MATRIX[i][j]);
        }
    }
        
    
    for (k = 0 ; k < 10 ; k++){
        for (i = 0 ; i < 10 ; i++){
            for (j = 0 ; j < 10 ; j++){
                if ( (MATRIX[i][k] != 0) && (MATRIX[k][j] != 0) ) {
                    // if (MATRIX[i][j] == 0) 
                    // {
                    //     MATRIX[i][j] = (MATRIX[i][k] + MATRIX[k][j]);
                    // }
                    if (MATRIX[i][j] > ( MATRIX[i][k] + MATRIX[k][j]) )
                    {
                         MATRIX[i][j] = MATRIX[i][k] + MATRIX[k][j];
                    }
                }
                
            }
        }
        
    }
    return 0;
}

int thereIsRoute(int MATRIX[10][10], int i, int j){
    if (MATRIX[i][j] == 0) printf("False\n");
    else printf("True\n");
    return 0;
}

int bestRoute(int MATRIX[10][10], int i, int j){
    if (MATRIX[i][j] == 0) printf("%d\n", -1);
    else printf("%d\n", MATRIX[i][j]);
    return 0;
}

// int main(){
//     int i,j;
//     char letter = 'E';
//     while (letter != 'D')
//     {
//         // scan the input char
//         scanf("%c", &letter);

//         // 1) if the char is A:
//         if (letter == 'A')
//         {
//             dinamicProgramMatrics(Mat);
//         }
//         // 2) if the char is B:
//         else if (letter == 'B')
//         {
//             scanf("%d", &i);
//             scanf("%d", &j);
//             thereIsRoute(Mat, i, j);
//         }
//         // 3) if the char is C:
//         else if (letter == 'C')
//         {
//             scanf("%d", &i);
//             scanf("%d", &j);
//             bestRoute(Mat, i, j);
//         }   
        
//     }
    
// }