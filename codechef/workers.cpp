/*
A manufacturing project consists of exactly K tasks. The board overviewing the project wants to hire K

teams of workers — one for each task. All teams begin working simultaneously.

Obviously, there must be at least one person in each team. For a team of A
workers, it takes exactly A days to complete the task they are hired for. Each team acts independently, unaware of the status of other teams (whether they have completed their tasks or not), and submits their result for approval on the A

-th day.

However, the board approves the project only if all K
teams complete their tasks on the same day — it rejects everything submitted on any other day. The day after a team finds out that its result was rejected, it resumes work on the same task afresh. Therefore, as long as a team of A workers keeps getting rejected, it submits a new result of their task for approval on the A-th, 2A-th, 3A

-th day etc.

The board wants to hire workers in such a way that it takes exactly X
days to complete the project. Find the smallest number of workers it needs to hire

*/
#include<bits/stdc++.h>
using namespace std;
vector<int> Divisors(int n) 
{ 
    vector<int>factors;
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i != i) 
                factors.push_back(n/i); 
        
                factors.push_back(i); 
        } 
    } 
    return factors;
} 
int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--){
        int k,x;
        cin>>k>>x;
        vector<int>primes=Divisors(x);
        sort(primes.begin(),primes.end());
        int sum=0;
        int middle=primes.size()/2;
        middle--;
        int middle2=middle+1;
        for(int i=0;i<k/2;i++){
            sum+=primes[middle]+primes[middle2];
            middle--;
            middle2++;
        }
        cout<<sum<<"\n";
    }
}