#include <bits/stdc++.h>
using namespace std;

// void reverse(int arr[], int first, int last)
// {

//     int temp;

//     if (first >= last)
//     {
//         return;
//     }

//     temp = arr[first];
//     arr[first] = arr[last];
//     arr[last] = temp;

//     reverse(arr, first + 1, last - 1);
// }

// void print(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

int main()
{
    // int arr[5] = {
    //     10, 20, 30, 40, 50};

    // reverse(arr, 0, 4);
    // print(arr, 5);

    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);


    for (auto it:vec)
    {
        cout<<it<<endl;
    }
    
    reverse(vec.begin(), vec.end());

    for (auto it : vec)
    {
        cout << it << " ";
    }

    return 0;
}
