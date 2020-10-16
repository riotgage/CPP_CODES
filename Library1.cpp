#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class book{
    public:
        int id;
        int score;
    bool operator<(book const &other) {
        return score < other.score;
    }

};

class library{
    public:
        int id;
        int number_of_books;
        int sign_up_days;
        int* available_books;
        int shipped_books_per_day;
        library(){}
        /*library(int id,int sign_up_days,int number_of_books,int* available_books){
            
            this->number_of_books=number_of_books;
            this->available_books=new int[number_of_books];
            this->id=id;
            this->sign_up_days=sign_up_days;
        }*/
        void print_data(){
            cout<<id<<endl;
            cout<<"number_of_books"<<number_of_books<<endl;
            cout<<"sign_up_days"<< sign_up_days<<endl;
            cout<<"shipped_books_per_day"<< shipped_books_per_day<<endl;
            for(int i=0;i<number_of_books;i++){
                cout<<available_books[i]<<"  ";
            }
            cout<<endl;
        }

};

void sorting(book books[],int n)
{
    vector<book> b1;
    for(int i=0;i<n;i++)
    {
        b1[i].score = books[i].score;
        b1[i].id = books[i].id;
    }
    sort(b1.begin(),b1.end());
    for(int i=0;i<n;i++)
    {
        cout<<"b1[i].score\n"; 
        cout<<"b1[i].id"; 
    }
}
int main(){
    
    // Variables about totality of problem
    int Total_Books_Required;
    int Total_libraries;
    int scanning_days;
    
    cin>>Total_Books_Required>>Total_libraries>>scanning_days;

    cout<<Total_Books_Required<<"\t"<<Total_libraries<<"\t"<<scanning_days<<"\n";

    // Variables important acc. to books

    book books[Total_Books_Required];
    for(int i=0;i<Total_Books_Required;i++){
        books[i].id=i;
        cin>>books[i].score;
    }
    cout<<"total Books "<<Total_Books_Required<<endl;

    cout<<"Score of each book"<<endl;
    for(int i=0;i<Total_Books_Required;i++){
        cout<<books[i].id<<"  "<<books[i].score<<endl;
    }
    // Variable important to library
    library libraries[Total_libraries];
    for(int i=0;i<Total_libraries;i++){
        libraries[i].id=i;
        cin>>libraries[i].number_of_books>>libraries[i].sign_up_days>>libraries[i].shipped_books_per_day;
        libraries[i].available_books=new int[libraries[i].number_of_books];
        for(int j=0;j<libraries[i].number_of_books;j++){
            cin>>libraries[i].available_books[j];
        }
    }

        for(int i=0;i<Total_libraries;i++){
            libraries[i].print_data();
        }

}