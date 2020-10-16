#include<iostream>
using namespace std;

class complex
{
    public:
        int real;
        int imaginary;
        complex(){};
        complex(int real,int imaginary){
            this->real=real;
            this->imaginary=imaginary;
        };

        void print(){
            if(imaginary<0){
                int imag=-1*imaginary;
                 cout<<real<<"-i"<<imag<<"\n";
            }
            else{
                cout<<real<<"+i"<<imaginary<<"\n";

            }
           
        }
    friend complex operator+(complex,complex);
    friend complex operator-(complex,complex);
    friend complex operator-(complex);
    friend void operator++(complex);
    friend void operator++(complex,int);

};
// pre increment
void operator++(complex c1){
    c1.real=c1.real+1;
    c1.imaginary=c1.imaginary+1;
    return c1;
}

// post increment
void operator++(complex c1,int x){
    c1.real=c1.real+1;
    c1.imaginary=c1.imaginary+1;
    
}


complex operator+(complex c1,complex c2){
    complex c3(c1.real+c2.real,c1.imaginary+c2.imaginary);
    return c3;

}

complex operator-(complex c1,complex c2){
    int real,imaginary;
    real=c1.real-c2.real;
    imaginary=c1.imaginary-c2.imaginary;
    complex c3(real,imaginary);
    return c3;

}

complex operator-(complex c1){
    complex c3(-c1.real,-c1.imaginary);
    return c3;

}

int main(){
    complex comp1(10,20);
    complex comp2(24,54);

    complex c3=comp1+comp2;;
    c3.print();

    c3=comp1-comp2;;
    c3.print();

    c3=-comp1;
    c3.print();
    c3=++comp1;

    c3.print();

}