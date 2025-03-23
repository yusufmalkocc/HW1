#include <stdio.h>
#include <math.h>
int main()
{
    int x , y , z;
    printf("Enter size of the house:");
    scanf("%d",&x);
    printf("Enter the popularity:");
    scanf("%d",&y);
    z= (pow(y,3)+pow(x,2))*10000;
    printf("House value is:%d",z);

    return 0;
}
