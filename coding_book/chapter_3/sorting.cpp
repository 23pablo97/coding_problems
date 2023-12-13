#include <bits/stdc++.h>

using namespace std;

int print_vector(vector<int> array_to_print){
    for (unsigned int i = 0; i < array_to_print.size(); i++){
        cout << array_to_print[i] << " ";
    }
    cout << "\n";

    return 0;
}

int print_array(int array_to_print[]){
    for (unsigned int i = 0; i < size_t(array_to_print); i++){
        cout << array_to_print[i] << " ";
    }
    cout << "\n";

    return 0;
}

int main(){
    vector<int> v = {4,2,5,3,5,8,3};
    print_vector(v);
    
    sort(v.begin(),v.end());
    print_vector(v);

    cout << endl;

    int n = 7;
    int a[] = {4,2,5,3,5,8,3};

    print_array(a);
    sort(a,a+n);
}