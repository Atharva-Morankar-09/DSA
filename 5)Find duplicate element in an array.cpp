
// Find a duplicate element in an array

#include<iostream>
#include<vector>
using namespace std;


// Function to return duplicate number
int duplicatenum(vector<int> &arr)
{
    int duplicate = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        
        int val = abs(arr[i]);
       //If value is positive then convert into negative
        if (arr[val-1]>=0)
        {
            arr[val-1] = - arr[val-1];
        }
        //If value is already negative then its the duplicate number
        else
        {
            duplicate = val;
            break;
        }
    }
    //To make all negative values positive again 
    for (int i = 0; i < arr.size(); i++)
    {   int val;
        if(arr[i]<0)
        {
            arr[i]=-arr[i];
        }
    }
    
    return duplicate;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,5};
    printf("The duplicate element is - %d", duplicatenum(arr));
    return 0;
}