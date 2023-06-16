//mini calculator


#include <iostream>
using namespace std;
int main() {
int a,b;
  cout<<"Enter the value of the a"<<endl;
  cin>>a;

  cout<<"Enter the Value of b"<<endl;
  cin>>b;

  char op;
  cout<<"Enter the operation"<<endl;
  cin>>op;

  switch(op){
    case '+': cout<<(a+b)<<endl;
    break;

    case '-': cout<<(a-b)<<endl;
    break;

    default:cout<<"Wrong operation"<<endl;
  }
  
}