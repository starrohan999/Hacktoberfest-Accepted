#include <bits/stdc++.h>
#include<limits.h>
#include<string>
using namespace std;

#define fri(a,b) for(int i = a; i<=b; i++)
#define frd(a,b) for(int i = a; i>=b; i--)
int main()
{
    string str1 , str2;
    getline(cin , str1);
    getline(cin , str2);
    int len1 = str1.length();
    int len2 = str2.length();
    int ar[256];
    std::fill_n(ar, 256, -1);
    if(len1!=len2){
        cout<<"Not anagram";
    }
    else{
        int ar[256];
        std::fill_n(ar , 256 , -1);
        fri(0 , len1 - 1){
            ++ar[str1[i]];
            --ar[str2[i]];
        }
        int flag = 1;
        fri(0 ,255){
            if(ar[i] != -1){
                flag = 0;
                break;
            }
        }
        if(flag == 0)
        cout<<"Not anagram";
        else
        cout<<"Anagram";
    }
    return 0;
}