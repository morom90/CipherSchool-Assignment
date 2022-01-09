#include <bits/stdc++.h>
using namespace std;


int solution(vector<int>& arr, int x)
{
    
    int closestSum = INT_MAX;

   
    for (int i = 0; i < arr.size() ; i++) 
    {
        for(int j =i + 1; j < arr.size(); j++)
        {
            for(int k =j + 1; k < arr.size(); k++)
            {
                
                if(abs(x - closestSum) > abs(x - (arr[i] + arr[j] + arr[k])))
                    closestSum = (arr[i] + arr[j] + arr[k]);
            } 
        }
    }
   
    return closestSum;
}


int main()
{
    vector<int> arr = { -1, 2, 1, -4 };
    int x = 1;
    cout << "Required sum = "<<solution(arr, x);

    return 0;
}