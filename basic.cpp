// #include<bits/stdc++.h>
// using namespace std;

// void num(int &n)
//     {
//         n=10;
        
//     }

// int main()
// {
//     // int x;
//     // cout<<"Enter a number:";
//     // cin>>x;
//     // cout<<endl<<x;



//     // string input and output in c++
//     // string fullname;
//     // cout<<"Enter your full name:";
//     // getline(cin,fullname);   // getline() is used to take input to the sentence
//     // cout<<"Your name is:"<<fullname;
//     // cout<<endl;
//     // cout<<"Length:"<<fullname.length();
//     // return 0;




//     //datatypes size
//     // int a = 5;
//     // cout<<sizeof(a);


//     //typecasting
//     // char ch=97;
//     // cout<<ch<<endl;
//     // float a =4.5;
//     // int b=(int)a;
//     // cout<<b; 


//     // doubt 1
//     // char ch = 1024;
//     // cout<<ch;


//     // operators
//     // int a =5;
//     // float b = 3.0;
//     // cout<<b/a;



//     // doubt 2
//     // int n;
//     // cout<<"Enter a number:";
//     // if(cin>>n)
//     // {
//     //     cout<<"Mantosh";
//     // }
//     // will print "Mantosh" for every value of n


//     // dooubt 3
//     // if(cout<<"Santosh ")
//     // {
//     //     cout<<"Mantosh";
//     // }
//     // will print both "Santosh" and "Mantosh"



//     // string data type
//     // string str = "Mantosh";
//     // str[0] ='S';
//     // cout<<str; 


//     //  pass by reference
    
   
//         // int n = 20;
//         // num(n);
//         // cout<<n;
//         // return 0;
    
// }

// #include<bits/stdc++.h>
// using namespace std;
// // int arr[6];   // stores 0
// int main()
// {
//     // int arr[6];  // stores garbage value
//     // for(int i=0;i<6;i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
//     set<int> st{1,2,3,4};
//     auto it1 = st.find(2);
//     auto it2 = st.find(4);
//     st.erase(it1,it2);
//     for(auto it:st)
//     {
//         cout<<it<<" ";
//     }
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter no of rows: ";
    cin >> n;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n - row; col++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
