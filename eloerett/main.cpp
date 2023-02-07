#include <iostream>

using namespace std;

int main()
{
   int n, a[100][100], i, j;
   cout <<"n=";
   cin >> n;
   for(i=0; i<n; i++){
    for(j=0; j<n; j++){
    cin >> a[i][j];
    }
   }
   for(i=0; i<n; i++){
    cout << endl;
    for(j=0; j<n-1; j++){
            if(i<=j){
                    a[i][j]=a[i][j+1];
            }
            cout << a[i][j] << " ";

     }
   }
    return 0;
}
