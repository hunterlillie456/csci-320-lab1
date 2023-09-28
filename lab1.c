/*
 * Implement your solution in thi file
 *
 */
#include <stdio.h>

char* readString(char* fileName){
    FILE * ex = fopen("ex.txt","w");
    fprintf(ex,mysteryExplode("abc"));
    char line [100];
    fgets(line,100,ex);
    fileName = line;
    return fileName;
}

char* mysteryExplode(const char* str){

}

