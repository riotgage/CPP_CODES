#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    int cas=1;
    while(cas<=test_cases){
        int size;
        cin>>size;
        int trace=0,row=0,col=0;
        int arr[size][size];
        for(int i=0;i<size;i++){
            set<int>s;
            bool b=true;
            for(int j=0;j<size;j++){
                cin>>arr[i][j];
                
                if(i==j){
                    
                    trace+=arr[i][j];
                }
                if(s.count(arr[i][j])==0 ){
                    s.insert(arr[i][j]);
                }
                else if(b){
                    row++;
                    b=false;
                }

            }
            
        }

        for(int i=0;i<size;i++){
            set<int>s;
            for(int j=0;j<size;j++){
                if(s.count(arr[j][i])==0){
                    s.insert(arr[j][i]);
                    
                }
                else{
                    col++;
                    break;
                }
            }
            
        }
        cout<<"Case #"<<cas<<": "<<trace<<" "<<row<<" "<<col<<endl;
        cas++;
    }

}
