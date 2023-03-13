#include <iostream>

using namespace std;

int main()
{
   int  n, m, a[100][100], i, j;
   cout<<"n=";
   cin >> n;
   cout<<"m=";
   cin>>m;
   for(i=1; i<=m;i++)
    for(j=1; j<=n; j++)
    a[i][j]=i*j%10;
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++)
        cout<<a[i][j]<<" ";
        cout<<endl;

    }
    return 0;
}
