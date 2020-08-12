#include <stdio.h>
#include <stdlib.h>

void Swap(int *i, int *j);
void graph(int n);
static int swap, pass;

int main(void) {
// Grabs the number of elements and the values from the user
   int elements;

   printf("Please write the number of elements you want sorted: \n");
   scanf("%d", &elements);
   
   printf("Enter %d integers (spaced): \n", elements);

   int* values;
   values = (int*) malloc(elements * sizeof(double));

   for(int i = 0; i < elements; i++) {
          scanf("%d", &values[i]);
   }

// Sorts values using the bubblesorting algorithm
   for(int i = elements - 1; i > 0; i--) {
      for(int j = 0; j < i; j++) {
         Swap(&values[j], &values[j + 1]);      
    }

// Graphs the current values in this pass
    for (int k = 0; k < elements; k++) {
        printf("%d ", values[k]);
        graph(values[k]);
    }
    pass++;
    printf("--------------------------\n");
}
// Prints the final bubble sorted values as well as the swaps and passes
    printf("Your sorted values are: ");
    for (int i = 0; i < elements; i++) {
        printf(" %d", values[i]);
    }
    printf("\nThis required %d swap(s) and %d pass(es).", swap, pass);
    free(values);
}

// Swaps 2 values if the first is greater than the second
void Swap(int *i, int *j) {
    if(*i > *j) {
        int temp = *i;
        *i = *j;
        *j = temp;
        swap++;
    }
}
// Graphing Function - Prints a graph consisting of "_" as the bars
void graph(int n) {
    for (int a = 0; a < n - 1; a++) {
        printf("_");
        }
        printf("_ \n");
}
