//max length subarray with sum

// #include<iostream>
// #include<map>
// using namespace std;
// class Solution{
//     public:
//     int getLongestSubarray(vector<int>v,int k){
//         map<int,int>mpp;
//         int maxlength=0;
//         int sum=0;
//         for(int i=0;i<v.size();i++)
//         {
//             sum+=v[i];
//             if(sum==k)
//             {
//                 maxlength=max(maxlength,i+1);
//             }
//             int rem=sum-k;
//             if(mpp.find(rem)!=mpp.end()){
//             int len=i-mpp[rem];
//             maxlength=max(maxlength,len);
//             }
//             if(mpp.find(sum)==mpp.end()){
//                 mpp[sum]=i;
//             }
//         }
//         cout<<maxlength;
//         return maxlength;
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={1,2,3,1,1,1,1,1,5,6,3};
//     s.getLongestSubarray(v,3);
//     return 0;
// }


//return indices of two elements with sum
// brute force

// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>s;
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==target){
//                     s.push_back(i);
//                     s.push_back(j);
//                 }
//             }
//         }
//         for(int i=0;i<s.size();i++){
//             cout<<s[i]<<endl;
//         }
        
//         return s;

//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={1,3,4};
//     s.twoSum(v,4);
//     return 0;
// }

//optimized



// #include<iostream>
// #include<map>
// using namespace std;
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>v;
//         map<int,int>mpp;
//         int rem=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             rem=target-nums[i];
//             if(mpp.find(rem)!=mpp.end()){
//                 v.push_back(mpp[rem]);
//                 v.push_back(i);
//             }
//             mpp[nums[i]]=i;
//         }
//         return v;  

//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={1,3,4};
//     s.twoSum(v,4);
//     return 0;
// }

// kadane's algorithm

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxsum=INT_MIN,sum=0;
//         if(nums.size()==1){return nums[0];}
//         for(int i=0;i<nums.size();i++)
//         {
//             sum+=nums[i];
//             maxsum=max(sum,maxsum);
//             if(sum<0){
//                 sum=0;
//             }
//         }
//         return maxsum;
//     }
// };


//majority element
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         map<int,int>mpp;
//         for(int i=0;i<nums.size();i++)
//         {
//             mpp[nums[i]]++;
//         }
//         for(auto it=mpp.begin();it!=mpp.end();it++){
//             if(it->second>nums.size()/2){
//                 return it->first;
//             }
//         }  
//         return 0;      
//     }
// };


//Moore's voting algorithm

// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int freq=0,ans;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(freq==0){
//                     ans=nums[i];
//             }
//             if(ans==nums[i]){freq++;}
//             else{
//                 freq--;
//             }

//         }
       
//         return ans;     
//     }
// };
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     vector<int> leaders(vector<int>& nums) {
//             vector<int>v;
//         int leader=nums[nums.size()-1];
//         v.push_back(leader);
//         for(int i=nums.size()-2;i>0;i--){
//             if(nums[i]>leader){
//                 leader=nums[i];
//                 v.push_back(nums[i]);
//             }
//         }
//         reverse(v.begin(),v.end());
//         return v;
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={1, 2, 5, 3, 1, 2};
//     s.leaders(v);
//     return 0;
// }