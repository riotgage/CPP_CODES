#include<bits/stdc++.h>
using namespace std;


int main(){
    int number_of_contests;
    int go_worms;
    int return_worms;
    cin>>number_of_contests>>go_worms>>return_worms;
    int *start,*end;
    vector<int> go_worms_time(go_worms);
    vector<int> return_worms_time(return_worms);
    start=new int[number_of_contests];
    end=new int[number_of_contests];
    for(int i=0;i<number_of_contests;i++){
        cin>>start[i]>>end[i];
    }
    for(int i=0;i<go_worms;i++){
        cin>>go_worms_time[i];
    }
    for(int i=0;i<return_worms;i++){
        cin>>return_worms_time[i];
    }
    sort(go_worms_time.begin(),go_worms_time.end());
    sort(return_worms_time.begin(),return_worms_time.end());
    int min=-1;
    for(int i=0;i<number_of_contests;i++){
        int come=upper_bound(go_worms_time.begin(),go_worms_time.end(),start[i]);
        int go=lower_bound()
        int diff=come-go+1;
        if(min==-1){
            min=diff;
        }
        else if(min>diff){
            min=diff;
        }
    }
    cout<<min;
}