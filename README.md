01.Example: Personal Titles
Depending on age (decimal number and gender (m / f), print a personal title:
• “Mr.” – a man (gender “m”) – 16 or more years old.
• “Master” – a boy (gender “m”) under 16 years.
• “Ms.” – a woman (gender “f”) – 16 or more years old.
• “Miss” – a girl (gender “f”) under 16 years.
Sample Input and Output
Input Output Input Output Input Output Input Output 
12    Miss   17    Mr.    25    Ms.    13.5  Master
f            m            f            m

02.Example: Small Shop
A Bulgarian entrepreneur opens small shops in a few cities with different prices for the following
products:
product / city Sofia Plovdiv Varna 
coffee         0.50  0.40    0.45
water          0.80  0.70    0.70
beer           1.20  1.15    1.10
sweets         1.45  1.30    1.35
peanuts        1.60  1.50    1.55
Calculate the price by the given city (string), product (string) and quantity (decimal number).
Sample Input and Output
Input  Output Input   Output Input  Output Input   Output 
coffee 0.9    peanuts 1.5    beer   7.2    water   2.1
Varna         Plovdiv        Sofia         Plovdiv
2             1              6             3

03.Example: Point in a Rectangle
Checks whether point {x, y} is placed inside the rectangle {x1, y1} – {x2, y2}. The input data is read 
from the console and consists of 6 lines: the decimal numbers x1, y1, x2, y2, x and y (as it is guaranteed 
that x1 < x2 and y1 < y2).
Sample Input and Output
Input Output  Visualization
2     Inside  ![image](https://user-images.githubusercontent.com/7139995/236699500-0d2c82ac-f4b0-4c65-9256-00dd6b8f1232.png)
-3
12
3
8
-1
Solution
A point is internal for a given polygon, if the following four conditions are applied at the same time:
• The point is placed to the right from the left side of the rectangle.
• The point is placed to the left from the right side of the rectangle.
• The point is placed downwards from the upper side of the rectangle.
• The point is placed upwards from the down side of the rectangle

04.Example: Fruit or Vegetable
Let's check whether a given product is a fruit or a vegetable.
• The "fruits" are banana, apple, kiwi, cherry, lemon and grapes.
• The "vegetables" are tomato, cucumber, pepper and carrot.
• Everything else is "unknown".
Sample Input and Output
Input  Output Input  Output     Input Output
banana fruit  tomato vegetable  java  unknown

05.Example: Invalid Number
A given number is valid if it is in the range [100 … 200] or it is 0. Do a validation for an invalid number.
Sample Input and Output
Input Output  Input Output      Input Output
75    invalid 150   (no output) 220   invalid

06.Example: Point on a Rectangle Border
Write a program that checks whether a point {x, y} is placed onto 
any of the sides of a rectangle {x1, y1} – {x2, y2} (see the figure).
The input data is read from the console and consists of 6 lines: 
the decimal numbers x1, y1, x2, y2, x and y (as it is guaranteed 
that x1 < x2 and y1 < y2). Print "Border" (if the point lies on any 
of the sides) or "Inside / Outside" (in the opposite case).
Sample Input and Output
Input Output Input Output 
2     Border 2     Inside / Outside
-3          -3
12           12
3            3
12           8
-1          -1
![image](https://github.com/Sasho80/4.1.ComplexCondition/assets/7139995/4e22282a-839c-42d6-aa56-62ac119d7e5a)

07.Example: Fruit Shop
A fruit shop sells fruits during weekdays and during weekends different prices:
Fruit      Weekday price Weekend price 
banana     2.50          2.70
apple      1.20          1.25
orange     0.85          0.90
grapefruit 1.45          1.60
kiwi       2.70          3.00
pineapple  5.50          5.60
grapes     3.85          4.20

Write a program that reads from the console a fruit (banana / apple / …), a day of the week (Monday 
/ Tuesday / …) and a quantity (a decimal number) and calculates the price according to the prices from 
the tables above. The result has to be printed rounded up to 2 digits after the decimal point. Print
“error” if it is an invalid day of the week or an invalid name of a fruit.

Sample Input and Output
Input  Output Input  Output Input   Output Input Output 
orange 2.70   kiwi   6.75   grapes  2.10   tomato error
Sunday        Monday        Saturday       Monday
3             2.5           0.5            0.5

08.Example: Trade Fees
A company is giving the following commissions to its traders according to the city, in which they are 
working and the volume of sales s:
City    0 <= s <= 500 500 < s <= 1000  1000 < s <= 10000   s > 10000 
Sofia   5%            7%               8%                  12%
Varna   4.5%          7.5%             10%                 13%
Plovdiv 5.5%          8%               12%                 14.5%
Write a program that reads the name of a city (string) and the volume of sales (decimal number) and 
calculates the rate of the commission fee. The result has to be shown rounded up to 2 digits after the 
decimal point. When there is an invalid city or volume of sales (a negative number), print "error".
Sample Input and Output
Input  Output  Input   Output Input      Output 
Sofia  120.00  Plovdiv 27.50  Kaspichan  error
1500           499.99         -50

09.Example: Day of the Week
Let's write a program that prints the day of the week (in English) depending 
on given number (1 … 7) or "Error!" if an invalid input is given.
Sample Input and Output
A sample input and output are given in the table on the right.
Input Output Input  Output Input  Output 
1     Monday 7      Sunday -1     Error!

10.Example: Animal Type
Write a program that prints the type of the animal depending on its name:
• dog -> mammal
• crocodile, tortoise, snake -> reptile
• others -> unknown
Sample Input and Output
Input    Output  Input Input  Input    Input 
tortoise reptile dog   mammal elephant unknown

11.Problem: Cinema
In a cinema hall the chairs are ordered in a rectangle shape in r rows and c columns. There are three 
types of screenings with tickets of different prices:
• Premiere – a premiere screening, with price 12.00 EUR.
• Normal – a standard screening, with price 7.50 EUR.
• Discount – a screening for children and students on a reduced price – 5.00 EUR.
Write a program that enters a type of screening (string), number of rows and number of columns in 
the hall (integer numbers) and calculates the total income from tickets from a full hall. The result has 
to be printed in the same format as in the examples below – rounded up to 2 digits after the decimal 
point.
Sample Input and Output
Input    Output  Input  Output 
Premiere 1440.00 Normal 2047.50
10               21
12               13
Hints and Guidelines
While reading the input, we could convert the screening type into small letters (with the function
 .lower()). We create and initialize a variable that will store the calculated income. In another 
variable we calculate the full capacity of the hall. We use a switch-case conditional statement to 
calculate the income according to the type of the projection and print the result on the console in the 
given format (look for the needed Python functionality on the internet). Sample code (parts of the code 
are blurred with the purpose to stimulate your thinking and problem-solving skills)

12.Problem: Volleyball
Vladimir is a student, lives in Sofia and goes to his hometown from time to time. He is very keen on 
volleyball but is busy during weekdays and plays volleyball only during weekends and on holidays. 
Vladimir plays in Sofia every Saturday, when he is not working, and he is not traveling to his hometown
and also during 2/3 of the holidays. He travels to his hometown h times a year, where he plays 
volleyball with his old friends on Sunday. Vladimir is not working 3/4 of the weekends, during which 
he is in Sofia. Furthermore, during leap years Vladimir plays 15% more volleyball than usual. We accept 
that the year has exactly 48 weekends, suitable for volleyball. Write a program that calculates how 
many times Vladimir has played volleyball through the year. Round the result down to the nearest 
whole number (e.g. 2.15 -> 2; 9.95 -> 9).
The input data is read from the console:
• The first line contains the word “leap” (leap year) or “normal” (a normal year with 365 days).
• The second line contains the integer p – the count of holidays in the year (which are not 
Saturday or Sunday).
• The third line contains the integer h – the count of weekends, in which Vladimir travels to his 
hometown.
Sample Input and Output
Input Output Input  Output Input  Output Input Output 
leap  45     normal 38     normal 44     leap  41
5            3             11            0
2            2             6             1

13.Problem: * Point in the Figure
The figure consists of 6 blocks with size h * h, placed as in the figure 
below. The lower left angle of the building is on position {0, 0}. The upper 
right angle of the figure is on position {2*h, 4*h}. The coordinates given 
in the figure are for h = 2 (see the figure on the right).
Write a program that enters an integer h and the coordinates of a given
point {x, y} (integers) and prints whether the point is inside the figure 
(inside), outside of the figure (outside) or on any of the borders of the 
figure (border).
![image](https://github.com/Sasho80/4.1.ComplexCondition/assets/7139995/5aa84a73-7654-443f-93d6-29487fa7b8d6)
Sample Input and Output
Input Output  Input Output Input Output Input Output 
2     outside 2     inside 2     border 2     border
3             3            2            6 
10            1            2            0    

Input Output  Input Output  Input Output Input Output 
2     outside 15    outside 15    inside 15    outside
0             13            29           37
6             55            37           18

Hints and Guidelines
A possible logic for solving the task (not the only correct one):
• We might split the figure into two rectangles with a common side:
• A point is outer (outside) for the figure, when it is outside both of 
the rectangles.
• A point is inner (inside) for the figure, if it is inside one of the 
rectangles (excluding their borders) or lies on their common side.
• In other case the point lies on the border of the rectangle (border).
![image](https://github.com/Sasho80/4.1.ComplexCondition/assets/7139995/de0fcc1b-9db1-48b0-92dd-5e8c6227ff9c)



