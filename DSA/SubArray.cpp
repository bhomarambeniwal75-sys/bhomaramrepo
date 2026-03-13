#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    // print all the subarray
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++){
            for(int i = st; i <= end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    // // Max. Subarray Sum
    // int maxSum = INT_MIN;

    // for(int st = 0; st < n; st++){
    //     int currSum = 0;
    //     for(int end = 0; end < n; end++){
    //         currSum += arr[end];
    //         maxSum = max(maxSum, currSum);
    //     }
    // }
    // cout<<"Max sub array sum = "<<maxSum<<endl;

    // Same problem solve with help of Kadane's algorithem
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int val : arr){
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}