# 7-Segment Display
This code provides a function sevenSegment(string n, int b) that takes two arguments, a string n representing a number to be displayed on a 7-segment display and an integer b representing the width of each segment. The function outputs the number as a 7-segment display, using the specified width for each segment.

## Requirements
The code requires a C++ compiler.

## Usage
To use the sevenSegment function, include the `iostream` and `string` libraries and call the function with a string representing the number to be displayed and an integer.
## Functionality
The sevenSegment function uses nested loops to iterate over the rows and columns of the display. For each position in the display, the function checks which segment(s) should be drawn for the current digit, and outputs the appropriate character (either a space, a vertical bar, or a horizontal bar) to the console.

The function can display the digits 0-9 and the letters A-Z, as well as a few other characters. It does not handle negative numbers or non-numeric input.
### here is a sample for this code       
print "hello world"
````
           ━ ━ ━
 ┃       ┃       ┃       ┃                       ┃     ┃                 ┃             ┃
 ┃       ┃       ┃       ┃                       ┃     ┃                 ┃             ┃
  ━ ━ ━   ━ ━ ━                   ━ ━ ━           ━ ━ ━   ━ ━ ━   ━ ━ ━           ━ ━ ━
 ┃     ┃ ┃       ┃       ┃       ┃     ┃                 ┃     ┃ ┃       ┃       ┃     ┃
 ┃     ┃ ┃       ┃       ┃       ┃     ┃                 ┃     ┃ ┃       ┃       ┃     ┃
          ━ ━ ━   ━ ━ ━   ━ ━ ━   ━ ━ ━           ━ ━ ━   ━ ━ ━           ━ ━ ━   ━ ━ ━
