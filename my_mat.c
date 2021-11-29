#include<stdio.h>

//The function captures the values of the matrix from the user
//and stores in each cell of the matrix that it receives the
//shortest path that exists between i and j
int dinamicProgramMatrics(int MATRIX[10][10]){
    
    int k, i, j;
    
    //Initialization of the matrix by the values entered by the user.
    for (i = 0 ; i < 10 ; i++){
        for (j = 0 ; j < 10 ; j++){
            scanf("%d", &MATRIX[i][j]);
        }
    }
        
    //Dynamic design using the Floyd – Warshall Algorithm.
    for (k = 0 ; k < 10 ; k++){
        for (i = 0 ; i < 10 ; i++){
            for (j = 0 ; j < 10 ; j++){
                //making sure none of them are worth infinity.
                if ( (MATRIX[i][k] != 0) && (MATRIX[k][j] != 0) ) 
                {
                    if (MATRIX[i][j] == 0 && (i != j)) 
                    {
                        MATRIX[i][j] = (MATRIX[i][k] + MATRIX[k][j]);
                    }
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

//The program captures the values i and j from the user and prints
//"True" if there is a path from i to j. Otherwise, print "False".
int thereIsRoute(int MATRIX[10][10], int i, int j){
    if (MATRIX[i][j] == 0) printf("False\n");
    else printf("True\n");
    return 0;
}

//The program receives from the user the values i and j and prints the
//shortest route from i to j, if there is no route the program will print -1.
int bestRoute(int MATRIX[10][10], int i, int j){
    if (MATRIX[i][j] == 0) printf("%d\n", -1);
    else printf("%d\n", MATRIX[i][j]);
    return 0;
}

    
// }
