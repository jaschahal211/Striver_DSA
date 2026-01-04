
// bubble sort

// #include <iostream>
// #include <utility>
// using namespace std;
// class Solution {
// public:
//     vector<int> bubbleSort(vector<int>& nums) {
//         int found=0;
//         for(int i=0;i<nums.size()-1;i++)
//         {
//             for(int j=0;j<nums.size()-i-1;j++)
//             {
//                 if(nums[j]>nums[j+1])
//                 {
//                     swap(nums[j],nums[j+1]);
//                     found=1;
//                 }
//             }
//             if(found==0)
//             {
//                 return nums;
//             }
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             cout<<nums[i]<<endl;
//         }
//         return nums;


//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={23,6,45,78,9,1};
//     s.bubbleSort(v);
//     return 0;
// }


// selection sort
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     vector<int> selectionSort(vector<int>& nums) {
//         int min=0;
//         for(int i=0;i<nums.size()-1;i++)
//         {
//             min=i;
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[min]>nums[j])
//                 {
//                     min=j;
//                 }
//             }
//             if(min!=i)
//             {
//                 swap(nums[min],nums[i]);
//             }
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             cout<<nums[i]<<endl;
//         }
//     return nums;
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={45,6,7,89,23,1};
//     s.selectionSort(v);
//     return 0;
// }

//insertion sort

// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     vector<int> selectionSort(vector<int>& nums) {
//         int temp=0;
//         for(int i=1;i<nums.size();i++)
//         {
//             temp=nums[i];
//             int j=i-1;
//             while(j>=0&&nums[j]>temp)
//             {
//                 nums[j+1]=nums[j];
//                 j--;
//             }
//             nums[j+1]=temp;        
            
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             cout<<nums[i]<<endl;
//         }
//     return nums;
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={45,6,7,89,23,1};
//     s.selectionSort(v);
//     return 0;
// }


//sorted or not
// #include<iostream>
// using namespace std;

// class Solution{	
// 	public:
// 		bool isSorted(vector<int>& nums){
// 			for(int i=1;i<nums.size();i++)
// 			{
// 				if(nums[i]<nums[i-1])
// 				{
//                     cout<<false;
// 					return false;
                    
// 				}
// 			}
// 			//your code goes here
//             cout<<true;
// 			return true;
// 		}
// };
// int main()
// {
//     Solution s;
//     vector<int>v={1,2,3,4,5};
//     s.isSorted(v);
//     return 0;

// }

//merge sort
// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     vector<int> mergeSort(vector<int>& nums) {
//         merging(nums,0,nums.size()-1);
//         for(int i=0;i<nums.size();i++)
//         {
//             cout<<nums[i]<<endl;
//         }
//         return nums;
        
//     }
//     void merging(vector<int>&nums,int low,int high)
//     {
//         if(low<high){
//             int mid=(low+high)/2;
//             merging(nums,low,mid);
//             merging(nums,mid+1,high);
//             merge(nums,low,mid,high);
//         }
//     }
//     void merge(vector<int>&nums,int low,int mid,int high)
//     {
//         vector<int>newv;
//         int i=low;
//         int j=mid+1;
//         while(i<=mid &&j<=high){
//             if(nums[i]<nums[j])
//             {
//                 newv.push_back(nums[i]);
//                 i++;
//             }
//             else{
//                 newv.push_back(nums[j]);
//                 j++;
//             }
//         }
//             while(j<=high)
//             {
//                 newv.push_back(nums[j]);
//                 j++;
//             }
//             while(i<=mid)
//             {
//                 newv.push_back(nums[i]);
//                 i++;
//             }
//             for(int k=low;k<=high;k++)
//             {
//                 nums[k]=newv[k-low];
//             }

//     }
    
// };
// int main()
// {
//     Solution s;
//     vector<int>v={56,7,89,45,23,34,2,9,7,12};
//     s.mergeSort(v);
//     return 0;
// }



//quick sort

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void quick(vector<int>& nums, int low, int high) {

//         if (low >= high) return;   // base case

//         int pivot = nums[low];
//         int i = low, j = high;

//         while (i < j) {

//             while (i <= high && nums[i] <= pivot) i++;
//             while (nums[j] > pivot) j--;

//             if (i < j) swap(nums[i], nums[j]);
//         }

//         // place pivot at correct position
//         swap(nums[low], nums[j]);

//         // recursive calls
//         quick(nums, low, j - 1);
//         quick(nums, j + 1, high);
//     }

//     vector<int> quickSort(vector<int>& nums) {
//         quick(nums, 0, nums.size() - 1);
//         return nums;
//     }
// };

// int main() {
//     Solution s;
//     vector<int> v = {45,6,5,23,89,90,67,5,2};

//     s.quickSort(v);

//     for (int x : v) cout << x << " ";
// }

//recursion bubble sort
// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     vector<int> bubbleSort(vector<int>& nums,int pass,int comparison ) {
//         if(pass==nums.size()-1){
//             print(nums);
//             return nums;
//         }
//         if(comparison<nums.size()-pass-1){
//         if(nums[comparison]>nums[comparison+1]){
//             swap(nums[comparison],nums[comparison+1]);
//         }
//         return bubbleSort(nums,pass,comparison+1);
//     }
//     return bubbleSort(nums,pass+1,0);
         

//     }
//     void print(vector<int>&nums)
//     {
//         for(int i=0;i<nums.size();i++){
//         cout<<nums[i]<<endl;
//         }
//     }
// };
// int main()
// {
//     Solution s;
//     vector<int>v={56,778,89,3,2,4,6456,24,13,214,56,0};
//     s.bubbleSort(v,0,0);
//     return 0;
// }


//insertion sort using recursion

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void InsertionSort(vector<int>& nums, int i, int j) {
//         if (i == nums.size()) return;  // base case

//         int temp = nums[i];

//         // correct condition
//         if (j >= 0 && nums[j] > temp) {
//             nums[j+1] = nums[j];          // shift element
//             InsertionSort(nums, i, j-1);  // recursive shift
//         } else {
//             nums[j+1] = temp;             // insert temp
//             InsertionSort(nums, i+1, i);  // move to next element
//         }
//     }
// };

// int main() {
//     Solution s;
//     vector<int> v = {56, 778, 89, 3, 2, 4, 6456, 24, 13, 214, 56, 0};

//     s.InsertionSort(v, 1, 0);  // start from index 1

//     for (int x : v) cout << x << " ";
// }


