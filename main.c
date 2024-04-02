#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,inp,i,j,position,swap,flag=0,flag2=0;
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++)
    {
        scanf("%d",&inp);
        a[i]=inp;
    }
    for (i = 0; i < (n1 - 1); i++)
    {
        position = i;
        for (j = i + 1; j < n1; j++)
        {
            if (a[position] > a[j])
            {
                position = j;
            }
        }
            if (position != i)
            {
                swap = a[i];
                a[i] = a[position];
                a[position] = swap;
            }
    }
    scanf("%d",&n2);
    int b[n2];
    for(i=0;i<n2;i++)
    {
        scanf("%d",&inp);
        b[i]=inp;
    }
    for (i = 0; i < (n2 - 1); i++)
    {
        position = i;
        for (j = i + 1; j < n2; j++)
        {
            if (b[position] > b[j])
            {
                position = j;
            }
        }
            if (position != i)
            {
                swap = b[i];
                b[i] = b[position];
                b[position] = swap;
            }
    }
    for(i=0;i<n1;i++)
    {
        flag=0;
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            flag2=1;
            printf("%d",a[i]);
            break;
        }
    }
    if(flag2==0)
    {
        printf("NO");
    }
    return 0;
}
