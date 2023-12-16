#include <stdio.h>
#include <stdlib.h>
#include "file.h"
void readFromFile(const char *filename){
    FILE*file=fopen(filename,"r");
    if(file==NULL){
        printf("Error in opening the file.");
        return 0;
    }
    char line[50000];
    while(fgets(line,sizeof(line),file)!=NULL){
        printf("%s",line);
    }
    fclose(file);
}
void writeIntoFile(const char *filename, char *str){
    FILE*file=fopen(filename,"a");
        if(file==NULL){
           printf("Error in opening the file.");
           return 0;
        }
        fprintf(file,"%s",str);
    fclose(file);

}
int existingFile(const char *filename){
    FILE*file=fopen(filename,"r");
    if(file==NULL){
        return 0;
    }else{
    return 1;
    }
}
