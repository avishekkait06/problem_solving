#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    else
        return a;
}
int gcdrec(int a , int b){
    if(b==0)return a;

    return gcdrec(b,a%b);
}

int main()
{
    int a, b;
    cin >> a >> b;
   cout <<"by Euclidean Algorithm : "<< gcd(a, b)<<endl;//Euclidean Algorithm
   cout <<"by recursion : "<< gcdrec(a,b);
    return 0;
}