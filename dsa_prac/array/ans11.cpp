#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int boy[n];
         for(int p=0;p<n;p++){
            cin>>boy[p];
        }
       int x=0,y=0;
       while(y<n){
           if(boy[x]>0&&x%2==0){
               while(boy[y]>0&&y<n){
                   y++;
               } 
               if(y>n-1){
                       break;
                   }
               int var=boy[x];
               boy[x]=boy[y];
               boy[y]=var;
               y=x+1;  
           }
           if(boy[x]<0&&x%2==1){
               while(boy[y]<0&&y<n){
                   y++;
               } 
               if(y>n-1){
                       break;
                   }
               int var=boy[x];
               boy[x]=boy[y];
               boy[y]=var;
               y=x+1;  
           }
           x++;
           y=x+1;
       }
      for(int l=0;l<n;l++){
          cout<<boy[l]<<" ";
      }
      cout<<endl;
    }
    return 0;
}
