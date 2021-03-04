//StorageClasses
#include<stdio.h>
typedef long long ll;
void sumofsquares(ll x);
int main()
{
    register int i;
    auto ll n;
    scanf("%lld", &n);
    ll arr[n];
    for(i=0;i<n;i++)
    arr[i]=i*i;
    for(i=0;i<n;i++)
    sumofsquares(arr[i]);
    printf("\n");
    return 0;
}
void sumofsquares(ll x)
{
    static ll sum=0;
    sum+=x;
    printf("%lld ", sum);
}
