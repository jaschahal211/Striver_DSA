//printing number 1 to n
// #include<iostream>
// using namespace std;
// class Solution {
//   public:
//     void printNumbers(int n) {
//         // Your code goes here
//         int i=1;
//         printing(i,n);
        
//     }
//     void printing(int i,int n)
//     {
//         if(i<=n)
//         {
//             cout<<i<<endl;
//             printing(i+1,n);
//         }
//     }

// };
// int main()
// {
//     Solution s;
//     s.printNumbers(5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Solution {
//   public:
//     void printNumbers(int n) {
//            printing(n);
//     }
//         // Your code goes here
//         void printing(int n){
//           if(n>0)
//           {
//             cout<<n<<endl;
//             printing(n-1);
//           }
//         }
// };
// int main()
// {
//     Solution s;
//     s.printNumbers(5);
//     return 0;
// }

//sum of n natural number
// #include<iostream>
// using namespace std;
// class Solution{	
// 	public:
// 		void NnumbersSum(int N){
// 			//your code goes here
//             cout<<print(N);
//         }
//             int print(int n)
//             {
//                 if(n==0){return 0;}
//                 else{
//                     return n+print(n-1);
//                 }

//             }

// };
// int main()
// {
//     Solution s;
//     s.NnumbersSum(5);
//     return 0;
// }

//factorial


// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void factorial(int n) {
//         cout<<printfact(n);
//     }
//     int printfact(int n)
//     {
//         if(n==0){return 1;}
//           else  return n*printfact(n-1);

//     }
// };
// int main()
// {
//     Solution s;
//     s.factorial(5);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// class Solution{
// public:
//     void reverse(int arr[], int n){
//         printreverse(arr,n-1);
//     }
//     void printreverse(int arr[],int n){
//         if(n>=0)
//         {
//             cout<< arr[n]<<endl;
//             printreverse(arr,n-1);
//         }
        
//     }
// };
// int main()
// {
//     Solution s;
//     int arr[4]={34,56,76,87};
//     s.reverse(arr,4);
//     return 0;
// }

//inplace reverse of the array
// #include<iostream>
// using namespace std;
// class Solution{
// public:
//     void reverse(int arr[], int n){
//          printrev(arr,0,n-1);
//          print(arr,n);
//     }
//     void printrev(int arr[],int left,int right){
//         if(left<right)
//         {
//             swap(arr[left],arr[right]);
//             printrev(arr,left+1,right-1);
//         }

//     }
//     void print(int arr[],int n)
//     {
//         for(int i=0;i<n;i++)
//         {
//             cout<<arr[i]<<endl;
//         }
//     }
// };
// int main()
// {
//     Solution s;
//     int arr[4]={67,78,89,90};
//     s.reverse(arr,4);
//     return 0;
// }

//palindrome string or not


// #include<iostream>
// #include<string>
// using namespace std;
// class Solution{	
// 	public:		
// 		void palindromeCheck(string& s){
// 			//your code goes here
//             check(s,0,s.length()-1);    
// 		}
//         bool check(string s,int low,int high)
//         {
//             if(low>=high)
//             {
//                 cout<<true;
//                 return true;
//             }
//                 if(s[low]!=s[high])
//                 {
//                     cout<<false;
//                     return false;

//                 }else{
//                 return check(s,low+1,high-1);
//                 }
//             }
// };
// int main()
// {
//     Solution s;
//     string word="haaH";
//     s.palindromeCheck(word);
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// class Solution{	
// 	public:		
// 		void palindromeCheck(string& s){
// 			//your code goes here
//             string news;
//             for(char c:s)
//             {
//                 if(isalnum(c)){
//                     news+=tolower(c);
//                 }
//             }
//             check(news,0,news.length()-1);    
// 		}
//         bool check(string s,int low,int high)
//         {
//             if(low>=high)
//             {
//                 cout<<true;
//                 return true;
//             }
//                 if(s[low]!=s[high])
//                 {
//                     cout<<false;
//                     return false;

//                 }else{
//                 return check(s,low+1,high-1);
//                 }
//             }
// };
// int main()
// {
//     Solution s;
//     string word="haaH";
//     s.palindromeCheck(word);
//     return 0;
// }

//fibonacii series
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     int fib(int n) {
//         if(n==0){
//             return 0;}
//         if(n==1){return 1;}
//         return fib(n-1)+fib(n-2);
//     }
// };
// int main()
// {
//     Solution s;
//     cout<<s.fib(3);
//     return 0;
// }

