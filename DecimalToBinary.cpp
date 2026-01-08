#include <iostream>

using namespace std;

int DecimalToBinary(int a){
    int ans = 0;
    int x = 1;

    while(a > 0){
        ans += x*(a%10);
        x *= 10;
        a = a/10;
    }
    return ans;
}

int main(){
    for(int i=0; i<20; i++){
        cout<<DecimalToBinary(i)<< " " ;
    }
    return 0;
}