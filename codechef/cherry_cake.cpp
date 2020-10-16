#include<iostream>
using namespace std;
int main(){
    int test_cases;
    int rows,columns;
    cin>>test_cases;
    char **arr;
    char c;
    while(test_cases--){
        cin>>rows>>columns;
        char c;
        for(int i=0;i<rows;i++){
            arr[i]=new char[columns];
        }
        int mat_green=0;
        int mat_red=0;
        *arr=new char[rows];
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                cin>>arr[i][j];
            }
        }
        char char_g='G';
        char char_r='R';
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                switch (j%2){
                    case 0:
                        if(c==char_r){
                            mat_green+=5;
                        }
                        else {
                            mat_red+=3;
                        }
                        break;
                    case 1:
                        if(c==char_r){
                            mat_red+=5;
                        }
                        else {
                            mat_green+=3;
                        }
                        break;
                    default:
                        break;
                }
                
            }
            if(columns%2){
                char_r='G';
            }
            else{
                char_g='R';
            }
            
        }

        cout<<min(mat_green,mat_red)<<endl;

    }
}