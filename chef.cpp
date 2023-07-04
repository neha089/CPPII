// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to find a binary array C with the same score as A
// vector<int> findBinaryArrayWithSameScore(const vector<int>& A) {
//     int N = A.size();
//     vector<int> C(N);

//     // Initialize C with the opposite of A
//     for (int i = 0; i < N; i++) {
//         C[i] = 1 - A[i];
//     }

//     return C;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;

//         vector<int> A(N);
//         for (int i = 0; i < N; i++) {
//             cin >> A[i];
//         }

//         vector<int> C = findBinaryArrayWithSameScore(A);

//         for (int i = 0; i < N; i++) {
//             cout << C[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to check if a sequence is AP-Free
// bool isAPFree(const vector<int>& sequence) {
//     int n = sequence.size();

//     for (int i = 0; i < n - 2; i++) {
//         if ((sequence[i + 1] - sequence[i]) == (sequence[i + 2] - sequence[i + 1])) {
//             return false; // AP found
//         }
//     }

//     return true; // No AP found
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;

//         vector<int> sequence(N);
//         for (int i = 0; i < N; i++) {
//             cin >> sequence[i];
//         }

//         if (isAPFree(sequence)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

// void generatePermutation(int N) {
//     if (N < 6) {
//         cout << -1 << endl;
//         return;
//     }

//     vector<int> permutation(N);

//     // Generate the initial permutation [1, 2, 3, ..., N]
//     for (int i = 0; i < N; i++) {
//         permutation[i] = i + 1;
//     }

//     // Swap adjacent elements to create the lexicographically largest permutation
//     for (int i = 0; i < N - 1; i += 2) {
//         swap(permutation[i], permutation[i + 1]);
//     }

//     // Output the permutation if it satisfies the condition
//     if (gcd(permutation[0], permutation[2]) > gcd(permutation[1], permutation[3])) {
//         for (int i = 0; i < N; i++) {
//             cout << permutation[i] << " ";
//         }
//         cout << endl;
//     } else {
//         cout << -1 << endl;
//     }
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;
//         generatePermutation(N);
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

// void generatePermutation(int N) {
//     if (N < 6) {
//         cout << -1 << endl;
//         return;
//     }

//     vector<int> permutation(N);

//     // Generate the initial permutation [1, 2, 3, ..., N]
//     for (int i = 0; i < N; i++) {
//         permutation[i] = i + 1;
//     }

//     // Swap adjacent elements to create the lexicographically largest permutation
//     for (int i = 0; i < N - 1; i += 2) {
//         swap(permutation[i], permutation[i + 1]);
//     }

//     // Output the permutation if it satisfies the condition
//     if (gcd(permutation[0], permutation[2]) > gcd(permutation[1], permutation[3])) {
//         for (int i = 0; i < N; i++) {
//             cout << permutation[i] << " ";
//         }
//         cout << endl;
//     } else {
//         // Find the first even number and swap it with the last number
//         int firstEven = -1;
//         for (int i = 0; i < N; i++) {
//             if (permutation[i] % 2 == 0) {
//                 firstEven = i;
//                 break;
//             }
//         }

//         if (firstEven == -1) {
//             cout << -1 << endl;
//             return;
//         }

//         swap(permutation[firstEven], permutation[N - 1]);

//         // Output the new permutation
//         for (int i = 0; i < N; i++) {
//             cout << permutation[i] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;
//         generatePermutation(N);
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

// bool compare(int a, int b) {
//     // Custom comparison function to sort numbers in descending order of their GCD with 1
//     return gcd(a, 1) > gcd(b, 1);
// }

// void generatePermutation(int N) {
//     if (N < 6) {
//         cout << -1 << endl;
//         return;
//     }

//     vector<int> permutation(N);

//     // Generate the initial permutation [1, 2, 3, ..., N]
//     for (int i = 0; i < N; i++) {
//         permutation[i] = i + 1;
//     }

//     // Sort the permutation in descending order of their GCD with 1
//     sort(permutation.begin(), permutation.end(), compare);

//     // Output the permutation
//     for (int i = 0; i < N; i++) {
//         cout << permutation[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;
//         generatePermutation(N);
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool isPrime(int n) {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// void generatePermutation(int N) {
//     if (isPrime(N)) {
//         cout << -1 << endl;
//         return;
//     }

//     vector<int> permutation(N);

//     // Generate the initial permutation [1, 2, 3, ..., N]
//     for (int i = 0; i < N; i++) {
//         permutation[i] = i + 1;
//     }

//     // Sort the permutation in descending order
//     sort(permutation.begin(), permutation.end(), greater<int>());

//     // Output the permutation
//     for (int i = 0; i < N; i++) {
//         cout << permutation[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;
//         generatePermutation(N);
//     }

//     return 0;
// }
// #include <iostream>

// using namespace std;

// bool canPartition(int N, int K) {
//     if (K > N || N % 2 != K % 2)
//         return false;
//     return true;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, K;
//         cin >> N >> K;

//         if (canPartition(N, K))
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }
// #include <iostream>

// using namespace std;

// bool canPartition(int N, int K) {
//     if (K > N || N % 2 != 0 || K % 2 != 0)
//         return false;
//     return true;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, K;
//         cin >> N >> K;

//         if (canPartition(N, K))
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }
// #include <iostream>

// using namespace std;

// bool canPartition(int N, int K) {
//     if (N < 2 * K || (N % 2 != 0 && K == 1))
//         return false;
//     return true;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, K;
//         cin >> N >> K;

//         if (canPartition(N, K))
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }
// void moveZeroes(vector<int>& nums) {
//     vector<int> a;
//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] == 0) {
//             a.push_back(nums[i]);
//         }
//     }

//     for (int i = 0; i < a.size(); i++) {
//         nums.pop_back();
//     }

//     nums.insert(nums.end(), a.begin(), a.end());

//     for (int i = 0; i < nums.size(); i++) {
//         cout << nums.at(i);
//     }
// }
// #include <iostream>
// #include <vector>

// const int MOD = 1000000007;

// int countColoringWays(int N, int K) {
//     std::vector<int> dp(N + 1, 0);

//     for (int i = 1; i <= N; i++) {
//         if (i <= K) {
//             dp[i] = K;
//         } else {
//             dp[i] = 0;
//             for (int j = i - 1; j >= i - K; j--) {
//                 dp[i] = (dp[i] + dp[j]) % MOD;
//             }
//             dp[i] = (dp[i] * K) % MOD;
//         }
//     }

//     return dp[N];
// }

// int main() {
//     int T;
//     std::cin >> T;

//     while (T--) {
//         int N, K;
//         std::cin >> N >> K;

//         int ways = countColoringWays(N, K);
//         std::cout << ways << std::endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <map>

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N, K;
        std::cin >> N >> K;

        std::vector<int> candies(N);
        for (int i = 0; i < N; i++) {
            std::cin >> candies[i];
        }

        std::map<int, int> colorCount;
        for (int i = 0; i < N; i++) {
            colorCount[candies[i]]++;
        }

        int maxGroups = N;
        for (auto it = colorCount.begin(); it != colorCount.end(); it++) {
            int numGroups = it->second / K;
            maxGroups = std::min(maxGroups, numGroups);
        }

        std::cout << maxGroups << std::endl;
    }

    return 0;
}
