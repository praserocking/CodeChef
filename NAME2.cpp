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
inline int fast_int()
{
int n=0;
int ch=getchar_unlocked();
while(ch<48)ch=getchar_unlocked();
while(ch >47)
n=(n<<3)+(n<<1)+ch-'0',ch=getchar_unlocked();
return n;
}
/* CODER: prassi */
/* B.Tech,IT.,SASTRA University,Tanjore. */
int main(){
  int t,l1,l2,i,j,k,cnt,f;
    char _[25002],__[25002];
    t=fast_int();
    while(t--){
        scanf("%s %s",_,__);
        l1=strlen(_);
        l2=strlen(__);
        if(l1<l2) f=0;
        else  f=1;
        j=k=cnt=0;
        while(true){
            if(_[j]==__[k]){
                cnt++;
                j++;
                k++;
            }
            else if(f==0) k++;
            else if(f=1) j++;
            if((j==l1)||(k==l2)) break;
        }
        if((cnt==l1)||(cnt==l2))
        put("YES\n");
        else
        put("NO\n");
    }
return 0;}
 
