
#include <iostream>  
#include <cmath>  
using namespace std;  
int phi(int);  
int main(){  
    int n;  
    int k=1;  
    int m=1;  
    int sum=0;  
    int i=0;  
    cin>>n;  
    int phi(int n);{  
        while(i<=n-2){  
            sum=k+m;  
            k=m;  
            m=sum;  
            i=i+1;  
        }  
        cout<<m;  
    }  
}
