//rotate array by 90 degree

// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         for(int i=0;i<matrix.size()-1;i++){
//             for(int j=i+1;j<matrix.size();j++){
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//         for(int i=0;i<matrix.size();i++){
//             reverse(matrix[i].begin(),matrix[i].end());
//         }
//     }
// };
// int main(){
//     Solution s;
//     vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
//     s.rotate(matrix);
//     return 0;
// }


//marks rows and column as 0 wherever 0;
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//         int n = matrix[0].size();

//         vector<int> row(m, 0);
//         vector<int> col(n, 0);

//         // mark rows and columns that should become zero
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(matrix[i][j] == 0) {
//                     row[i] = 1;
//                     col[j] = 1;
//                 }
//             }
//         }

//         // set cells to zero
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(row[i] || col[j]) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// };
// int main(){
//     Solution s;
//     vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
//     s.setZeroes(matrix);
//     return 0;
// }
// #include<iostream>
// #include<map>
// using namespace std;
// class Solution {
//   public:
//     int maxLen(vector<int>& arr) {
//         // Your code goes here
//         int k=0;
//         map<int,int>mpp;
//         int sum,i,maxlength=0;
//         for(int i=0;i<arr.size();i++)
//         {
//           sum+=arr[i];
//           if(sum==k){
//             maxlength=max(maxlength,i+1);
//           }
//           int rem=arr[i]-k;
//           if(mpp.find(rem)!=mpp.end()){
//             int len=i-mpp[rem];
//             maxlength=max(maxlength,len);
//           }
//         if(mpp.find(sum)!=mpp.end()){
//           mpp[sum]=i;
//         }
//         return maxlength;
//     }
  

//     }
// };

//pascal triangle

// #include<iostream>
// using namespace std;
// class Solution{
//     public:
//     void printPascal(int row){
//         for(int i=1;i<=row;i++)
//         {
//             for(int entries=1;entries<=i;entries++)
//             {
//                 if(entries==1||entries==i){
//                     cout<<1<<" ";
//                 }
//                 else{
//                     cout<<
//                 }
                
//             }
//             cout<<endl;
//         }

//     }

// };
// int main()
// {
//     Solution s;
//     s.printPascal(6);
//     return 0;
// }