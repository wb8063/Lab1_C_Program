# Lab1_C_Program
First C lab
Want to get done:
Practice using if and/or switch statements.
Practice using functions to organize your code.
Get input from the user.
Practice writing complicated output.

Write a program that prompts the user for the observed boiling point of a substance in degrees Celsius, prints the number they entered with only two decimal places, and then prompts them to custom an error percent. Then, identify the substance if the observed boiling point is within that percent of the expected boiling point. If the data input is outside of range for all of the boiling points in the table, the program should output the message Substance unknown.

For example, if the user selects an error percent of 5%, your program should identify the substance that is within 5% of the expected boiling point. If the data input is more than 5% higher or lower than any of the boiling points in the table, print the above message.

You should use a default percent of 5 if the user does not want to enter a custom percent.

Your program must define and call a function within_x_percent that takes as a parameter a reference value ref, a data value data, and a percentage value x and returns 1 meaning true if data is within x% of ref — that is, (ref - x% * ref) ≤ data ≤ (ref + x% * ref). Otherwise within_x_percent should return zero, meaning false. For example, the call within_x_percent(357, 323, 10) would return 1 for true, since 10% of 357 is 35.7, and 323 falls between 321.3 and 392.7.

When telling the user what value they entered, only print two decimal places.
When prompting the user to enter a custom error percent, accept n and N for no and y and Y for yes. For anything else, print Error: bad input and quit the program.
If multiple substances are valid for the given temperature and error percent, print the substance with the lowest temperature that matches.
