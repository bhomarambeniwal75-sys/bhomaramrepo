#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// First method
int majorityElement1(vector<int> &nums){
    int n = nums.size();

    for(int i = 0; i < n; i++){
        int freq = 0;

        for(int j = 0; j < n; j++){
            if(nums[j] == nums[i]){
                freq++;
            }
            if(freq > n/2){
                return nums[i];
            }
        }
    }
    return -1;
}
//Second Method
int majorityElement2(vector<int> &nums){
    int n = nums.size();

    //sort
    sort(nums.begin(), nums.end());

    //freq count
    int freq = 1, ans = nums[0];

    for(int i = 0; i < n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
    }

}

// Moore's Voting Algorithm
int MoorVoting(vector<int> &nums){
    int n = nums.size();

    int freq = 0, ans = 0;

    for(int i = 0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans = nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1, 2, 1, 2, 2, 2, 1, 4, 1, 2, 2, 2};

    int ans = MoorVoting(nums);

    cout<<ans<<endl;

    return 0;
}