#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str, str1, rev;

    cout<<"Podaj dwa lancuchy znakow: "<<endl;
    cin>>str>>str1;
    reverse(str.begin(), str.end());
    if(str==str1){
        cout<<"Lancuch drugi to odwrocenie lancucha pierwszego"<<endl;
    }else{
        cout<<"Lancuch drugi nie jest odwroceniem lancucha pierwszego"<<endl;
    }
    
    bool anagram = true;
    if(str.size() == str1.size()){
        sort(str.begin(), str.end());
        sort(str1.begin(), str1.end());

        for (int i = 0; i < str.size(); i++){
            if (str[i] != str1[i]){
                cout<<"Lancuchy nie sa anagramami!"<<endl;
                anagram=false;
                break;
            } 
                
        }
    }
    if(str.size() != str1.size()){
        cout<<"Lancuchy nie sa anagramami!";
    }else if(anagram){
        cout<<"Lancuchy sa anagramami!";
    }

    return 0;
}