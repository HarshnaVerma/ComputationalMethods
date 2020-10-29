#include<iostream>
using namespace std;

int main(){
    string binary;
    long long int decimal = 0, base = 1;
    cout<<"Enter Binary Number : ";
    cin>>binary;
    for(int i = binary.size()-1 ; i >= 0; i--){
        decimal = decimal + base*(binary[i] - '0');
        base *= 2;
    }
    cout<<"Converted decimal Number is "<<decimal<<"\n";
    cout<<"Program End";
    return 0;
}
