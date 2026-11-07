//search for a element
#include<iostream>
using namespace std;

int search(int arr[], int n, int s)
{
  for(int i = 0; i < n; i++)
    {
        if(arr[i] == s)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[5] = {12, 34, 45, 67, 89};
    int s;
    cout << "Enter element to search: ";
    cin >> s;
    int result = search(arr, 5, s);
    if(result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}
