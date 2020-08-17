#include <vector>
#include <iostream>

using namespace std;


int main() {
    int n, q, k, var;
    cin>>n>>q;
    vector<int> var_array[n];
    for (int i=0;i<n;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>var;
            var_array[i].push_back(var);
        }
    }
    
    int index, b;
    for(int w=0;w<q;w++){
        cin>>index>>b;
        cout<<var_array[index][b]<<endl;
    }
    return 0;
}
