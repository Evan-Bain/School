// created by Evan Bain 11/19/23
// implements VLA/FAM to create dynamic array

#include <stdio.h>
#include <stdlib.h>

// struct for FAM
typedef struct fam {
    int length;
    int arr[];
} fam;

void createVLA();
void createFAM();

int main() {
    createVLA();
    printf("\n");

    createFAM();
    printf("\n");

    return 0;
}

/** Creates and prints out VLA **/
void createVLA() {
    int size;

    printf("\nVLA CREATION\n");

    // create VLA
    printf("Enter VLA size:");
    scanf("%d", &size);
    int arrVLA[size];
    for(int i = 0; i  < size; i++) {
        arrVLA[i] = i + 1;
    }

    // print VLA
    printf("Created VLA: ");
    for(int i = 0; i < size; i++) {
        printf("%d, ", arrVLA[i]);
    }
}

/** Creates and prints out FAM **/
void createFAM() {
    int size;

    printf("\nFAM CREATION\n");

    // create FAM
    printf("Enter FAM size:");
    scanf("%d", &size);
    fam* arrFAM = malloc(sizeof(fam*) + size * sizeof(int));
    for(int i = 0; i < size; i++) {
        arrFAM->arr[i] = i + 1;
    }

    // print FAM
    printf("Created FAM: ");
    for(int i = 0; i < size; i++) {
        printf("%d, ", arrFAM->arr[i]);
    }

    free(arrFAM);
}