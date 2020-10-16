#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Paperfold
{
    public :
        int paper[2];
        int box[2];
        void Input(){
            int i;
            for(i=0;i<2;i++)
                cin>>paper[i];
            for(i=0;i<2;i++)
                cin>>box[i];
        }
        int calculate(float paper_width,float paper_height)
        {
            if(paper_width<=1||paper_height<=1)
                return INT_MAX;
           int count=0;
                if(paper_width<=box[0]&&paper_height<=box[1])
                    return count;
                if(paper_height<=box[0]&&paper_width<=box[1])
                    return count;
               count=1+min(calculate(paper_width/2,paper_height),calculate(paper_width,paper_height/2));

            return count;
        }
        int Folds()
        {
            int i,j,k,l,m,n,count=0;
            float paper_width=paper[0],paper_height=paper[1];
                if(paper_width<=box[0]&&paper_height<=box[1])
                    return count;
                if(paper_height<=box[0]&&paper_width<=box[1])
                    return count;

             count=1+min(calculate(paper_width/2,paper_height),calculate(paper_width,paper_height/2));
 if(count>8)
                    return -1;
            return count;
        }

};
int main()
{
    Paperfold p;
    p.Input();
    cout<<p.Folds()<<endl;
 
}
