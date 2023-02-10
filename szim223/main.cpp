#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("bac.txt");
    int k3=0, k5=0, n, i, j;
    cout << "n=";
    cin >> n;
    for(i=1; i<n+1; i++){
        i=j;
        while(j%3==0){
            k3++;
            j/=3;
        }
        while(j%5==0){
            k5++;
            j/=5;
        }
    }
    k3/=2;
    if(k3<k5){
        cout << " " << k3;
    }else{
         cout << " "<<k5;

    }
    return 0;
}
