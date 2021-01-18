#include <stdio.h>

//-----
double * findMax(double *array, int num) {
    double max=array[0];
    double *maxPointer=&array[0];
    for (int i = 1; i < num; ++i) {
        if (max<array[i]) {
            max=array[i];
            maxPointer=&array[i];
        }
    }

    return maxPointer;
}
//-----

int main(void) {
    //試しに動かしてみる
    double array[]={3, 4, 2, 1, 5};
    int num=5;
    printf("%p\n", findMax(array, num));

    return 0;
}