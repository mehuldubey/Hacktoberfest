//https://www.codechef.com/FEB18/problems/CARPTUN

#include <iostream>
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>

#define ll double
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
#define ff(i,a,n) for(i=a;i<n;i++)

using namespace std;

inline int inp() {  
 int n=0;  
 char p=getchar_unlocked();  
 while((p<'0'||p>'9')&&p!=EOF)  
 p=getchar_unlocked();  
 while(p>='0'&&p<='9')  
 {  
 n = (n<< 3) + (n<< 1) + (p - '0');  
 p=getchar_unlocked();}  
 return n;}  


int main() {
	long long int t,i,j,n;
	long long int c=0;
    t=inp();
    while(t--){
        cin>>n;
        ll a[n],c,d,s,max=0;
        ff(i,0,n){
            cin>>a[i];
            if(max<a[i])max=a[i];
        }
        cin>>c>>d>>s;
        cout <<fixed;
        cout << setprecision(9);
        cout<<max*(c-1)<<endl;
    }
	
	return 0;
} 

//one more solution to the same question 
#include <bits/stdc++.h>
#include <climits>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define srep(i, begin, end) for (__typeof(end) i = begin; i != end; i++)
#define si(x) int x = scanInt();
#define sll(x) LL x = scanLong();
#define pi(x) printf("%d ", x)
#define pll(x) printf("%lld ", x)
#define nl printf("\n")
#define clr(a) memset(a, 0, sizeof(a))
#define fi first
#define sec second
using namespace std;
typedef unsigned int UI; // 32 bit integer
typedef long int LI; // 32 bit integer
typedef unsigned long int ULI; // 32 bit unsigned integer
typedef long long int LL; // 64 bit integer
typedef unsigned long long int  ULL; // 64 bit unsigned integer
typedef long double LD;
typedef vector<int> VI;
typedef vector<LL> VLL;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
LL mod = 1e9+7;

/* Fast I/O */
inline int scanInt() {
	int n = 0;
	char ch = getchar_unlocked();
	int sign = 1;
	while(ch < '0' || ch > '9') {
		if(ch == '-')	sign = -1;
		ch = getchar_unlocked();
	}
	while(ch >= '0' && ch <= '9') {
		n = (n<<1)+(n<<3)+(int)(ch-'0');
		ch = getchar_unlocked();
	}
	return n*sign;
}

inline LL scanLong() {
	LL n = 0;
	char ch = getchar_unlocked();
	LL sign = 1;
	while(ch < '0' || ch > '9') {
		if(ch == '-')	sign = -1;
		ch = getchar_unlocked();
	}
	while(ch >= '0' && ch <= '9') {
		n = (n<<1)+(n<<3)+(LL)(ch-'0');
		ch = getchar_unlocked();
	}
	return n*sign;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("inp.txt", "r", stdin);
#endif
	sll(t);
	while(t-->0) {
	
		sll(n);
		LL ptime[n];
		rep(i, 0, n)	ptime[i] = scanLong();
		sll(c); sll(d); sll(s);
		cout << fixed << setprecision(15) << (LD)(*max_element(ptime, ptime+n) * (c-1)) << endl;
	}
}














