#include<iostream>
using namespace std;

class Str{
    string s;
    Str(string s){this->s=s;}
    int num_wrap();

};

int Str::num_wrap(){
    int i=0;
    int add=2;
    int count=0;
    while(i<=s.length){
        i=i+add;
        count++;
        add
    }
    return count;
}
int main(int argc, char const *argv[])
{
    string s;

    return 0;
}
