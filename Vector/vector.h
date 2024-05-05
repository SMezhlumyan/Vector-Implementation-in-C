typedef struct Vector
{
    int* array;
    int size;
    int cap;
} Vector;

Vector create_vector();

void push_back(Vector*,int);

void insert(Vector*,int,int);// (vector,index,val)
    
void erase(Vector*,int);

void delete_vector(Vector*);

void printVector(Vector*);