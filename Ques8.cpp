//Print Counting by making a function.

#include <iostream>
using namespace std;

void printCounting(int n) {
  for(int i=1; i<=n; i++){
    cout<<i<<" ";
  }
  cout<<endl;
}

int main() {
 int n ;
  cin>>n;

  printCounting(n);
  return 0;
  
 
  
}