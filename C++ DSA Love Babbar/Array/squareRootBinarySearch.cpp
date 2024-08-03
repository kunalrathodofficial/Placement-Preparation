#include <iostream>
using namespace std;

int findSquareRoot(int n){
   int s = 0;
   int e = n;

   while(s<=e){
    int mid = s+(e-s)/2;
    if(mid*mid == n){
      return mid;
    }
    else if( mid*mid > n){
      e=mid-1;
    }
    else{
      s = mid+1;
    }
    
   }
}


int main() {
   int n;
  cin>>n;

  cout << findSquareRoot(n);

    
    return 0;
}
