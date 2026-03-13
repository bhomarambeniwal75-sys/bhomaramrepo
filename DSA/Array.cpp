#include <iostream>
#include <climits>
using namespace std;

int main(){
    // Find max and min munber in a Array
    int nums[] = {1, 34, -12, 45, 0, 56, -78};
    int size = 7;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++){
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout<<"smallest = "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;

    return 0;
}