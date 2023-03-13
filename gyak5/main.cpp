#include <iostream>

using namespace std;

int identice(long n){
       int i=n%10,ok=1;
       while(n!=0){
         if(n%10!=i)
            ok=0;
         n=n/10;
   }
  return ok;
}
int main()
{
    cout<<identice(2222);
    return 0;
}
