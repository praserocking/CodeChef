#include<stdio.h>
#define mn(a,b) a>b?b:a
#define loop(n,i) for(i=0;i<n;i++)
#define put printf
#define get scanf
typedef long long int ll;
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
   int n,m,t1,t2;
	 register int i,j,k;
     n=fast_int();
     ll _[n][n],x,s,g,d;
     loop(n,i)
     loop(n,j)
     {x=fast_int();_[i][j]=x;}
     loop(n,k)
     loop(n,i)
     loop(n,j)
     _[i][j]=mn(_[i][j],_[i][k]+_[k][j]);
     m=fast_int();
     while(m--)
     {
        s=fast_int();
        g=fast_int();
        d=fast_int();
		t1=_[s][g]+_[g][d];
		t2=_[s][d];
        put("%d %d\n",t1,t1-t2);
     }
return 0;}  
