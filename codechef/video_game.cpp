#include<iostream>
#include<stack>
using namespace std;

int main(){
    int number_of_stacks;
    int max_height;
    cin>>number_of_stacks>>max_height;
    int *stacks=new int[number_of_stacks];
    int position_crane=0;
    for(int i=0;i<number_of_stacks;i++){
        cin>>stacks[i];
    }
    bool picked=false;
    int choice=1;
    while(choice!=0){
        cin>>choice;
        switch (choice)
        {
        case 0:
            for(int i=0;i<number_of_stacks;i++){
                 cout<<stacks[i]<<" ";
            }   
            exit(1);
        case 1:
            if(position_crane!=0)
                position_crane--;
            break;
        case 2:
            if(position_crane!=number_of_stacks-1){
                position_crane++;
            }
            break;
        case 3:
            if(!picked && stacks[position_crane]!=0){
                stacks[position_crane]--;
                picked=true;
            }
            break;
        case 4:
            if(picked && stacks[position_crane]!=max_height){
                    stacks[position_crane]++;
                    picked=false;
                }
            break;
        default:
            break;
        }
    }
    

}