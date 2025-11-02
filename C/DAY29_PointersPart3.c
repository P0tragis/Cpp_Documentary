#include <stdio.h>
void birthday(int *age);
int main() {

    int age = 16;
    //IF WE HAVE A FUNCTION THAT ACCEPTS A POINTER
    //WE DONT NECESSARY NEED TO DECLARE A POINTER THEN PASS IT IN WE COULD JUST PASS IT THE MEMORY ADRESS 
    birthday(&age);
    printf("You are %d years old!\n", age);
    return 0;
}

void birthday(int *age) {
    (*age)++;
}