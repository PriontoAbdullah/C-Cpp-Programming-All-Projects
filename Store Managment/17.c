#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("A boro");
        else
            printf("C boro");
    }
    else if(b>c)
            printf("B boro");
        else
            printf("C boro");
}
