#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1 = {1, 2, 3};
    cout<< vec1[0] << endl<<endl;

    vector<int> vec2(4, 6);
    cout<<vec2[0]<<endl;
    cout<<vec2[1]<<endl;
    cout<<vec2[2]<<endl<<endl;

    vector<char> vec3 = {'a', 'b', 'c', 'd'};
    for(char val : vec3){ // for each loop
        cout<< val << endl;
    }
    cout<<"size = "<<vec3.size()<<endl;

    vector<int> vec4;
    cout<<"size = "<<vec4.size()<<endl;
    vec4.push_back(45);
    vec4.push_back(34);
    vec4.push_back(26);
    cout<<"Size after push back "<<vec4.size()<<endl;

    vec4.pop_back();
    for(int val : vec4){
        cout<<val<<endl;
    }
    cout<<endl<<vec4.front()<<endl;
    cout<<vec4.back()<<endl<<endl;

    cout<<vec4.at(0)<<endl;
    cout<<vec4.at(1)<<endl;

    vector<int>vec5;
    vec5.push_back(1);
    vec5.push_back(2);
    vec5.push_back(3);
    vec5.push_back(4);
    vec5.push_back(5);

    cout<<vec5.size()<<endl;
    cout<<vec5.capacity()<<endl;

    return 0;
}