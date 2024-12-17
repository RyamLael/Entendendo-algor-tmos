#include <stdio.h>
#include <stdlib.h>

/*
Function: Returns the index of the specified item in the given array.
Parameters: Vector, vector length, searched item
*/
int binary_search(int *vet, int vet_size, int item)
{

    int index_start = 0;
    int index_end = vet_size - 1;

    while (index_start <= index_end)
    {
        int mid_index = (index_start + index_end) / 2;

        if (vet[mid_index] == item)
        {
            return mid_index;
        }

        if (vet[mid_index] < item)
        {
            index_start = mid_index + 1;
        }
        else
        {
            index_end = mid_index - 1;
        }
    }

    return -1;
}

/*
Function: Return a vector of the specified lenght and fills all the positions with the entered values
*/
int *createVet()
{
    printf("Specify the lenght of the array that you're creating... \n");
    int vet_size;
    scanf("%d", &vet_size);

    int *vet = (int *)malloc(vet_size * sizeof(int));
    if (vet == NULL)
    {
        printf("Memory alocation error!");
    }

    for (int i = 0; i < vet_size; i++)
    {
        printf("Set the value of element %d of the vector\n", i);
        scanf("%d", &vet[i]);
        system("cls");
    }

    return vet;
}

int main()
{
    int *vet = createVet();
    int item;

    printf("Enter the item that you're searching...\n");
    scanf("%d", &item);

    printf("Index of %d: %d", item, binary_search(vet, sizeof(vet), item));
}
