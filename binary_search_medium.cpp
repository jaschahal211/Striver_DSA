//book allocation method

//#include <iostream>
// #include <vector>
// #include <numeric>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     bool isallowable(vector<int>& v, int mid, int m) {
//         int sum = 0;
//         int student = 1;

//         for (int i = 0; i < v.size(); i++) {
//             if (v[i] > mid) return false;  // important

//             if (sum + v[i] <= mid) {
//                 sum += v[i];
//             } else {
//                 student++;
//                 sum = v[i];
//             }
//         }
//         return student <= m;
//     }

//     void book_allocation(vector<int>& v, int m) {
//         int low = *max_element(v.begin(), v.end());
//         int high = accumulate(v.begin(), v.end(), 0);
//         int ans = -1;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;

//             if (isallowable(v, mid, m)) {
//                 ans = mid;
//                 high = mid - 1;
//             } else {
//                 low = mid + 1;
//             }
//         }
//         cout << ans;
//     }
// };

// int main() {
//     Solution s;
//     vector<int> v = {12, 34, 67, 90};
//     s.book_allocation(v, 2);
//     return 0;
// }



//aggresive cow
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     bool isPossible(vector<int>& v, int mid, int cows) {
//         int count = 1;              // first cow placed
//         int lastPos = v[0];

//         for (int i = 1; i < v.size(); i++) {
//             if (v[i] - lastPos >= mid) {
//                 count++;
//                 lastPos = v[i];
//             }
//         }
//         return count >= cows;
//     }

//     void aggressive_cow(vector<int>& v, int cows) {
//         sort(v.begin(), v.end());

//         int low = 1;
//         int high = v.back() - v.front();
//         int ans = -1;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;

//             if (isPossible(v, mid, cows)) {
//                 ans = mid;          // valid, try bigger distance
//                 low = mid + 1;
//             } else {
//                 high = mid - 1;
//             }
//         }
//         cout << ans;
//     }
// };

// int main() {
//     Solution s;
//     vector<int> v = {0, 3, 4, 7, 10, 9};
//     s.aggressive_cow(v, 2);
//     return 0;
// }


//painters problem
// #include <bits/stdc++.h>
// using namespace std;

// bool isPossible(vector<int>& boards, int k, long long maxTime) {
//     int painters = 1;
//     long long currSum = 0;

//     for (int i = 0; i < boards.size(); i++) {
//         if (currSum + boards[i] <= maxTime) {
//             currSum += boards[i];
//         } else {
//             painters++;
//             currSum = boards[i];

//             if (painters > k)
//                 return false;
//         }
//     }
//     return true;
// }

// int painterPartition(vector<int>& boards, int k) {
//     long long low = *max_element(boards.begin(), boards.end());
//     long long high = accumulate(boards.begin(), boards.end(), 0LL);
//     long long ans = high;

//     while (low <= high) {
//         long long mid = (low + high) / 2;

//         if (isPossible(boards, k, mid)) {
//             ans = mid;
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> boards = {10, 20, 30, 40};
//     int k = 2;

//     cout << "Minimum time to paint boards = "
//          << painterPartition(boards, k) << endl;

//     return 0;
// }

//gas station question
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     bool isPossible(vector<int>& arr, int k, long double dist) {
//         int needed = 0;

//         for (int i = 1; i < arr.size(); i++) {
//             long double gap = arr[i] - arr[i - 1];
//             needed += floor(gap / dist);
//         }

//         return needed <= k;
//     }

//     long double minimiseMaxDistance(vector<int>& arr, int k) {
//         long double low = 0.0;
//         long double high = 0.0;

//         for (int i = 1; i < arr.size(); i++) {
//             high = max(high, (long double)(arr[i] - arr[i - 1]));
//         }

//         while (high - low > 1e-6) {
//             long double mid = (low + high) / 2.0;

//             if (isPossible(arr, k, mid))
//                 high = mid;
//             else
//                 low = mid;
//         }

//         return high;
//     }
// };

// int main() {
//     Solution s;
//     vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
//     int k = 10;

//     cout << fixed << setprecision(5)
//          << s.minimiseMaxDistance(arr, k);

//     return 0;
// }
