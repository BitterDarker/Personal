#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

typedef struct person{
    char name;
    int age;
    long grade;
    short scode;
}Person;

int main(){
    Person *darker;
    printf("%ld\n",sizeof(darker));
    printf("%ld\n",ARRAY_SIZE(darker));
    return 0;
}
