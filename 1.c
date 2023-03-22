#include <stdio.h>
void main()
{
    int i,x=5;
    for(i=0;i<x;i++)
    {
        if(i==3)
        {
            goto label;
        }
        printf("%d ",i);
    }
    label:
        printf("jumped to level");
}










