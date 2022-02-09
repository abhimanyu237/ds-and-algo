#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int boy[n];
        int pri=INT16_MAX;
         for(int p=0;p<n;p++){
            cin>>boy[p];
        }
        for(int x=0;x<3;x++){
        int max=INT32_MIN;
        for(int p=0;p<n;p++){
            if(boy[p]>max &&pri>boy[p])
               max=boy[p];
        }
       cout<<max<<" ";
       pri=max;
    }
    cout<<endl;
    }
    return 0;
}
