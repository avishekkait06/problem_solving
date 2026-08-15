#include<bits/stdc++.h>
using namespace std;
int gcdrec(int a , int b){
    if(b==0)return a;

    return gcdrec(b,a%b);
}
int main(){
int a , b;
cin >> a>> b;
cout<<a*b/gcdrec(a,b);

return 0;
}