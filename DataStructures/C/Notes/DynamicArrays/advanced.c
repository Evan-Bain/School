// created by Evan Bain 11/19/23

#include <stdio.h>

void createVLA();

int main() {
    createVLA();

    return 0;
}

void createVLA() {
    int size;

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