#include <bits/stdc++.h>

using namespace std;

int print_vector(vector<int> array_to_print){
    for (unsigned int i = 0; i < array_to_print.size(); i++){
        cout << array_to_print[i] << " ";
    }
    cout << "\n";

    return 0;
}

int main(){
    // array to find max sum in subarray
    int n = 10;
    vector<int> array = {-1, 2, 4, -3, 5, 2, -5, 2};

    print_vector(array);
    
    int best = 0, sum = 0;

    for (int k = 0; k < n; k++){
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    }

    cout << best << "\n";
}