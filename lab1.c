/*
 * Implement your solution in thi file
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"

char* readString(char* fileName){
    FILE * ex = fopen(fileName,"r");
    char* line = (char *)malloc(MAX_LINE_LEN*sizeof(char));
    fgets(line,100,ex);
    return line;
}


char* mysteryExplode(const char* str){
    char* newString = (char *)malloc(((strlen(str)*(strlen(str)+1))/2)+1);
  	
    for (int i=0; i<=strlen(str)-1;i++){
        strncat(newString, str, i);
    }
    return newString;
}