#include <stdio.h>
#include <stdlib.h>
#include "vector.h"


int main(){
    Vector vec=create_vector();
    
    push_back(&vec,7);
    printf("PUSH 7\n");
    printVector(&vec);
    printf("PUSH 8\n");
    push_back(&vec,8);
    printVector(&vec);
    printf("INSERT INDEX 1 VALUE 5\n");
    insert(&vec,1,5);
    printVector(&vec);
    printf("ERASE ELEMENT IN INDEX 0 \n");
    erase(&vec,0);
    printVector(&vec);
    delete_vector(&vec);
    


    return 0;
}
