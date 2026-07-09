#include<bits/stdc++.h>
using namespace std;
void printdivisor(int x){
    vector<int> ls;
    for(int i =1; i*i<=x;i++){
        if(x%i==0){
            ls.push_back(i);
            if((x/i)!=i)ls.push_back(x/i);
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls)cout<<it<<" ";

}
int main(){
    int num;
    cin>>num;
    printdivisor(num);
}