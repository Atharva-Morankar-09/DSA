#include<iostream>
#include<unordered_set>
using namespace std;

int sumis0(int a[],int size)
{
    unordered_set<int> set;
    set.insert(0);
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=a[i];
        if (set.find(sum)!=set.end())
        {
            return true;
        }
        else
        {
            set.insert(sum);
        }
    }
    return false;

}

int main()
{
    int a[]={1,2,3,4,5,-5,-4,-3,-2,-1};
    int size = sizeof(a)/sizeof(int);
    if (sumis0(a,size))
    {
     printf("Subarray with 0 sum is present");
    }
    else
    {
        printf("Subarray with 0 sum is not present");
    }
    return 0;
}