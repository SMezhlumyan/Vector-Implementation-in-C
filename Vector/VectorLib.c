#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

Vector create_vector(){
    Vector vector;
    vector.cap=8;
    vector.array=(int*)malloc(sizeof(int)*(vector.cap));
    return vector;
}

void push_back(Vector* vec,int val){
    if (vec==NULL){
        printf("YOU HAVE NOT VECTOR TO PUSH");
        return;
    }
    if(vec->cap==vec->size){
        vec->cap+=8;
        vec->array=(int*)realloc((vec->array),(vec->cap)*sizeof(int));
    }
    vec->array=(int*)realloc((vec->array),(vec->size)*sizeof(int)+sizeof(int));    
    (vec->size)++;
    (vec->array)[(vec->size)-1]=val;
}


void insert(Vector* vec,int index,int val){
     if (vec==NULL){
        printf("YOU HAVE NOT VECTOR TO PUSH");
        return;
    }
    if(vec->cap==vec->size){
        vec->cap+=8;
        vec->array=(int*)realloc((vec->array),(vec->cap)*sizeof(int));
    }
    (vec->array)[index]=val;


}
void erase(Vector* vec,int index){
     if (vec==NULL){
        printf("YOU HAVE NOT VECTOR TO PUSH\n");
        return;
    }
    if (index>=vec->size)
    {
        printf("ERROR YOU HAVE NOT ELEMENT IN %d INDEX\n",index);
        return;
    }
    for(int i=index;i<(vec->size)-1;i++){
        (vec->array)[i]=(vec->array)[i+1];
    }
    (vec->size)--;
}

void delete_vector(Vector* vec){
    free(vec->array);
    vec->size=0;
    vec->cap=0;
}

void printVector(Vector* vec){

    for(int i=0;i<(vec->size);i++){
        printf("%d->",(vec->array)[i]);
    }
    printf("\n");

}





























    // for(int i=(vec->size)-1;i>0;i--){
    //     if (i==index)
    //     {
    //         (vec->array)[i]==val;//1244
    //         return;
    //     }
    //     else{
    //         (vec->array)[i]=(vec->array)[i-1];
    //     }
        
    // }