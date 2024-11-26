#include<iostream>
#include<string>

using namespace std;

class newstring{

    friend ostream& operator <<(ostream& ,const newstring&);
    private:
    string m;


    public:
    newstring( string n ):m(n){}
    //Operator overload 
    newstring operator +(const newstring& c){

        newstring temp = this->m + c.m;

        return temp;
    }
};

ostream& operator <<(ostream& obj,const newstring& c){
    obj<<c.m<<endl;
    return obj;
}

int main(){

    newstring s1 = string("Hello");
    newstring s2 = string(" world");

    newstring s3 = s1 + s2;

    cout << s3;
    return 0;
}