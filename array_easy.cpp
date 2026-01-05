//removing duplicates
// #include<iostream>
// #include<set>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         set<int>v;
//         for(int i=0;i<nums.size();i++){
//         v.insert(nums[i]);
//         }
//         cout<<v.size()<<endl;
//         for(int x:v){
//             cout<<x<<endl;
//         }

//         return v.size();
        
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={45,45,6,77,7,7,5,3,5,5,5,5};
//     s.removeDuplicates(v);
//     return 0;
// }


//by not using set and inplace array changes

// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void removeDuplicates(vector<int>& nums) {
//         int n=nums.size();
//         int k=1;
//         for(int i=1;i<n;i++)
//         {
//             if(nums[i]!=nums[i-1]){
//                 nums[k]=nums[i];
//                 k++;     
//             }

           
//         }
//         nums.resize(k);
//          cout<<"array elements are:\n";
//         for(int i=0;i<nums.size();i++){
//             cout<<nums[i]<<endl;
//         }

//  }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={1,1,2,2,3,3,4,4,4,5,5};
//     s.removeDuplicates(v);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int arr[4]={1,2,3,4};
//     int n=4,pos=-1,elem;
//     printf("enter element you want to delete=\n");
//     scanf("%d",&elem);
//     for(int i=0;i<4;i++)
//     {
//         if(arr[i]==elem){
//             pos=i;
//         }
//     }
//     for(int i=pos;i<n;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     n=n-1;
//     printf("array elements after deletion\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     return 0;

// }

// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void rotateArrayByOne(vector<int>& nums) {
//        int first=nums[0];
//        for(int i=1;i<nums.size();i++)
//        {
//         nums[i-1]=nums[i];
//        }
//        nums[nums.size()-1]=first;
//        for(int i=0;i<nums.size();i++){
//         cout<<nums[i]<<endl;
//        }

//     }
// };
// int main()
// {
//     Solution s;
//     vector <int> v={1,2,3,4,5};
//     s.rotateArrayByOne(v);
//     return 0;
// }


//rotating to right
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int>v=nums;
//         for(int i=0;i<nums.size();i++)
//         {
//             v[(i+k)%nums.size()]=nums[i];
//         }
//         nums=v;
//         for(int i=0;i<nums.size();i++)
//         {
//             cout<<nums[i]<<endl;
//         }
        
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={1,2,3,4,4};
//     s.rotate(v,3);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Solution{
//     public:
//     void leftRotate(vector<int>v,int k)
//     {
//         int first=v[0];
//         for(int i=0;i<v.size();i++)
//         {
//             v[i-k]=v[i];
//         }


//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={1,2,3,4,5};
//     s.leftRotate(v,2);
//     return 0;
// }

//left rotate by d
// #include<iostream>
// using namespace std;
// void leftRotate(vector<int>& v, int k)
// {
//     int n = v.size();
//     k = k % n;

//     vector<int> temp = v;

//     for (int i = 0; i < n; i++)
//         v[(i - k + n) % n] = temp[i];
// };
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int k=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]!=0){
//                 nums[k]=nums[i];
//                 k++;
//             }
//         } 
//         while(k<nums.size())
//         {
//             nums[k]=0;
//             k++;
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             cout<<nums[i]<<endl;
//         }
        
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={1,2,3,0,0,0,5,0,8,9,0};
//     s.moveZeroes(v);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
//         for(int i=0;i<nums2.size();i++)
//         {
//             if(find(nums1.begin(),nums1.end(),nums2[i])==nums1.end())
//             {
//                 nums1.push_back(nums2[i]);
//             }
            
//         }
//         for(int i=0;i<nums1.size();i++)
//         {   
//             cout<<nums1[i]<<endl;

//         }
//         return nums1;
        
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v1={34,23,78,45};
//     vector<int>v2={34,56,78,12};
//     s.unionArray(v1,v2);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
//         int found=0;
//         for(int i=0;i<nums2.size();i++)
//         {
//             for(int j=0;j<nums1.size();j++)
//             {
//                 if(nums2[i]==nums1[j])
//                 {
//                     found=1;
//                 }
//             }
//             if (found==1)
//             {
//                 /* code */
//                 nums1.push_back(nums2[i]);
//             }
                 
//         }
//         for(int i=0;i<nums1.size();i++)
//         {   
//             cout<<nums1[i]<<endl;

//         }
//         return nums1;
        
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v1={34,23,78,45};
//     vector<int>v2={34,56,78,12};
//     s.unionArray(v1,v2);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int totalsum=n*(n+1)/2,sum=0;
//         for(int i=0;i<n;i++)
//         {
//             sum+=nums[i];
//         }
//         int missing=totalsum-sum;
//         cout<<missing;
//         return missing;
         
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={1,3,4,5,0};
//     s.missingNumber(v);
// }


//max consecutive ones
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//          int count=0,greatercount=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]==1)
//             {
//                 count++;
//                 if(greatercount<count){
//                     greatercount=count;
//                 }
//             }
//             else{
//                 count=0;
//             }
//         }
//         return greatercount;
        
//     }
// };

// int main()
// {
//     Solution s;
//     vector<int>v={1,1,1,0,0,0,0,1,1,1,1,1,1,0,1,0,1,0};
//     s.findMaxConsecutiveOnes(v);
//     return 0;
// }

//appeared once number
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         map<int,int>mpp;
//         int ans;
//         for(int i=0;i<nums.size();i++)
//         {
//             mpp[nums[i]]++;
//         }
//         for(auto it=mpp.begin();it!=mpp.end();it++)
//         {
//             if(it->second==1){
//                 ans=it->first;
//             }
//         }
//         return ans;
//     }
// };


// #include<iostream>
// using namespace std;
//  class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans = 0;
//         for(int x : nums) ans ^= x;
//         cout<<ans;
//         return ans;
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={1,2,3,1,2,1,1,1,4,3,4,4,5};
//     s.singleNumber(v);
//     return 0;
// }
