#include <stdio.h>

int main()
{
    int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("%d\n", a[2]);
    for(int i = 0; i < 20; i++)
    {
        printf("%d - %d\n", a[i], [](int n){return 1+n/2*(n/2+1)+(n%2)*(n+1)/2;}(a[i]));
    }
    return 0;
}
