#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,rows,columns;
//integer variable declaration
    char ch;
//char variable declaration
    printf("Enter the number of rows\n");
//Ask input from the user to rows
scanf("%d",&rows);
//Store the row in the rows variable entered by user
 printf("Enter the number of columns\n");
//Ask input from the user to columns
scanf("%d%c",&columns,&ch);
//Store the column in the columns variable entered by user
printf("Enter the character for pattern\n");
//Ask input from the user to symbol
ch=getchar();
//Store the symbol in the ch variable entered by user
printf("\n");
for(i=1; i<=rows; i++){//outer for loop
   for(j=1; j<=rows-i; j++){//inner for loop
   printf(" ");//print space
   }
   for(j=1; j<=columns; j++){//inner for loop
   printf("%c",ch);//print symbol after space
}
 printf("\n");//move to next line
}
getch();
    return 0;
}
