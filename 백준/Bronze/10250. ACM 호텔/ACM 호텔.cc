#include <iostream>
using namespace std;int main(){int t,h,w,n=0;cin>>t;for(int i=0;i<t;++i){int slice=1;cin>>h>>w>>n;while(h<n){if(h<n){n-=h;slice++;}}cout<<(slice+(n*100))<<endl;}}