#include<bits/stdc++.h>
#include<numeric>
#define int long long
using namespace std;
__int128_t gcd(__int128_t a, __int128_t b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

__int128_t lcm(__int128_t a, __int128_t b) {
    return (a / gcd(a, b)) * b;
}
 main()
{
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    int d=r-l+1;
    int nd=lcm(n,m);
    n=r/nd;
    m=(l-1)/nd;
    cout<<n-m;
}
