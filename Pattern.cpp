//For loop
//printing pattern using For loop

//Rectangle pattern 

#include<bits/stdc++.h>

using namespace std;
int main()
{
    for(int row = 1; row <= 3; row+=1){
        for(int col = 1; col <= 5; col+=1){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}

//Hollow Rectangle pattern

#include<bits/stdc++.h>

using namespace std;
int main()
{
    for(int row = 0; row<3; row+=1){
        // First row and last row -> 5 star
        if(row==0 || row==2){
            for(int col = 0; col<5; col++){
                cout<< "*";
            }
        }
        else{
            // Remaining middle rows
            // first star
            cout<<"*";
            // spaces
            for(int i = 0; i<3; i+=1){
                cout<<" ";
            }
            // last start
            cout<< "*";
        }
        //new line
        cout<< endl;
    }
    return 0;
}

//Hollow Rectangle pattern
********
*      *
*      *
********

#include<bits/stdc++.h>

using namespace std;
int main()
{
    for(int row = 0; row < 6; row += 1){
        if(row == 0 || row == 5){
            for(int col = 0; col < 5; col += 1){
                cout << "*";
            }
        }
        else{
            cout << "*";
            for(int space = 0; space < 3; space++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//By user's input 

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int row_num, column_num, row, column, space;
    cout<< "Enter the row number: ";
    cin>> row_num;
    cout<< "Enter the column number: ";
    cin>> column_num;
    for(row = 0; row < row_num; row+=1){
        if(row == 0 || row == row_num - 1){
            for(column = 0; column < column_num; column++){
                cout<< "*";
            }
        }
        else{
            cout<< "*";
            for(space = 0; space < column_num - 2; space+=1){
                cout<< " ";
            }
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}

//Numeric hollow pattern
1234
1  4
1  4
1234

#include <iostream>

using namespace std;
int main()
{
    int col, row, num, space;
    cout << "Enter the number: ";
    cin >> num;
    for(row = 0; row<num; ++row){
        for (col = 0; col < num; ++col)
        {
            if (row == 0 || row == num-1 || col == 0 || col == num-1)
            {
                cout << col + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

//Half pyramid
*
**
***
****
*****
******

#include<bits/stdc++.h>

using namespace std;
int main()
{
    for(int row = 0; row<5; row+=1){
        for(int col = 0; col<row+1; col+=1){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}

//Inverted Half Pyramid
******
*****
****
***
**
*

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout << "Enter the row number" << endl;
    cin >> n;
    for (int row = 0; row < n; row += 1)
    {
        for (int coll = 0; coll < n - row; coll += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//numeric half pyramid

#include <bits/stdc++.h>

using namespace std;
int main()
{
    for (int row = 0; row < 6; row += 1)
    {
        for (int coll = 0; coll < row + 1; coll += 1)
        {
            cout << coll+1;
        }
        cout << endl;
    }
    return 0;
}

Characterize half pyramid
A
AB
ABC
ABCD
ABCDE
ABCDEF

#include<iostream>

using namespace std;

int main()
{
    int row, col;
    for(row = 0; row < 6; row++){
        for(col = 0; col<row+1; col++){
            char ch = col + 1 + 'A' - 1;
            cout<< ch;
        }
        cout<< endl;
    }
    return 0;
}

Characterize half pyramid in revers order
A
ABA
ABCB
ABCDCA
ABCDEDB
ABCDEFECA

#include<iostream>

using namespace std;

int main()
{
    int row, col;
    char ch;
    for(row = 0; row < 6; row++){
        for(col = 0; col<row+1; col++){
            ch = col + 1 + 'A' - 1;
            cout<< ch;
        }
        for(char alpha = ch; alpha>'A'; --alpha){
            alpha = alpha - 1;
            cout<< alpha;
        }
        cout<< endl;
    }
    return 0;
}

//inverted half pyramid 

#include <bits/stdc++.h>

using namespace std;
int main()
{
    for (int row = 0; row < 6; row += 1)
    {
        for (int coll = 0; coll < 6 - row; coll += 1)
        {
            cout << coll+1;
        }
        cout << endl;
    }
    return 0;
}

//Full pyramid
/**/ * 
    * *
   * * *
  * * * *
 * * * * *
* * * * * * /**/

#include<iostream>

using namespace std;
int main()
{
    for(int row = 0; row<6; row+=1){
        for(int col = 0; col<6-row-1; col+=1){
            cout<<" ";
        }
        for(int col = 0; col<row+1; col+=1){
            cout<<"* ";
        }
        cout<< endl;
    }
    return 0;
}

//Full pyramid by user's input

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, row, column, star;
    cout<< "Enter the row number to print full pyramid: ";
    cin>> num;

    // For spaces
    for(row = 0; row < num; row+=1){
        for(column = 0; column < num - row - 1; column+=1){
            cout<< " ";
        }
    // For star
        for(star = 0; star < row + 1; star+=1){
            cout<< "* ";
        }
        cout<< endl;
    }
    return 0;
}

//Print inverted full pyramid with two methods by users input

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, row, space, star;
    cout << "Enter the row number to print inverted full pyramid: ";
    cin >> num;

    // For spaces
    for(row = 0; row < num; row+=1){
        for(space = 0; space < row; space+=1){
            cout<< " ";
        }
        
        // For Star
        for(star = 0; star < num - row; star+=1){
            cout<< "* ";
        }
        cout<< endl;
    }
    return 0;
}

//2nd methods 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, row, space, star;
    cout << "Enter the row number to print inverted full pyramid: ";
    cin >> num;

    // For spaces
    for(row = num; row > 0; row--){
        for(space = 0; space < num - row; space++){
            cout<< " ";
        }

    //For star
       for(star = 0; star < row; star++){
           cout<< "* ";
        }
        cout<< endl;
    }

    return 0;
}

//Print numeric full pyramid

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int row = 0; row<6; row+=1){
        for(int col = 0; col<6-row-1; col+=1){
            cout<<" ";
        }
        for(int col = 0; col<row+1; col+=1){
            cout<< col + 1 << " ";
        }
        cout<< endl;
    }
    return 0;
}

//Printing inverted numeric full pyramid

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int row = 0; row<6; row+=1){
        for(int col = 0; col<row; col+=1){
            cout<<" ";
        }
        for(int col = 0; col<6 - row; col+=1){
            cout<< col + 1 << " ";
        }
        cout<< endl;
    }
    return 0;
}

//Printing Solid Diamond Pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, space, star;
    for(row = 0; row < 6; row+=1){
        for(space = 0; space < 6 - row - 1; space+=1){
            cout<< " ";
        }
        for(star = 0; star < row+1; star+=1){
            cout<< "* ";
        }
        cout<< endl;
    }
    for(row = 0; row < 6; row+=1){
        for(space = 0; space < row; space+=1){
            cout<< " ";
        }
        for(star = 0; star < 6 - row; star+=1){
            cout<< "* ";
        }
        cout<< endl;
    }
    return 0;
}

//Full Hollow Diamond pattern by love babber
     *
    * *
   *   *
  *     *
 *       *
*         *
*         *
 *       *
  *     *
   *   *
    * *
     *

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int row, space, star;
    for(row = 0; row < 6; row+=1){
        for(space = 0; space < 6-row-1; space+=1){
            cout<< " ";
        }
        for(star = 0; star < 2*row+1; star+=1){
            if(star == 0 || star == 2*row){
                cout<< "*";
            }
            else{
                cout<< " ";
            }
        }
        cout<< endl;
    }
    for(row = 0; row < 6; row+=1){
        for(space = 0; space < row; space+=1){
            cout<< " ";
        }
        for(star = 0; star < 2*6-2*row-1; star+=1){
            if(star == 0 || star == 2*6-2*row-2){
                cout<< "*";
            }
            else{
                cout<< " ";
            }
        }
        cout<< endl;
    }
    return 0;
}

//by others

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, space, star;
    for(row = 0; row < 6; row++){
        for(space = 0; space < 6 - row - 1; space++){
            cout<< " ";
        }
        for(star = 0; star < 2*row+1; star++){
            if (star == 0 || star == 2 * row) {
                cout << "*";
            }
            else{
                cout<< " ";
            }
        }
        cout<< endl;
    }
    for (row = 6 - 1; row >= 0; row--) {
        for (space = 0; space < 6 - row - 1; space++) {
            cout << " ";
        }
        for (star = 0; star < 2 * row + 1; star++) {
            if (star == 0 || star == 2 * row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

//Flipped solid pyramid by love babber
****** ******
*****   *****
****     ****
***       ***
**         **
*           *
*           *
**         **
***       ***
****     ****
*****   *****
****** ******

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int row, space, star, col;
    for(row = 0; row < 6; row+=1){
        for(col = 0; col < 6 - row; col+=1){
            cout<< "*";
        }
        for(space = 0; space < 2*row+1; space+=1){
            cout<< " ";
        }
        for(col = 0; col < 6 - row; col+=1){
            cout<< "*";
        }
        cout<< endl;
    }
    for(row = 0; row < 6; row+=1){
        for(col = 0; col < row+1; col+=1){
            cout<< "*";
        }
        for(space = 0; space < 2*6-2*row-1; space+=1){
            cout<< " ";
        }
        for(col = 0; col < row+1; col+=1){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}

//by others

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int row, space, star, col;
    for(row = 0; row < 6; row+=1){
        for(col = 0; col < 6 - row; col+=1){
            cout<< "*";
        }
        for(space = 0; space < 2*row+1; space+=1){
            cout<< " ";
        }
        for(col = 0; col < 6 - row; col+=1){
            cout<< "*";
        }
        cout<< endl;
    }
    for(row = 6; row > 0; row--){
        for(col = 0; col < 6 - row; col+=1){
            cout<< "*";
        }
        for(space = 0; space < 2*row+1; space+=1){
            cout<< " ";
        }
        for(col = 0; col < 6 - row; col+=1){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}

//Butterfly pattern

*           *
**         **
***       ***
****     ****
*****   *****
****** ******
****** ******
*****   *****
****     ****
***       ***
**         **
*           *

#include<bits/stdc++.h>

using namespace std;
int main(){
    int row, space, star, col;
    for(row = 0; row < 6; row+=1){
        for(col = 0; col < row+1; col+=1){
            cout<< "*";
        }
        for(space = 0; space < 2*6-2*row-1; space+=1){
            cout<< " ";
        }
        for(col = 0; col < row+1; col+=1){
            cout<< "*";
        }
        cout<< endl;
    }
    for(row = 0; row < 6; row+=1){
        for(col = 0; col < 6 - row; col+=1){
            cout<< "*";
        }
        for(space = 0; space < 2*row+1; space+=1){
            cout<< " ";
        }
        for(col = 0; col < 6 - row; col+=1){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}

//fancy pattern 
1
22
333
4444
55555
666666

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int row = 0; row < 6; row+=1){
        for(int col = 0; col < row+1; col+=1){
            cout<< row+1;
        }
        cout<< endl;
    }
    return 0;
}

//Full fancy pattern
1
22
333
4444
55555
666666
111111
22222
3333
444
55
6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int row = 0; row < 6; row+=1){
        for(int col = 0; col < row+1; col+=1){
            cout<< row+1;
        }
        cout<< endl;
    }
    for(int row = 0; row < 6; row+=1){
        for(int col = 0; col < 6-row; col+=1){
            cout<< row+1;
        }
        cout<< endl;
    }
    return 0;
}

//Full fancy pattern with * on last
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
6*6*6*6*6*6
11*1*1*1*1*
2*22*2*2*
3*3*33*
4*4*4*
5*5*
6*

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int row = 0; row < 6; row+=1){
        for(int col = 0; col < row+1; col+=1){
            cout<< row+1;
            if(col != row){
                cout<< "*";
            }
        }
        cout<< endl;
    }
    for(int row = 0; row < 6; row+=1){
        for(int col = 0; col < 6-row; col+=1){
            cout<< row+1;
            if(col != row){
                cout<< "*";
            }
        }
        cout<< endl;
    }
    return 0;
}

// Numeric pelindrome
1
121
12321
1234321
123454321
12345654321

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    char ch = 'A';
    for(row = 0; row < 6; row+=1){
        for(col = 0; col < row+1; col+=1){
            cout<< col+1;
        }
     // for(col = row; col >= 1; col-=1)
        for(col = col-1; col >= 1; col-=1){
            cout<< col;
        }
        cout<< endl;
    }
    return 0;
}

//Numeric pyramid pelindrome

//

//Alphabet pelindrome 
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
ABCDEFEDCBA

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, ans;
    char ch;
    for(row = 0; row < 6; row+=1){
        for(col = 0; col < row+1; col+=1){
            ans = col+1;
            ch = ans + 'A' -1;
            cout<< ch;
        }
     // for(col = row; col >= 1; col-=1)
        for(col = col-1; col >= 1; col-=1){
            ans = col;
            ch = ans + 'A' -1;
            cout<< ch;
        }
        cout<< endl;
    }
    return 0;
}

// Another Alphabet pelindrome

     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
ABCDEFEDCBA

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, space, alpha;
    char ch = 'A';
    for(row = 0; row < 6; row++){
        for(space = 0; space < 6-row-1; space++){
            cout<< " ";
        }
        for(space = 0; space <= row; space++){
            cout<< ch++;
        }
        ch--;
        for(space = 0; space < row; space++){
            cout<< --ch;
        }
        cout<< endl;
    }
    return 0;
}

//Numeric pelindrome 

#include <iostream>

using namespace std;
int main() {
    int num = 5;
    int row, column, space;

    for (row = 1; row <= num; row++) {
        for (space = 1; space <= num - row; space++) {
            cout << "  ";
        }
        for (column = row; column <= 2 * row - 1; column++) {
            cout << column << " ";
        }
        for (column = 2 * row - 2; column >= row; column--) {
            cout << column << " ";
        }
        cout << endl;
    }
    return 0;
}

//Numeric Hollow pattern

#include<iostream>

using namespace std;
int main()
{
    int col, row, num;
    cout<< "Enter the value of num: ";
    cin>> num;
    for(row = 0; row<num; row++){
        for(col = 0; col<row+1; col++){
            if(col == 0 || col == row || row == num-1){
                cout<< col+1;
            }
            else{
                cout<< " ";
            }
        }
        cout<< endl;
    }
    return 0;
}

//Inverted numeric pattern

#include<iostream>

using namespace std;
int main()
{
    int col, row, num;
    cout<< "Enter the value of num: ";
    cin>> num;
    for(row = num; row>0; row--){
        for(col = 0; col<row+1; col++){
            if(col == 0 || col == row || row == num){
                cout<< col+1;
            }
            else{
                cout<< " ";
            }
        }
        cout<< endl;
    }
    return 0;
}

//HW Pattern
//Numeric Hollow half pyramid

#include<iostream>

using namespace std;

void numeric_pyramid(int num){
    int row, col, space;
    for(row = 0; row<num; row++){
        for(col = 0; col<row+1; col++){
            if(col==0 || col==row || row==num-1){
                cout<< col+1;
            }
            else{
                cout<< " ";
            }
        }
        cout<< endl;
    }
}

int main()
{
    int num;
    cout<< "Enter the number: ";
    cin>> num;
    numeric_pyramid(num);
    return 0;
}

//