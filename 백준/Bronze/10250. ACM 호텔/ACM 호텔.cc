#include <iostream>
using namespace std;int main(){int t,h,w,n;cin>>t;for(int i;i<t;++i){int s=1;cin>>h>>w>>n;while(h<n){if(h<n){n-=h;s++;}}cout<<(s+(n*100))<<"\n";}}