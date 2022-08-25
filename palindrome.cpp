#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;

string str;
 int s=0,e=str.size()-1;
bool isPalindrome(string str,int s,int e)
{
    if(s==e)
        return true;
        if(s>e)
            return true;
            if(str[s]!=str[e])
                return false;
                return isPalindrome(str,s+1,e-1);
}
 int main() {
     string str="vishal kumar";
     cout<<isPalindrome(str,s,e);
    return 0;
} 