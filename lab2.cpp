#include<bits/stdc++.h>
using namespace std;

class TallPeople{
    public:
        int row,col;
        int **arr;

        TallPeople(){
            cin>>row>>col;
            arr=new int*[row];
            for(int i=0;i<row;i++){
                arr[i]=new int[col];
            }
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cin>>arr[i][j];
                }
            }
        }
        int* getTall(){
            
            int *result=new int[2];
            vector<int> max,min;
            int m,n;                    //m: max n:min
            for(int i=0;i<row;i++){
                n=arr[i][0];
                for(int j=0;j<col;j++){
                    if(n>arr[i][j]){
                        n=arr[i][j];
                    
                    }
                }
                min.push_back(n);
            }
            for(int i=0;i<col;i++){
                
                m=arr[0][i];
                for(int j=0;j<row;j++){
                    if(m<arr[j][i]){
                        m=arr[j][i];
                    }
                }
                max.push_back(m);
            }
        
            sort(min.begin(),min.end());
            sort(max.begin(),max.end());

            result[0]=min[row-1];       //tallest among shortest
            result[1]=max[0];          //shortest among tallest
            return result;
        }
};


int main(){
    
    int *result=new int[2];

    TallPeople t;
    result=t.getTall();
    cout<<"tallest among shortest in rows "<<result[0];
    cout<<"\nshortest among tallest in cols "<<result[1];
}