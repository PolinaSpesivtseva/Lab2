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
    printf("Enter the coordinate value of y->"); //просьба ввести значение координаты y
    scanf("%lf",&y); //ввод координаты y
    printf("Enter the coordinate value of x->"); //просьба ввести значение координаты x
    scanf("%lf",&x); //ввод координаты x
    if(y<0){
    printf("Point with coordinates (x;y) does not belong to this area\n"); }// вывод, что при у<0 точка не принадлежит заданной области
    else
    {
        if(x<=0) //рассматриваем x<=0
        {
            if(x*x+y*y<=1){ // задаём уравнение окружности с центром в точке (0;0), радиуса 1; точки лежат внутри нее и на ней
            printf("Point with coordinates (x;y) belongs to this area\n");}//выводим, что точка принадлежит заданной области
            else{
            printf("Point with coordinates (x;y) does not belong to this area\n");}//выводим, что точка не лежит в заданной области
        }
        else 
        {
        if (x*x+y*y<=1) // задаём уравнение окружности с центром в точке (0;0), радиуса 1; точки лежат внутри нее и на ней
        {
            if (x*x+y*y>=0.25) {//задаём уравнение окружности с центром в точке (0;0), радиуса 0.25; точки лежат вне нее и на ней
            printf("Point with coordinates (x;y) belongs to this area\n");}//выводим, что точка принадлежит заданной области
            else{
            printf("Point with coordinates (x;y) does not belong to this area\n");}//выводим, что точка не лежит в заданной области
        }
        }
    }
return 0;   
}


