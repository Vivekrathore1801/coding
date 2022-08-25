#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <iostream>
using namespace std;
int n=20;
void fun(int n){
  if(n<1)
    return;
   cout<<n<<" ";
     fun(n-1);
}
int main(){
fun(n);
return 0;
}