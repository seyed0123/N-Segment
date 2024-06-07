#include<iostream>
#include<string>
#include "SevenSegment.cpp"
#include "TwelveSegment.cpp"
using namespace std;

int main(){
    int font;
    string n;
    int op;
    cout<<"Enter the text and font that you want.\n";
    getline(cin,n);
    cin>>font;
    cout<<"TwelveSegment or SevenSegment? (1/0)\n";
    cin>>op;
    if(op==1)
        sevenSegment(n,font);
    else
        twelveSegment(n,font);
}