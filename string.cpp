//outer parantheses
// #include<iostream>
// #include<string>
// using namespace std;
// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         // Your code goes here
//         int level=0;
//         string ans="";

        
//         for(char ch:s)
//         {
//             if(ch=='('){
//                 if(level>0)
//                 {
//                     ans+=ch;
//                 }
//                 level++;

//             }
//             else if(ch==')')
//             {
//                 level--;
//                 if(level>0)
//                 {
//                     ans+=ch;
//                 }
//             }
//         }
//         return ans;
//     }
// };


//reverse a word in paranthese
// class Solution {
// public:
//     string reverseWords(string s) {
//         string ans;

//         for (int i = s.length() - 1; i >= 0; i--) {

//             if (i == 0 && s[i] != ' ') {
//                 int j = i;
//                 while (j < s.length() && s[j] != ' ') {
//                     ans += s[j];
//                     j++;
//                 }
//                 ans += ' ';
//             }

//             if (s[i] == ' ' && i + 1 < s.length() && s[i + 1] != ' ') {
//                 int j = i + 1;
//                 while (j < s.length() && s[j] != ' ') {
//                     ans += s[j];
//                     j++;
//                 }
//                 ans += ' ';
//             }
//         }

//         if (!ans.empty()) ans.pop_back();
//         return ans;
//     }
// };

//largest oddd number in string 
// class Solution {
// public:
//     string largestOddNumber(string num) {
//         if((num[num.size()-1]-'0')%2!=0){
//             return num;
//         }
//         for(int i=num.length()-2;i>=0;i--)
//         {
//             int digit=num[i]-'0';
//             if(digit%2!=0)
//             {
//                 num.erase(i+1,num.size()-i);
//                 return num;
//             }

//         }
//       return "";
        
//     }
// };




