#include<iostream>
using namespace std;
 bool ispal(string &str,int start,int end){
    if(start>=end)
    { return true;
    }
    if(str[start] != str[end])
    { return false;
    }
    
    return ispal(str , start+1,end-1);
    
 }
 int main()
 {
    string word;
    cout<<"Enter the word "<<endl;
    cin>>word;
    if(ispal(word,0,word.length()-1))
    {
        cout<<word<<" is a palindrome "<<endl;
    }
    else{
        cout<<word<<" is not a palindrome "<<endl;
    }
    return 0;
 }