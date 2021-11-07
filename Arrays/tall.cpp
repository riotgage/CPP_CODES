#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TallPeople{
    private:
        int *a;
        int r,c;
        int** intconv;
    public :
        vector<string> people;
        void getPeople(){
            a=new int[2];
            a[0]=0;
            a[1]=0;
            cout<<"Enter Rows and Columns"<<endl;
             cin>>r>>c;
             intconv=(int**)malloc(r*sizeof(int*));
             cout<<"Enter Heights"<<endl;
             for(int i=0;i<r;i++)
             {
                 intconv[i]=(int*)malloc(c*sizeof(int));
                 for(int j=0;j<c;j++)
                 {
                    cin>>intconv[i][j];
                 }
             }
        }
        int* gettall()
        {
            int arr[50],minn=1000,temp=0;
            memset(arr,0,50*sizeof(int));
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(intconv[i][j]<minn)
                        minn=intconv[i][j];
                    if(arr[j]<intconv[i][j])
                        arr[j]=intconv[i][j];

                }
                if(minn>temp)
                    temp=minn;
                minn=1000;
            }
            int max=99999;
            for(int i=0;i<c;i++)
            {
                if(arr[i]<max)
                    max=arr[i];
            }
            a[0]=temp;
            a[1]=max;
          //  cout<<a[0]<<a[1]<<endl;
            return a;
        }

};
int main(){
    int* arr=new int[2];
    TallPeople p;
    p.getPeople();
    arr=p.gettall();
    cout<<"Tallest among shortest: "<<arr[0]<<endl;
    cout<<"Shortest among tallest: "<<arr[1]<<endl;
}