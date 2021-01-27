#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"enter row and column ";
    cin>>row>>col;
    for(int i =1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int rows,cols;
    cout<<"enter row and column:";
    cin>>rows>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            if(i==1 || i==rows || j==1 || j==cols){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    int n;
    cout<<"enter n ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int num;
    cout<<"enter num ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int r;
    cout<<"enter r ";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(j<=r-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    //floyyd's triangle
    //1
    //2 3
    //4 5 6
    //7 8 9 10 
    //11 12 13 14 15
    int t;
    cout<<"enter t to print floyd's triangle ";
    cin>>t;
    int count=1;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    //*             *
    //* *         * *
    //* * *     * * *
    //* * * * * * * *
    //* * *     * * *
    //* *         * *
    //*             *

    cout<<"now we will be printing the butterfly pattern ";
    int butter;
    cout<<"enter numbers to print butterfly";
    cin>>butter;
    for(int i=1;i<=butter;i++){
        for(int j=1;j<=i;j++){
            cout<<"&";
        }
        int spaces=2*n-2*i;
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"&";
        }
        cout<<endl;
    }
    for(int i=butter;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"&";
        }
        int spaces=2*n-2*i;
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"&";
        }
        cout<<endl;
    }
    //inverted pattern
    //1 2 3 4 5 
    //1 2 3 4
    //1 2 3 
    //1 2 
    //1
    int invert;
    cout<<"enter the maximum number to print inverted triangle";
    cin>>invert;
    for(int i=invert;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    int p;
    cout<<"enter p ";
    cin>>p;
    for(int i=1;i<=p;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    //        * * * * *
    //      * * * * *
    //    * * * * *
    //  * * * * *
    //* * * * *
    //rhombus pattern
    int rim;
    cin>>rim;
    for(int i=1;i<=rim;i++){
        for(int j=1;j<=rim-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=rim;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}