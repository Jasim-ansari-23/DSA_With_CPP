// Array first code
// Index Array elements wheresoever it is

#include<iostream>

using namespace std;

int main()
{
    int num[] = {22, 33, 55, 56};
    cout<< num[1]; //Use num(n);
    return 0;
}

//Array's first code 

#include<iostream>

using namespace std;
int main()
{
    int num[] = {22, 33, 55, 56}, n = 4;
    for(int i = 0; i<n; i++){
        cout<< num[i]<< " ";
    }
    return 0;
}

//Taking input in an Array

#include<iostream>

using namespace std;
int main()
{
    int arr[100], n = 5, i;
    for(i = 0; i<n; i++){
        cout<< "Enter the value of Index "<< i << " : ";
        cin>> arr[i];
    }
    for(i = 0; i<n; i++){
        cout<< "You've entered the value of index of - "<< i << " is: "<< arr[i] << endl;
    }
    return 0;
}

//Double up the size of an Array

#include<iostream>

using namespace std;
int main()
{
    int arr[10], i, n=3;
    for(i = 0; i<n; i++){
        cout<< "Enter the value of an array: ";
        cin>> arr[i];
    }
    for(i = 0; i<n; i++){
        arr[i] = 2*arr[i];
        cout<< "The array converted into double value: "<< arr[i] << endl;
    }
    return 0;
}

//Print the all array sum

#include<iostream>

using namespace std;
int main()
{
    int arr[10], i, n=5, sum = 0;
    for(i = 0; i<n; i++){
        cout<< "Enter the array size: ";
        cin>> arr[i];
    }
    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout<< "The sum of all array elements: "<< sum;
    return 0;
}

//Linear search - found the elements from an array

#include<iostream>

using namespace std;
int main()
{
    int arr[] = {6, 7, 8, 9, 10}, i, n=5, target = 10;
    bool flag = 0;
    for(i = 0; i<n; i++){
        if(arr[i]==target){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        cout<< "The target you're looking for: "<< target << " is found" << endl;
    }
    else{
        cout<< "The target you're looking for isn't found: " << endl;
    }
    return 0;
}

//Function in an array
//Print an array using an function

#include<iostream>

using namespace std;
void printarray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
}
int main()
{
    int arr[] = {72,92,94,65,21}, size = 5;
    printarray(arr, size);
    return 0;
}

//Linear search using function and array

#include<iostream>

using namespace std;
bool linear_Search(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {72,92,94,65,21}, size = 5, target;

    cout<< "Enter the number you want to find: ";
    cin>> target;
    bool ans = linear_Search(arr, size, target);

    if(ans==1){
        cout<< "Target found";
    }
    else{
        cout<< "Target not found";
    }
    return 0;
}

//Print how many times 0 & 1 found in an array

#include<iostream>

using namespace std;
void count_Zero_One(int arr[], int size){
    int zeroCount = 0, oneCount = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1){
            oneCount++;
        }
    }
    cout<< "Zero found: " << zeroCount<< endl;
    cout<< "One found: "<< oneCount << endl;
}
int main()
{
    int arr[] = {1,0,0,1,0,1,1,0,1,0,1,0,1,0,1}, size = 15;
    count_Zero_One(arr, size);
    return 0;
}

//Find minimum number in an array 

#include<iostream>
#include<limits.h>

using namespace std;

void min_max(int arr[], int size){
    int ansmin = INT_MAX;
    int ansmax = INT_MIN;
    for(int i = 0; i<size; i++){
        if(arr[i]<ansmin){
            ansmin = arr[i];
        }
        else if(arr[i]>ansmax){
            ansmax = arr[i];
        }
    }
    cout<< "Maximum number in array: "<< ansmax << endl;
    cout<< "Minimum number in array: "<< ansmin << endl;
}

int main()
{
    int arr[] = {55, 66, 88, 78, 99}, size = 5;
    min_max(arr, size);
    return 0;
}

//reverse an array

#include<iostream>

using namespace std;

void reverse(int arr[], int size){
    int left = 0, right = size-1; 
    while(left<=right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for(int i = 0; i<size; i++){
        cout<< arr[i] << " ";
    }
}
int main()
{
    int arr[] = {20,30,40,50,60}, size = 5;
    reverse(arr, size);
    return 0;
}

//Extream print in array 

#include<iostream>

using namespace std;

void extream_Array(int arr[], int size){
    int left = 0, right = size-1; 
    while(left<=right){
        if(left==right){
            cout<< arr[left]<< endl;
        }
        else{
            cout<< arr[left] << endl;
            cout<< arr[right] << endl;
        }
        left++;
        right--;
    }
}
int main()
{
    int arr[] = {20,30,40,50,60}, size = 5;
    extream_Array(arr, size);
    return 0;
}

//Find unique elements using array

#include<iostream>

using namespace std;

int find_same_value(int arr[], int num){
    int ans = 0;
    for(int i = 0; i<num; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {2, 5, 5, 8, 8}, num = 5;
    int ans = find_same_value(arr, num);
    cout<< "Final answer is: "<< ans << endl;
    return 0;
}

//shift an array

#include<iostream>

using namespace std;

void shiftArray(int arr[], int num){
    int temp = arr[num-1], i;
    for(i = num-1; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}
int main()
{
    int arr[] = {10,20,30,40,50,60}, num = 6;
    shiftArray(arr, num);
    for(int i = 0; i<num; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}

//Triverse an array - side negative number into right and positive number into left side

#include<iostream>

using namespace std;

void Trivarse_Negative(int arr[], int num){
    int j = 0;
    for(int index = 0; index<num; index++){
        if(arr[index]<0){
           swap(arr[index], arr[j]);
           j++;
        }
    }
}
int main()
{
    int arr[] = {10,-14,23,-5,-20,11,14,-55}, num = 8, i;
    Trivarse_Negative(arr, num);
    for(i = 0; i<num; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}

//Through user's input

#include<iostream>

using namespace std;

void Trivarse_Negative(int arr[], int num){
    int j = 0;
    for(int index = 0; index<num; index++){
        if(arr[index]<0){
           swap(arr[index], arr[j]);
           j++;
        }
    }
}
int main()
{
    int arr[8], num = 8, i;
    for(i = 0; i<num; i++){
        cout<< "Enter the array to trivers: ";
        cin>> arr[i];
    }
    Trivarse_Negative(arr, num);
    for(i = 0; i<num; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}

//Find three maximum elements 

#include<bits/stdc++.h>
using namespace std;

void Three_largest(int arr[], int size){
    int first, second, third, i;
    third = second = first = INT_MIN;
    
    if(size < 3){
        cout<< "Invalid array";
    }

    for(i = 0; i<size; i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second){
            third = second;
            second = arr[i];
        }
        else if(arr[i]>third){
            third = arr[i];
        }
    }
    cout<< "Three elements inside the array: "<< first <<" , "<< second << " , " << third << endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8}, size = sizeof(arr)/sizeof(arr[0]), first, second, third;
    Three_largest(arr, size);
    return 0;
}

//sort 0 and 1
#include <iostream>
using namespace std;

void sort_ones(int arr[], int size) {
    int zero = 0, one = size - 1;
    while (zero <= one) {
        if (arr[zero] == 0) {
            zero++;
        }
        else if (arr[one] == 1) {
            one--;
        }
        else {
            swap(arr[zero], arr[one]);
            zero++;
            one--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0};
    int size = 13;
    sort_ones(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

//