#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec={1,2,3};
    vector <int> vec;
    vec.push_back(1);
    cout<<vec.size()<<" "<<vec.capacity()<<endl;
    vec.push_back(4);
    cout<<vec.size()<<" "<<vec.capacity()<<endl; 
    vec.push_back(6);
     cout<<vec.size()<<" "<<vec.capacity()<<endl;
    vec.push_back(8);
     cout<<vec.size()<<" "<<vec.capacity()<<endl;
    vec.push_back(10);
     cout<<vec.size()<<" "<<vec.capacity()<<endl;
    vec.push_back(11);
    vec.push_back(55);//Add the element at the last index of the vector
    vec.pop_back(); // To delete the element from the last index
    vec.front(); // To get the first element from the array 
    vec.back(); // To get the last element from the array
    cout<<"The element is : "<<vec.at(vec.size()-1)<<endl;
    cout<<"size of vector is : "<<vec.size()<<endl;
    for(int i: vec){// for each loop
        cout<<i<<endl;
    }

}
