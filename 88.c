include <stdio.h>
int main()
{
    int n, k, j, g, lcm;
    scanf("%d %d",&n,&k);

    for(j=1; j<= n && j <= k; ++j)
    {
        if(n%j==0 && k%j==0)
            g = j;
    }

    lcm = (n*k)/g;
    printf("%d",lcm);

    return 0;
}
