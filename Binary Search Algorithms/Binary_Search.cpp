//Binary Search First code

#include<iostream>

using namespace std;

int Binary_Search(int arr[], int target, int size) {
    int start = 0, end = size - 1, middle;

    while (start <= end) {
        middle = (start + end) / 2;

        if (arr[middle] == target) {
            return middle;
        }
        else if (target < arr[middle]) {
            end = middle - 1;
        }
        else {
            start = middle + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int target = 100, size = 10;
    int targetFound = Binary_Search(arr, target, size);

    if (targetFound == -1) {
        cout << "The element isn't available." << endl;
    }
    else {
        cout << "The element is available at index: " << targetFound << endl;
    }

    return 0;
}

//Find fist occurrence in an array using binary search 

#include<iostream>

using namespace std;

int Find_First_Occurrence(int arr[], int target, int size) {
    int start = 0, end = size - 1, middle = (start+end)/2, ans = -1;

    while (start <= end) {

        if (arr[middle] == target) {
            ans =  middle;
            end = middle - 1;
        }
        else if (target > arr[middle]) {
            start = middle + 1;
        }
        else if(target < arr[middle]){
            end = middle - 1;
        }
        middle = (start+end)/2;
    }
    return ans;
}

int main() {
    int arr[] = {10, 30, 30, 30, 50, 60, 30, 80, 90, 100};
    int target = 30, size = 10;
    int targetFound = Find_First_Occurrence(arr, target, size);

    if (targetFound == -1) {
        cout << "The element isn't available." << endl;
    }
    else {
        cout << "The element is available at index: " << targetFound << endl;
    }

    return 0;
}

//Find last occurrence 

#include<iostream>

using namespace std;

int Find_Last_Occurrence(int arr[], int target, int size) {
    int start = 0, end = size - 1, middle = (start+end)/2, ans = -1;

    while (start <= end) {

        if (arr[middle] == target) {
            ans =  middle;
            start = middle + 1;
        }
        else if (target > arr[middle]) {
            start = middle + 1;
        }
        else if(target < arr[middle]){
            end = middle - 1;
        }
        middle = (start+end)/2;
    }
    return ans;
}

int main() {
    int arr[] = {10, 30, 30, 30, 30, 30, 30, 80, 90, 100};
    int target = 30, size = 10;
    int targetFound = Find_Last_Occurrence(arr, target, size);

    if (targetFound == -1) {
        cout << "The element isn't available." << endl;
    }
    else {
        cout << "The element is available at index: " << targetFound << endl;
    }

    return 0;
}

//Find total occurrence 

#include<iostream>
using namespace std;

int Find_First_Occurrence(int arr[], int target, int size) {
    int start = 0, end = size - 1, middle = (start+end)/2, ans = -1;

    while (start <= end) {
        if (arr[middle] == target) {
            ans =  middle;
            end = middle - 1;
        }
        else if (target > arr[middle]) {
            start = middle + 1;
        }
        else if(target < arr[middle]){
            end = middle - 1;
        }
        middle = (start+end)/2;
    }
    return ans;
}

int Find_Last_Occurrence(int arr[], int target, int size) {
    int start = 0, end = size - 1, middle = (start+end)/2, ans = -1;

    while (start <= end) {

        if (arr[middle] == target) {
            ans =  middle;
            start = middle + 1;
        }
        else if (target > arr[middle]) {
            start = middle + 1;
        }
        else if(target < arr[middle]){
            end = middle - 1;
        }
        middle = (start+end)/2;
    }
    return ans;
}

int Find_Total_Occurrence(int arr[], int target, int size){
    int Found_First_Occ = Find_First_Occurrence(arr, target, size);
    int Found_Last_Occ = Find_Last_Occurrence(arr, target, size);
    int Total_Occurrence = Found_Last_Occ - Found_First_Occ + 1; 
    return Total_Occurrence;
}

int main() {
    int arr[] = {10, 30, 30, 30, 30, 60, 40, 80, 90, 100};
    int target = 30, size = 10;
    int Found_First_Occ = Find_First_Occurrence(arr, target, size);
    int Found_Last_Occ = Find_Last_Occurrence(arr, target, size);
    int Total_Occurrence = Find_Total_Occurrence(arr, target, size);
    cout<< "Total Occurrence found: "<< Total_Occurrence <<" Times"<< endl;
    return 0;
}

//With First and last occurrence element and Total occurrence 

#include<iostream>
using namespace std;

int Find_First_Occurrence(int arr[], int target, int size) {
    int start = 0, end = size - 1, middle = (start+end)/2, ans = -1;

    while (start <= end) {
        if (arr[middle] == target) {
            ans =  middle;
            end = middle - 1;
        }
        else if (target > arr[middle]) {
            start = middle + 1;
        }
        else if(target < arr[middle]){
            end = middle - 1;
        }
        middle = (start+end)/2;
    }
    return ans;
}

int Find_Last_Occurrence(int arr[], int target, int size) {
    int start = 0, end = size - 1, middle = (start+end)/2, ans = -1;

    while (start <= end) {

        if (arr[middle] == target) {
            ans =  middle;
            start = middle + 1;
        }
        else if (target > arr[middle]) {
            start = middle + 1;
        }
        else if(target < arr[middle]){
            end = middle - 1;
        }
        middle = (start+end)/2;
    }
    return ans;
}

int Find_Total_Occurrence(int arr[], int target, int size){
    int Found_First_Occ = Find_First_Occurrence(arr, target, size);
    int Found_Last_Occ = Find_Last_Occurrence(arr, target, size);
    int Total_Occurrence = Found_Last_Occ - Found_First_Occ + 1; 
    return Total_Occurrence;
}

int main() {
    int arr[] = {10, 30, 30, 30, 30, 60, 40, 80, 90, 100};
    int target = 30, size = 10;

    int Found_First_Occ = Find_First_Occurrence(arr, target, size);

    if (Found_First_Occ == -1) {
        cout << "The element isn't available." << endl;
    }
    else {
        cout << "The first occurrence element is available at index: " << Found_First_Occ << endl;
    }

    int Found_Last_Occ = Find_Last_Occurrence(arr, target, size);

    if (Found_Last_Occ == -1) {
        cout << "The element isn't available." << endl;
    }
    else {
        cout << "The last occurrence element is available at index: " << Found_Last_Occ << endl;
    }

    int Total_Occurrence = Find_Total_Occurrence(arr, target, size);
    cout<< "Total Occurrence found: "<< Total_Occurrence <<" Times"<< endl;

    return 0;
}

//