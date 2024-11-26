#include<iostream>

using namespace std;

class Distance{
    private:
    int d;

    public:


    Distance(){
        d=0;
    }

    void distance() {
        cout << "Distance:" << d << endl;
    }


};


int main(){

    //Using Copy Constructor
    Distance d1;
    d1.distance();
    Distance d2(d1);
    d2.distance();
    

    
return 0;
}