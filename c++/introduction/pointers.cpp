#include <iostream>
using namespace std;
void update(int *a,int *b){
    int x=*a;
    *a=*a+*b;
    if(x-*b>0){*b=(x-*b);}
    else{*b=(x-*b)*-1;}


}
int main(){
    int a,b;
    int *pa=&a,*pb=&b;
    scanf("%d %d",&a &b);
    update(pa,pb);
    printf("%d\n%d",a,b);
    return 0;
}