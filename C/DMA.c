// Using malloc() calloc() realloc() free()
#include<stdio.h>
#include<stdlib.h> // Requires library
int main()
{
    int *ptr;
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory insufficient");
        return 1;
    }

    else
    {
        printf("Enter elements\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d",ptr + i);
        }
        
        printf("Displaying elements\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\n",*(ptr + i));
        }
    }
    free(ptr);
        printf("Displaying elements\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\n",*(ptr + i));
        }
    return 0;
}