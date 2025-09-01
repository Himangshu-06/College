#include<stdio.h>
typedef struct Test{
    int G1;
    float G2;
    char G3;
}B;
int main(){
    B T;
    T.G1= 11;
    T.G2= 1.25;
    T.G3= 'G';

    printf("The value is: %d\n", T.G1);
    printf("The value is: %f\n", T.G2);
    printf("The value is: %c", T.G3);
    return 0;
}
