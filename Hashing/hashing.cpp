#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    pair <string,int> p=make_pair("hello",3);
    m.insert(p);
    pair<string,int>q("love", 2);
    m.insert(q);
    m["hello"]=3;
    cout<<m["hello"]<<endl;
    cout<<m["love"]<<endl;
    cout<<m["world"]<<endl;
    cout<<m.count("love")<<endl;
    cout<<m.count("no")<<endl;
    cout<<m.size()<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    unordered_map<string,int>::iterator it=m.begin();
    while (it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    


}