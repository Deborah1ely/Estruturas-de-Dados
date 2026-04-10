#include<stdio.h>
#define ROW 4
#define COL 6

int main(){
    char prod[ROW][30] = {"Televisão", "Geladeira","Fogão","Ar"};
    char meses[COL][4] = {"Jan","Fev","Mar","Abr","Mai","Jun"};
    int vprod[ROW][COL] = {{500, 250, 134, 320, 98, 100},{},{},{}};
    int row,col;
    for (row=0; row<ROW; row++)
    {
        printf("%s:\n",prod[row]);
        
    }

    //  for (col=0;col<COL;col++)
    //        printf("    mes: %s quantidade: %d\n",meses[col],vprod[row][col]);

    return 0;
}