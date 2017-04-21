

#include <string.h> // memset, memcpy, memcmp, ...
#include <stdlib.h> // malloc, free

int *join_arrays(int n1, int *arr1, int n2, int *arr2, int n3, int *arr3){
    int *arr = malloc((n1 + n2 + n3) * sizeof(int));
    memcpy(arr, arr1, n1 * sizeof(int));
    memcpy(&arr[n1], arr2, n2 * sizeof(int));
    memcpy(&arr[n1+n2], arr3, n3 * sizeof(int));
    return arr;
}
