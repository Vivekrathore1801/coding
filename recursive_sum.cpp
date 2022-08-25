#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <iostream>
using namespace std;
int n=2583;
int fun(int n){
  if(n<10)
    return n;
    return fun(n/10)+n%10;
}
int main(){
    cout<<fun(n);
    return 0;
}