//1. full pyramid star

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter no.of rows:";
//     cin>>n;

//     for(int row=0;row<n;row++)
//     {
//         int k=0;
//         for(int col=0;col<2*n-1;col++)
//         {
//             // cout<<"*";
//             // space
//             if(col<n-1-row)
//             {
//                 cout<<" ";
//             }

//             // star
//             else if(k<2*row+1)
//             {
//                 cout<<"*";
//                 k++;
//             }

//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// 2.full hollow pyramid

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter no.of rows:";
//     cin >> n;

//     for (int row = 0; row < n; row++)
//     {
//         int k = 0;
//         for (int col = 0; col < 2 * n - 1; col++)
//         {
//             // cout<<"*";
//             // space
//             if (col < n - 1 - row)
//             {
//                 cout << " ";
//             }

//             // star
//             else if (k < 2 * row + 1)
//             {
//                 if (k == 0 || k == 2 * row || row == n - 1)
//                 {
//                     cout << "*";
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }

//                 k++;
//             }

//             // space
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }





//3.Inverted Full Pyramid

// #include<iostream>
// using namespace std;;

// int main()
// {
//     int r;
//     cout<<"Enter no.of rows:";
//     cin>>r;

//     for(int row=0;row<r;row++)
//     {
//         int k=0;
//         for(int col=0;col<2*r-1;col++)
//         {
//             // cout<<"*";
//             // space
//             if(col<row)
//             {
//                 cout<<" ";
//             }

//             // star
//             else if(k<(2*r-1-(2*row)))
//             {
//                 cout<<"*";
//                 k++;
//             }

//             // space
//             else{
//                 cout<<" ";
//             }
//         }

//         cout<<endl;
//     }

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main()
// {
//     int r;
//     cout<<"Enter no.of rows:";
//     cin>>r;

//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<r-1-i;j++)
//         {
//             cout<<" ";
//         }

//         for(int k=0;k<2*i+1;k++)
//         {
//             cout<<"*";
//         }

//         cout<<endl;
//     }
//     return 0;
// }



