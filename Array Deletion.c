#include<stdio.h>
int main()
{
    int array[100],position,i,size;
    printf("Enter An Array Size:\n");
    scanf("%d",&size);
    printf("Enter Array Element:\n");
    for(i=0;i<size;i++)
    {
        printf("Array [%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("Enter Delete Position:\n");
    scanf("%d",&position);
    for(i=position-1;i<size;i++)
    {
        array[i]=array[i+1];
    }
    printf("Array Element After Deletion:\n");
    for(i=0;i<size-1;i++)
    {
        printf("Array [%d] = %d\n",i,array[i]);
    }

    return 0;
}
