//字符串，打印方框
#include<stdio.h>
int main(){
    char c[ ][9]={
    {'*',' ','*',' ','*',' ','*',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ','*',' ','*',' ','*',' ','*'},
    };
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
            printf("%c",c[i][j]);
        printf("\n");
    }
    return 0;
}