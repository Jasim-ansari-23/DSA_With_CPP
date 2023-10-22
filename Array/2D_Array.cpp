//Print an 2D Array using function - printing column wise

#include<iostream>
#include<vector>

using namespace std;

void print2DArray(int arr[3][4], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<< arr[i][j] <<" ";
        }
        cout<< endl;
    }
}
int main()
{
    int arr[3][4] = {
        {7,2,9,2},
        {9,4,6,5},
        {2,1,8,8}
    };
    int row = 3,col = 4;
    print2DArray(arr,row,col);
    return 0;
}

//Print an 2D Array using function - printing row wise

#include<iostream>
#include<vector>

using namespace std;

void print2DArray(int arr[3][4], int row, int col){
    for(int i = 0; i<col; i++){
        for(int j = 0; j<row; j++){
            cout<< arr[j][i] <<" ";
        }
        cout<< endl;
    }
}
int main()
{
    int arr[3][4] = {
        {7,2,9,2},
        {9,4,6,5},
        {2,1,8,8}
    };
    int row = 3,col = 4;
    print2DArray(arr,row,col);
    return 0;
}

//Taking input and printing

#include<iostream>

using namespace std;

int main()
{
    int arr[3][4], row = 3, col = 4, i, j;
    for(i = 0; i<row; i++){
        for(j = 0; j<col; j++){
            cout<< "Enter the number of Row at "<< i<< " & Column at "<< j << endl;
            cin>> arr[i][j];
        }
    }
    for(i = 0; i<row; i++){
        for(j = 0; j<col; j++){
            cout<< arr[i][j];
        }
    }
    return 0;
}

//Linear search in 2D array

#include<iostream>

using namespace std;

bool foundTarget(int arr[3][4], int row, int col, int target){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][4] = {
        {7,2,9,2},
        {9,4,6,5},
        {2,1,0,0}
    };
    int row = 3, col = 4, target = 9;
    cout<< "Target found or not: "<< foundTarget(arr, row, col, target) << endl;
    return 0;
}

//Another code 

#include<bits/stdc++.h>
using namespace std;

bool Printing_2D_Array(int arr[4][5], int row, int col, int target){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target){
                cout << "Target (" << target << ") found at row index (" << i << ") & Column index (" << j << ")" << endl;
                return true;
            }
        }
    }
    cout<< "Not found";
    return false;
}

int main()
{
    int arr[4][5] = {
        {10,20,30,40,50},
        {60,70,80,90,100},
        {110,120,130,140,150},
        {160,170,180,190,200}
    };
    int row = 4, col = 5, target = 90;
    Printing_2D_Array(arr, row, col, target);
    return 0;
}

//Maximum number and Minimum number inside the array

#include<iostream>
#include<limits.h>

using namespace std;

void findMax(int arr[3][3], int row, int col){
    int ansMax = INT_MIN, ansMIN = INT_MAX;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j]<ansMIN){
                ansMIN = arr[i][j];
            }
            else if(arr[i][j]>ansMax){
                ansMax = arr[i][j];
            }
        }
    }
    cout<< "Minimum number inside the array is: "<< ansMIN << endl;
    cout<< "Maximum number inside the array is: "<< ansMax << endl;
}
int main()
{
    int arr[3][3] = {
        {74,88,99},
        {66,55,44},
        {33,22,11}
    };
    int row = 3, col = 3;
    findMax(arr,row,col);
    return 0;
}

//Sum of all elements

#include<iostream>
#include<limits.h>

using namespace std;

void sumOf2D(int arr[3][3], int row, int col){
    int sum = 0;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            sum = sum + arr[i][j];
        }
    }
    cout<< "The sum of all array elements: "<< sum<< endl;
}
int main()
{
    int arr[3][3] = {
        {74,88,99},
        {66,55,44},
        {33,22,11}
    };
    int row = 3, col = 3;
    sumOf2D(arr, col, row);
    return 0;
}

//Sum of the array element diagrammatically

#include<iostream>
#include<limits.h>

using namespace std;

void sumOf2D(int arr[3][3], int row, int col){
    int sum = 0;
    for(int i = 0; i<row; i++){
        sum = sum + arr[i][i];
    }
    cout<< "The sum of all array elements: "<< sum<< endl;
}
int main()
{
    int arr[3][3] = {
        {74,88,99},
        {66,55,44},
        {33,22,11}
    };
    int row = 3, col = 3;
    sumOf2D(arr, col, row);
    return 0;
}

//transpose an array

#include <iostream>

using namespace std;

void transpose(int originalArray[][3], int transposedArray[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposedArray[j][i] = originalArray[i][j];
        }
    }
}
int main() {
    int originalArray[3][3] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};

    int transposedArray[3][3], cols = 3, rows = 3; 
    
    transpose(originalArray, transposedArray, rows, cols);
    cout << "Transposed Array:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposedArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//