//Print Subarrays having sum as 0

#include <iostream>
#include <unordered_map>
using namespace std;
 
void printAllSubarrays(int arr[], int n)
{
    // create an empty multimap to store the ending index of all
    // subarrays having the same sum
    unordered_multimap<int, int> map;
 
    // insert `(0, -1)` pair into the map to handle the case when
    // subarray with zero-sum starts from index 0
    map.insert(pair<int, int>(0, -1));
 
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        
        sum += arr[i];
 
        // if the sum is seen before, there exists at least one
        // subarray with zero-sum
        if (map.find(sum) != map.end())
        {
            auto it = map.find(sum);
 
            // find all subarrays with the same sum
            while (it != map.end() && it->first == sum)
            {
                cout << "Subarray [" << it->second + 1 << "..." << i << "]\n";
                it++;
            }
        }
 
        // insert (sum so far, current index) pair into multimap
        map.insert(pair<int, int>(sum, i));
    }
}
 
int main()
{
    int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printAllSubarrays(arr, n);
 
    return 0;
}



//  #include<iostream>
//  using namespace std;

//  void PrintSubA(int a[],int size)
//  {
//       for (int i = 0; i < size; i++)
//       {
//                 int sum = 0; 
//                for (int j = i; j < size ; j++)
//          {
//              sum+=a[j];
//              if (sum==0)
//              {
//                  cout<<"The Subarray with sum 0 is - ["<<i<<",...,"<<j<<"]"<<endl;
//              }
            
//          }
        
//       }
      
//  }

//  int main()
//  {
//      int a[] = {1,2,3,4,5,-5,-4,-3,-2,-1};
//      int size = sizeof(a)/sizeof(int);

//      PrintSubA(a,size);
//      return 0;
//  }


// #include <iostream>
// #include <unordered_map>
// using namespace std;
 
// // Function to print all subarrays with a zero-sum
// // in a given array
// void printAllSubarrays(int arr[], int n)
// {
//     // consider all subarrays starting from `i`
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
 
//         // consider all subarrays ending at `j`
//         for (int j = i; j < n; j++)
//         {
//             // sum of elements so far
//             sum += arr[j];
 
//             // if the sum is seen before, we have found a subarray
//             // with zero-sum
//             if (sum == 0) {
//                 cout << "Subarray [" << i <<"..."<< j << "]\n";
//             }
//         }
//     }
// }
 
// int main()
// {
//     int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
//     int n = sizeof(arr)/sizeof(arr[0]);
 
//     printAllSubarrays(arr, n);
 
//     return 0;
// }
