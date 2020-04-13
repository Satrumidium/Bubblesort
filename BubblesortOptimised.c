#include <stdio.h>

void Swap(int *i, int *j);
void graph(int n);
int elements, swap, pass;

int main(void)
{
// Grab elements and values from user
int j, i;
   printf("Please write the number of elements you want sorted: \n");
   scanf("%d",&elements);
   printf("Enter %d integers (spaced): \n", elements);
int values[elements];
   for(int i = 0; i < elements; i++) {
          scanf("%d",&values[i]);
   }

// Bubble Sorter
   for(i = elements - 1; i > 0; i--) {
      for(j = 0; j < i + 1; j++) {
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

// Prints the final bubble sorted values as well as swaps and passes required by the program
printf("Your sorted values are: ");
for (i = 0; i < elements; i++) {
        printf(" %d", values[i]);
    }
printf("\nThis required %d swap(s) and %d pass(es).", swap, pass);
}

// Swap Function
void Swap(int *i, int *j)
{
    if(*i > *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
    swap++;
    }
}

// Graphing Function
void graph(int n)
{
for (int a = 0; a < n - 1; a++) {
    printf("_");
    }
    printf("_ \n");
}
