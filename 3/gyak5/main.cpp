#include <iostream>
#include <fstream>

using namespace std;
int legnagyobb(int n, int a[100], int k){
    int i, max=0;
    for(i=1; i<=k; i++)
        if(a[i]>max)
            max=a[i];

       return max;

}
int main()
{
    ifstream in("bac.txt");
    int n, i, a[100], b[100];
    in>>n;
    for(i=1; i<=n; i++)
            in>>a[i];
        for(i=1; i<=n; i++)
        b[i]=legnagyobb(n, a, i);
    for(i=1; i<=n; i++)
        cout<<b[i]<< " ";
    in.close();
    return 0;
}
