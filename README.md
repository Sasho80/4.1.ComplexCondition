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



