// created by Evan Bain on 11/19/23
// deletes element from dynamically created array

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    // get array size from input
    printf("Array Size:");
    scanf("%d", &size);

    // get array elements from input
    int* arr = malloc(size * sizeof(int));
    printf("Enter the elements (space/newline seperated):\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // print array's elements and element addresses
    for(int i = 0; i < size; i++) {
        printf("Element:%d ", arr[i]);
        printf("Add: %p\n", &arr[i]);
    }
    printf("\n");

    // get array element to remove from input
    int rmIndex;
    printf("Remove Index i.e., arr[?] =\n");
    scanf("%d", &rmIndex);
    printf("Removing Element = %d.\n", arr[rmIndex]);

    // remove chosen element
    for(int i = rmIndex; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr = realloc(arr, (size - 1) * sizeof(int));

    // print new array
    printf("Update Array Add\n");
    for(int i = 0; i < size - 1; i++) {
        printf("Element:%d ", arr[i]);
        printf("Add: %p\n", &arr[i]);
    }

    free(arr);

    return 0;
}
