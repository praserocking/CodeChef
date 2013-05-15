#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<queue>
#include<cstring>
#include<cctype>
#define mn(a,b) a>b?b:a
#define loop(n,i) for(int i=0;i<n;i++)
#define mx(a,b) a>b?a:b
#define PI 3.14159
#define put printf
#define get scanf
#define all(a) a.begin(),a.end()
#define iter vector<int>::iterator
#define szf sizeof
#define setfiles freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
template <class type>type fact(type n){return n==1?1:fact(n-1)*n;}
template <class type>type gcd(type a,type b){return b==0?a:gcd(b,a%b);}
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
/* CODER: prassi */
/* B.Tech,IT.,SASTRA University,Tanjore. */
/* pre-computation code */
/*  #include<iostream>
	#include<cmath>
	using namespace std;
	int main()
	{
		long long a[31];
		int i,j=1;
		for(i=0;i<31;i++)
		{
			a[i]=pow(2,j);
			cout<<a[i]<<endl;
			j++;
		}
	return 0;
	}
*/
int main(){
    int t;
    ll a,b;
    get("%d",&t);
    while(t--)
    {
            get("%lld",&a);
        if(a<4) b=2;
        else if(a<8) b=4;
        else if(a<16) b=8;
        else if(a<32) b=16;
        else if(a<64) b=32;
        else if(a<128) b=64;
        else if(a<256) b=128;
        else if(a<512) b=256;
        else if(a<1024) b=512;
        else if(a<2048) b=1024;
        else if(a<4096) b=2048;
        else if(a<8192) b=4096;
        else if(a<16384) b=8192;
        else if(a<32768) b=16384;
        else if(a<65536) b=32768;
        else if(a<131072) b=65536;
        else if(a<262144) b=131072;
        else if(a<524288) b=262144;
        else if(a<1048576) b=524288;
        else if(a<2097152) b=1048576;
        else if(a<4194304) b=2097152;
        else if(a<8388608) b=4194304;
        else if(a<16777216) b=8388608;
        else if(a<33554432) b=16777216;
        else if(a<67108864) b=33554432;
        else if(a<134217728) b=67108864;
        else if(a<268435456) b=134217728;
        else if(a<536870912) b=268435456;
        else if(a<1073741824) b=536870912;
        else if(a<2147483648) b=1073741824;
        else b=2147483648;
            put("%lld\n",b);
    }
return 0;}                                   
  
