#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int ar[10][4]={
        {0}, //0
        {1}, //1
        {2,4,8,6}, //2
        {3,9,7,1}, //3 
        {4,6}, //4
        {5}, //5
        {6}, //6
        {7,9,3,1}, //7
        {8,4,2,6}, //8
        {9,1} //9
    };
    int cnt[10]={1,1,4,4,2, 1,1,4,4,2};
    
    int T=0;
    int a=0,b=0;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>a>>b;
        a%=10;
        
        if(a==0) cout<<10<<endl;
        else if(a==1 || a==5 || a==6) cout<<a<<endl;
        else if(a==4 || a==9){
            if(b%2==0) cout<<ar[a][1]<<endl;
            else cout<<ar[a][0]<<endl;
        }
        else{
            if(b%4==1) cout<<ar[a][0]<<endl;
            else if(b%4==2) cout<<ar[a][1]<<endl;
            else if(b%4==3) cout<<ar[a][2]<<endl;
            else cout<<ar[a][3]<<endl;
        }
    }
    
    return 0;
}
