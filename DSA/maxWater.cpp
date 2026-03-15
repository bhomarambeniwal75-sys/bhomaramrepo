#include<iostream>
#include<vector>
using namespace std;

// Brute Force approach
int maxArea1(vector<int> &height){
    int maxWater = 0; // ans

    for(int i = 0; i < height.size(); i++){
        for(int j = i+1; j < height.size(); j++){
            int w = j-i;
            int ht = min(height[i], height[j]);
            int currWater = w*ht;

            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}
// Optimal approach(2 pointer)
int maxArea2(vector<int> &height){
    int maxWater = 0; // ans
    int lp = 0, rp = height.size()-1;

    while(lp<rp){
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w*ht;
        maxWater = max(maxWater, currWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}
int main(){
    // We calculate the maximum area between two height so that max. water can fill
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << maxArea2(height);

    return 0;
}