#include<iostream>

using namespace std;

class Complex{                                                                                                          
    friend Complex operator ++(Complex&,int u);
    friend ostream & operator <<(ostream&, const Complex&);
    friend Complex operator ++(Complex&);

private:
    int real;
    int img;

public:

    Complex(){
        real = 0;
        img = 0;}

    Complex(int r, int i):real(r), img(i){} //Parameterized constructor

     int operator +(Complex&);
     void operator == (Complex);

};

//Post increment
Complex operator ++(Complex &c, int u){
    
    Complex temp = c;

    (c.real)++;
    (c.img)++;

    return temp;
}

//Pre increment 
Complex operator ++(Complex &c){
    (c.real)++;
    (c.img)++;

    return c;
}

int Complex::operator +(Complex &c){
    return this->real + c.real;
}

void Complex::operator == (Complex c){
    if(this->real == c.real && this->img == c.img){
        cout<<"Both are equal"<<endl;
    }else{
        cout<<"Both are not equal"<<endl;
    }
}

ostream& operator <<(ostream &out, const Complex &c){
    out<<c.real<<" + "<<c.img<<"i"<<endl;
    return out;
}


int main(){
    int a;
    Complex c1(3,5);
    Complex c2 = c1;

    cout <<"Before increment:"<<c1<<endl;
    cout<<"Sum of two complex numbers: "<<c1+c2<<endl;
    cout<<"Post increment: "<< c1++ <<endl;
    cout<<"Pre increment: "<<++c2<<endl;

    return 0;
}