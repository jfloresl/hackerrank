#include <iostream>
using namespace std;
int max_of_four(int a,int b,int c, int d){
    int mayor=0;
    if(a>mayor){mayor=a;}
    if(b>mayor){mayor=b;}
    if(c>mayor){mayor=c;}
    if(d>mayor){mayor=d;}
    return mayor;
}
int main(){
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int ans=max_of_four(a,b,c,d);
    cout<<ans;
    return 0;
}