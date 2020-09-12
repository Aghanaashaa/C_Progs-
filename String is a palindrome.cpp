#include<iostream>
#include<cstring>
using namespace std;

void isPalindrome(char str[]) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = strlen(str)-1;
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
           cout<<str<<"  is not a palindrome";
            return; 
        } 
    } 
    cout<<str<<"  is a palindrome"; 
} 
main()
{
	isPalindrome("Moon");
}
