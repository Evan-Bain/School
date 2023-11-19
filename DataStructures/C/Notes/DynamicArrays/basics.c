// created by Evan Bain 11/19/23
// Utilizes the Malloc/Calloc/Realloc functions to create Dynamic Arrays

#include <stdio.h>
#include <stdlib.h>

void mallocCreate();
void callocCreate();
void reallocCreate();

int main() {
    mallocCreate();
    printf("\n");

    callocCreate();
    printf("\n");

    reallocCreate();
    printf("\n");

    return 0;
}

/** Dynamically create array with Malloc **/
void mallocCreate() {
    int size;

    // get input for array size
    printf("\nMALLOC CREATION\n");
    printf("Enter array size:");
    scanf("%d", &size);

    // create array
    int* mallocArr = malloc(size * sizeof(int));
    for(int i = 0; i < size; i++) {
        mallocArr[i] = i + 1;
    }

    // print array
    printf("Array created with Malloc: ");
    for(int i = 0; i < size; i++) {
        printf("%d, ", mallocArr[i]);
    }

    // free memory used by array
    free(mallocArr);
}

/** Dynamically create array with Calloc **/
void callocCreate() {
    int size;

    // get input for array size
    printf("\nCALLOC CREATION\n");
    printf("Enter array size:");
    scanf("%d", &size);

    // create array
    int* callocArr = calloc(size, sizeof(int));
    for(int i = 0; i < size; i++) {
        callocArr[i] = i + 1;
    }

    // print array
    printf("Array created with Calloc: ");
    for(int i = 0; i < size; i++) {
        printf("%d, ", callocArr[i]);
    }

    // free memory used by array
    free(callocArr);
}

void reallocCreate() {
    int size = 10;
    int* reallocArr;

    // get input for array size
    printf("\nREALLOC CREATION\n");

    // create original array
    // NOTE: Warning for leaked memory may display, the warning is false:
    // realloc frees memory from old object
    reallocArr = malloc(10 * sizeof(int));
    for(int i = 0; i < 10; i++) {
        reallocArr[i] = i + 1;
    }

    // print original array
    printf("Original array: ");
    for(int i = 0; i < 10; i++) {
        printf("%d, ", reallocArr[i]);
    }

    printf("\n");

    // get input for new size
    printf("Enter new array size:");
    scanf("%d", &size);

    // re-allocate original array
    reallocArr = realloc(reallocArr, 10 * sizeof(int));
    for(int i = 0; i < size; i++) {
        reallocArr[i] = i + 1;
    }

    // print array
    printf("Array created with Realloc: ");
    for(int i = 0; i < size; i++) {
        printf("%d, ", reallocArr[i]);
    }

    free(reallocArr);
}
