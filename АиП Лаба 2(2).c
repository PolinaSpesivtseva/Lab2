/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main(void)
{
    double x, y; 
    printf("Hello!\n"); //приветствие
    printf("Made by Spesivtseva Polina Eduardovna, 224\n"); //ссылка на автора программы
    printf("Enter the coordinate value of x->");//просьба ввести переменную х
    scanf("%lf",&x);//ввод переменной х
    printf("Enter the coordinate value of y->");//просьба ввести переменную y
    scanf("%lf",&y);
    if (((x*x+y*y<=1) && (x*x+y*y>=0.25) && (x>=0) && (y>=0))||((x*x+y*y<=1) && (x<=0) && (y>=0))) //описываем заданную область 
        printf("Point with coordinates (x;y) belongs to this area\n");//выводим, что точка принадлежит заданной области
        else
        printf("Point with coordinates (x;y) does not belong to this area\n");//выводим, что точка не лежит в заданной области
    
    return 0;
    
    
}
