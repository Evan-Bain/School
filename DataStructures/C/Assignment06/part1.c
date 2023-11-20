// created by Evan Bain on 11/19/23

// NOTE: IDE may give warning that 'arr' leaks memory;
// however, this is false: realloc frees the previous used memory of 'arr'
// before assigning new memory.

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
    int* temp = malloc((size - 1) * sizeof(int));

    for(int i = 0; i < size; i++) {
        if(rmIndex == i) continue; // do not add element chosen to remove

        temp[i] = arr[i];
    }
    arr = realloc(temp, (size - 1) * sizeof(int));
    free(temp);

    // print new array
    printf("Update Array Add\n");
    for(int i = 0; i < size - 1; i++) {
        printf("Element:%d ", arr[i]);
        printf("Add: %p\n", &arr[i]);
    }

    free(arr);

    return 0;
}
