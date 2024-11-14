#include "iostream"
#include "vector"

using namespace std;
int main()
{
    vector<int> a = {1,2,3,4,5};
    std::cout<<"Hell Yes"<<std::endl;
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    a.push_back(9);
    a.pop_back();
    for(int i : a){
        cout<< i << endl;
    }
    return 0;
}