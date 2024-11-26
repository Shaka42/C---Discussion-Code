#include<iostream>

using namespace std;

//Fibonnaci sequence
int fibNum(int a, int b , int num){
    if(num ==1 )
        return a;
    else if (num==2)
        return b;
    else{
        return fibNum(a,b,num-2) + fibNum(a,b,num-1);}
}


int main(){
    int n;
    cout<<"Enter Your Number: "<<endl;
    cin>>n;
    cout<<fibNum(0,1,n)<<endl;

return 0;
}