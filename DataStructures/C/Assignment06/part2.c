// created by Evan Bain on 11/20/23
// implementation of a Flexible Array Member (FAM)

#include <stdio.h>
#include <stdlib.h>

typedef struct fam {
    int length;
    int arr[];
} fam;

int main() {
    int size;

    // create FAM
    printf("Size of the arr:");
    scanf("%d", &size);
    fam* arrFAM = malloc(sizeof(fam*) + size * sizeof(int));
    arrFAM->length = size;

    // create fam elements
    printf("Enter the elements (space/newline seperated):\n");
    for(int i = 0; i < arrFAM->length; i++) {
        scanf("%d", &arrFAM->arr[i]);
    }

    // print FAM
    printf("Arr Start Add: %p\n", &arrFAM->arr[0]);
    printf("Array\n");
    for(int i = 0; i < arrFAM->length; i++) {
        printf("E:%d : ", arrFAM->arr[i]);
        printf("%p\n", &arrFAM->arr[i]);
    }

    free(arrFAM);
    return 0;
}