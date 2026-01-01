// #include<iostream>
// using namespace std;
// class solution{
//     public:
//     void print(int m,int n){
//         for(int i=0;i<m;i++)
//         {
//             for (int j=0;j<n;j++)
//             {
//                 cout<<"*";
//             }
//             cout<<"\n";
//         }
//     }

// };
// int main()
// {
//     solution s;
//     s.print(5,5);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class solution{
//     public:
//     void print(int m,int n){
//         for(int i=0;i<m;i++)
//         {
//             for (int j=0;j<i+1;j++)
//             {
//                 cout<<"*";
//             }
//             cout<<"\n";
//         }
//     }

// };
// int main()
// {
//     solution s;
//     s.print(5,5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class solution{
//     public:
//     void print(int m,int n){
//         for(int i=0;i<m;i++)
//         {
//             for (int j=1;j<=i+1;j++)
//             {
//                 cout<<j;
//             }
//             cout<<"\n";
//         }
//     }

// };
// int main()
// {
//     solution s;
//     s.print(5,5);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class solution{
//     public:
//     void print(int m,int n){
//         for(int i=0;i<m;i++)
//         {
//             for (int j=1;j<=i+1;j++)
//             {
//                 cout<<i+1;
//             }
//             cout<<"\n";
//         }
//     }

// };
// int main()
// {
//     solution s;
//     s.print(5,5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class solution{
//     public:
//     void print(int m,int n){
//         for(int i=5;i>0;i--)
//         {
//             for (int j=1;j<=i;j++)
//             {
//                 cout<<"*";
//             }
//             cout<<"\n";
//         }
//     }

// };
// int main()
// {
//     solution s;
//     s.print(5,5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class solution{
//     public:
//     void print(int m,int n){
//         for(int i=5;i>0;i--)
//         {
//             for (int j=1;j<=i;j++)
//             {
//                 cout<<j;
//             }
//             cout<<"\n";
//         }
//     }

// };
// int main()
// {
//     solution s;
//     s.print(5,5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class solution{
//     public:
//     void print(int m,int n){

//         for(int row=1;row<=m;row++)
//         {
//             for(int col=0;col<1;col++){
//             for (int space=row;space<=m-1;space++)
//             {
//                 cout<<" ";
//             }
//             for(int star=1;star<=2*row-1;star++)
//             {
//                 cout<<"*";
//             }
//             for (int space=row;space<m-1;space++)
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//         }

//     }

// };
// int main()
// {
//     solution s;
//     s.print(5,9);
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     void print(int m) {

//         for (int row = 1; row <= m; row++) {

//             // spaces
//             for (int space = 1; space <= m - row; space++) {
//                 cout << " ";
//             }

//             // stars
//             for (int star = 1; star <= 2 * row - 1; star++) {
//                 cout << "*";
//             }

//             cout << "\n";
//         }
//     }
// };

// int main() {
//     Solution s;
//     s.print(5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void print(int m) {
//          for (int row = 1; row <= m; row++) {

            
//             for (int space = 1; space <= m - row; space++) {
//                 cout << " ";
//             }

//             // stars
//             for (int star = 1; star <= 2 * row - 1; star++) {
//                 cout << "*";
//             }

//             cout << "\n";
//         }
//         for(int row=m;row>0;row--)
//         {
//             for(int space=row;space<m;space++)
//             {
//                 cout<<" ";
//             }
//             for(int star=1;star<=2*row-1;star++)
//             {
//                 cout<<"*";
//             }
//             cout<<"\n";

//         }
        
//     }
// };

// int main() {
//     Solution s;
//     s.print(5);
//     return 0;
// }




// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void print(int m) {
//          for (int row = 1; row <=(m+1)/2; row++) {
            
//             for (int star = 1; star <= row; star++) {
//                 cout << "*";
//             }
//             cout << "\n";
//          }
//         for(int row=m/2;row>0;row--)
//         {
//             for(int star=row;star>0;star--)
//             {
//                 cout<<"*";
//             }
//             cout<<"\n";
//         }
        
//         }
        
// };

// int main() {
//     Solution s;
//     s.print(9);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void print(int m) {
//         bool isone=true;
//         for(int row=1;row<=m;row++)
//         {
//             for(int num=1;num<=row;num++){
            
//             if(isone==true)
//             {
//                 cout<<"1";
//                 isone=false;
//             }
//             else{
//                 cout<<"0";
//                 isone=true;
//             }
//         }
//         cout<<"\n";
            
//         }

         
//     }
// };

// int main() {
//     Solution s;
//     s.print(5);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void print(int m) {
//         bool isone;
//        for(int row=1;row<=m;row++)
//     {
//         if(row%2!=0)
//         {
//             cout<<"1";
//             isone=false;
            
//         }
//         else{
//             cout<<"0";
//             isone=true;
//         }
//         for(int num=1;num<row;num++)
//         {
//             if(isone==true){
//                 cout<<"1";
//                 isone=false;

//             }
//             else{
//                 cout<<"0";
//                 isone=true;
//             }
//         }
//         cout<<"\n";

//     }

         
//     }
// };

// int main() {
//     Solution s;
//     s.print(5);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void print(int m) {
//    for(int row=1;row<=m;row++)
//    {
//     for(int num=1;num<=row;num++)
//         {
//             cout<<num;
//         }
//       for(int space=m-row;space>0;space--)
//       {
//         cout<<" ";
//       }  
//       for(int space=m-row;space>0;space--)
//       {
//         cout<<" ";
//       } 
//       for(int num=row;num>0;num--)
//         {
//             cout<<num;
//         }
//         cout<<"\n";
    
//    }
        
//     }
// };

// int main() {
//     Solution s;
//     s.print(4);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void print(int m) {
//         int value=1;
//    for(int row=1;row<=m;row++)
//    {
//     for(int num=1;num<=row;num++)
//     {
//         cout<<value;
//         cout<<" ";
       
//         value++;
//     }
 
//     cout<<"\n";
//    }
        
//     }
// };

// int main() {
//     Solution s;
//     s.print(5);
//     return 0;
// }

// #include<iostream>

// using namespace std;
// class Solution {
// public:
//     void print(int m) {
//         int value=1;
//    for(int row=0;row<m;row++)
//    {
//     for(int ascii_value=0;ascii_value<=row;ascii_value++)
//     {
//         cout<<char(ascii_value+65);
//     }
//     cout<<"\n";
     
//    }
        
//     }
// };

// int main() {
//     Solution s;
//     s.print(5);
//     return 0;
// }
// \

// #include<iostream>

// using namespace std;
// class Solution {
// public:
//     void print(int m) {
//         int value=1;
//    for(int row=0;row<m;row++)
//    {
//     for(int ascii_value=0;ascii_value<=row;ascii_value++)
//     {
//         cout<<char(65+r
// ow);
//     }
//     cout<<"\n";
     
//    }
        
//     }
// };

// int main() {
//     Solution s;
//     s.print(5);
//     return 0;
// }



// #include<iostream>

// using namespace std;
// class Solution {
// public:
//     void print(int m) {
//         for(int row=0;row<=m;row++)
//         {
//             for(int space=1;space<=m-row-1;space++)
//             {
//                 cout<<" ";
//             }
//             for(int value=0;value<row-1;value++)
//             {
//                 cout<<char(65+value);
//             }
//             for(int value=row-1;value>=0;value--)
//             {
//                 cout<<char(65+value);
//             }
//             for(int space=1;space<=m-row-1;space++)
//             {
//                 cout<<" ";
//             }


//             cout<<"\n";
//         }
     
        
//     }
// };

// int main() {
//     Solution s;
//     s.print(4);
//     return 0;
// }

#include<iostream>

using namespace std;
class Solution {
public:
    void print(int m) {
        for(int row=1;row<=m;row++)
        {
            for(int value=row;value>=1;value--)
            {
                cout<<char((m-value)+65);
            }
            cout<<"\n";

        }
     
        
    }
};

int main() {
    Solution s;
    s.print(5);
    return 0;
}





