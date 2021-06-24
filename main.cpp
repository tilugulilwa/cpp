#include <iostream>
using namespace std;
/*
 * @author Frank Tilugulilwa
 * 
 * This program creates a pyramid built using a string entered
 * Very interesting one
 * 
*/

int main()
{
    string str;
    cout << "Enter a string to build a pyramid : " << endl;
    cin >> str;
    cout << endl;
    
    int depth {0}; 
    string line_template = {}; 
    
    depth = str.length(); // capture size of the string
    
    int width = (depth * 2) -1; // get the width or maximum size of the lines
    
    int mid = depth - 1; // find mid index (symmetry)
    
    int i = {};
    
    for( i = 0; i < width; i++ ){
        line_template = line_template + " "; // loop to create a line template (blank line) with spaces 
                                            // you can change instead of empty string put underscore _
    }
    
    string line = {};
    
    int mid_to_left = {0}; // index to the left of the pyramid
    
    int mid_to_right = {0};// index to the right of the pyramid
    
    for ( i = 0; i < depth; i++){
        line = line_template;
        for (int j = 0; j <= i; j++){
            line[mid] = str[j];
            mid_to_left = mid -1;
            mid_to_right = mid + 1;
            if (j >0){
                for(int k = j-1; k >= 0; k--){
                    line[mid_to_left] = str[k];
                    mid_to_left--;
                }
                for(int k = j-1; k >= 0; k--){
                    line[mid_to_right] = str[k];
                    mid_to_right++;
                }
            }
        }
        cout << line << endl; 
    }   
    cout << endl;
	return 0;
}
