#include <stdio.h>
#include<stdio.h>
int main()
{
    FILE* file = fopen("writefile.c", "r");
    char line[100];
    if ( file == NULL ){ 
        printf( "writefile.c file failed to open." ) ; 
    } 
    else{
        while (fgets(line, sizeof(line), file)) {
            printf("%s", line); 
        }
    }
    fclose(file);

    return 0;
}
