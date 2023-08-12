#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int, bool, float, double, char, unsingned int.
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int noOfDays = 7;
    int age = 33;
    int year = 1989;
    float minute = 10.0f;
    float temperature = 32.5f;
    float miles = 5.6f;
    bool isOpen = true;
    bool isClosed = false;
    bool isWinter = false;
    double height = 5.10;
    double weight = 70.2;
    double num = 3.5;
    char grade = 'A';
    char initial = 'P';
    char yes = 'Y';
    unsigned int price = 67889;
    unsigned int speed = 124;
    unsigned int noOfSongs = 52416;

    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(noOfDays, age, year, minute, temperature, miles, isOpen, isClosed, isWinter, height, weight, num, grade, initial, yes, price, speed, noOfSongs);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int addThreeToNumber(int numberToAdd)
{
    ignoreUnused(numberToAdd);
    return {};
}
/*
 2)
 */
void printChar(char charToPrint = 'B')
{
    ignoreUnused(charToPrint);
}
/*
 3)
 */
float addNumbers(float num1 = 4.3f, float num2 = 5.2f)
{
    ignoreUnused(num1, num2);
    return{};
}
/*
 4)
 */
float findSquareRoot(int number1)
{
    ignoreUnused(number1);
    return{};
}
/*
 5)
 */
bool bookAVacation(int numOfWeeks, char destination = 'A')
{
    ignoreUnused(numOfWeeks, destination);
    return{};
}
/*
 6)
 */
int calculateDaysLeft(int startDate, int endDate)
{
    ignoreUnused(startDate, endDate);
    return{};
}
/*
 7)
 */
bool addToRecord(int studentNumber, char grade)
{
    ignoreUnused(studentNumber, grade);
    return{};
}
/*
 8)
 */
void printNextTenNum(int numToPrintFrom)
{
    ignoreUnused(numToPrintFrom);
}
/*
 9)
 */
bool storePhoneNum(int phoneNum, int countryCode, bool isActive = true)
{
    ignoreUnused(phoneNum, countryCode, isActive);
    return{};
}
/*
 10)
 */
bool deleteTask(int taskId)
{
    ignoreUnused(taskId);
    return{};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto numAdded = addThreeToNumber(16);
    //2)
    printChar('B');
    //3)
    auto sumOfNumbers = addNumbers(6.4, 7.6);
    //4)
    auto squareRoot = findSquareRoot(4);
    //5)
    auto vacationBooked = bookAVacation(2, 'B');
    //6)
    auto daysLeft = calculateDaysLeft(25, 30);
    //7)
    auto recordAdded = addToRecord(999, 'A');
    //8)
    printNextTenNum(10);
    //9)
    auto numStored = storePhoneNum(99999, 91, true);
    //10)
    auto taskDeleted = deleteTask(999);
    
    ignoreUnused(carRented);
    ignoreUnused(numAdded, sumOfNumbers, squareRoot, vacationBooked, daysLeft, recordAdded, numStored, taskDeleted);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
