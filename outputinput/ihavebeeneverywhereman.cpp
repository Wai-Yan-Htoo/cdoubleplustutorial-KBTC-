#include<iostream>
using namespace std;
int main(){
    int tc;//   2
    cin>>tc;
    for (int i=0;i<tc;i++){
        int towns;
        cin>>towns;//   3
        string visited[towns]= {};
        int ans=0;
        for(int j=0;j<towns;j++){
            string name;
            cin>>name;
            for(int k=0;k<=j;k++){                        //check k to j 
                if (name==visited[k]){
                    break;
                }
                else if(k==j){
                    visited[ans]=name;
                    ans++;
                }
            }
        
        }
        cout<<ans<<endl;
    }
}
