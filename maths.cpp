// 1.//finding number of digits in num
// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     int countDigit(int n) {
//         int count=0;
//         if(n==0)
//         {
//             count=1;
//         }
//         while(n>0)
//         {
//           n=n/10;
//           count++;
//         }
//         cout<<count;
//         return 0;

//     }
// };

// int main()
// {
//     Solution s;
//     s.countDigit(0);
//     return 0;
// }


// 2.reverse a number



// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     int reverseNumber(int n) {
//         int rev=0,rem=0;
//         while(n>0)
//         {
//             rem=n%10;
//             n=n/10;
//             rev=rev*10+rem;
//         }
//         cout<<rev;
//         return rev;

//     }
// };

// int main()
// {
//     Solution s;
//     s.reverseNumber(100);
//     return 0;
// }


// palindrome number

// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     void isPalindrome(int n) {
//         int rem=0,rev=0;
//         bool palindrome=false;
//         int num=n;
//         while(n>0)
//         {
//             rem=n%10;
//             n=n/10;
//             rev=rev*10+rem;
//         }
//         if(rev==num)
//         {
//             palindrome=true;
//         }
//         cout<<palindrome;

//     }
// };


// int main()
// {
//     Solution s;
//     s.isPalindrome(121);
//     return 0;
// }


//gcd 


// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     int GCD(int n1,int n2) {
//         int rem;
//         n1=abs(n1);
//         n2=abs(n2);
//         while(n2>0)
//         {
//             rem=n1%n2;
//             n1=n2;
//             n2=rem;
//         }
//         return n1;


//     }
// };

// int main()
// {
//     Solution s;
//     s.GCD(35,7);
//     return 0;
// }


//lcm


// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     int LCM(int n1,int n2) {
//         int rem;
//         int lcm;
//         n1=abs(n1);
//         n2=abs(n2);
//        if(n2>n1)
//        {
//         if(n2%n1==0)
//         {
//             lcm=n2;
//         }
//         else if(n2%n1==1)
//         {
//             lcm=1;
//         }
//         else{
//             int value=2;
//             while(n2%n1!=0)
//             {
//                 n2*=value;
//                 value++;
//             }
//             lcm=n2;
//         }
//        }
//        cout<<lcm;
//        return lcm;



//     }
// };

// int main()
// {
//     Solution s;
//     s.LCM(12,46);
//     return 0;
// }


//armstrong number
// #include<iostream>
// #include <cmath>
// using namespace std;
// class Solution {
// public:
//     bool isArmstrong(int n) {
//         int count=0,num=n,original=n,rem=0,sum=0;
//         bool ans=false;
//         if(num==0)
//         {
//             count=1;
//         }
//         while(n>0)
//         {
//             n=n/10;
//             count++;
//         }
//         while(num>0)
//         {

//             rem=num%10;
//             num=num/10;
//             sum+=round(pow(rem,count));
//         }
//         if(sum==original)
//         {
//             ans=true;
//         }
//         cout<<ans;
//         return ans;

//     }
// };
// int main(){
//     Solution s;
//     s.isArmstrong(1634);
//         return 0;
// }


//all divisors
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     vector<int> divisors(int n) {
//         vector<int>v;
//         for(int i=1;i<=n;i++)
//         {
//             if(n%i==0)
//             {
//                 v.push_back(i);
//             }
//         }
//         for(auto it=v.begin();it!=v.end();it++)
//         {
//             cout<<*(it)<<endl;
//         }
//         return v;

//     }
// };
// int main()
// {
//     Solution s;
//     s.divisors(6);
//     return 0;
// }

//prime number
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     bool isPrime(int n) {
//         int count=0;
//         bool ans=false;
//         for(int i=1;i<=n;i++)
//         {
//             if(n%i==0)
//             {
//                 count++;
//             }
//         }
//         if(count==2)
//         {
//             ans=true;
//         }
//         cout<<ans;
//         return ans;
//     }
// };
// int main()
// {
//     Solution s;
//     s.isPrime(7);
// }




