/* < Hypotenuse calculator >
 * Last Edited: 08/14/2025
 *
 * This program is part of course practice on youtube and will find 
 * the hypotenuse of a right triangle using the formula : c = sqrt(a^2 + b^2).
 *
 * By Yuvang Verma
 * 
 * 
 * Credits to Bro Code Turtorial:
 * https://www.youtube.com/watch?v=-TkoO8Z07hI&t=8651s&ab_channel=BroCode
 */ 


#include <iostream>
#include <cmath>

int main()
{
    //Variables
    double a;
    double b;
    double c;

    //Input From User
    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;

    //Formula for calculations
    c = sqrt(pow(a, 2) + pow(b, 2));

    //Output
    std::cout << "Side C: " << c << '\n';

    return 0;
}