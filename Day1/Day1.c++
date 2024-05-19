
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    int parity;
    cin>>name;
    int len = name.length();
    parity = len;
    for(int i=0;i<(len-1);i++){
        for(int j=i+1;j<len;j++){
            if(name[i]==name[j]){
                parity = parity -1;
                break;
            }
        }
    }
    if(parity%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
