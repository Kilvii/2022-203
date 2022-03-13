﻿#include "melkonyanma.h"

/**
 * Введение в дисциплину
 */
void melkonyanma::lab1()
{
  cout << "Hello World!" << endl;
}


/**
 * Метод Гаусса с выбором главного элемента
 */
void melkonyanma::lab2()
{
    for(int row = 0, column = 0 ; column < N ; ++row, ++column)
    {
        int max = row;

        for(int i = row + 1; i < N ;++i)
        {
            if(fabs(A[i][column]) > fabs(A[max][column]))
            {
                max = i;
            }
        }

        if(max != row){
            swap(A[row],A[max]);
            swap(b[row],b[max]);
        }

        double mainElem = A[row][column];

        for(int i = 0; i < N ;++i)
        {
            if(A[row][i] == 0){ continue; }
            A[row][i] /= mainElem;           
        }

        b[row] /= mainElem; 

        for(int i = row + 1; i < N ;++i)
        {
            double a = A[i][column];
            for(int j = 0; j < N ;++j){
                A[i][j] -= A[row][j]*a;
            }
            b[i] -=  b[row]*a;
        }
    }   

     for(int i = N - 1; i > 0 ; --i)
    {
        double a = A[i][i];
        for(int k = i-1; k >= 0 ;--k)
        {
            b[k] -= b[i]*A[k][i];
            A[k][i] -= a*A[k][i];
        }
    }

    for(int i = 0; i < N ; ++i)
    {
        x[i] = b[i];
    }
}



/**
 * Метод прогонки
 */
void melkonyanma::lab3()
{

}



/**
 * Метод Холецкого
 */
void melkonyanma::lab4()
{

}



/**
 * Метод Якоби или Зейделя
 */
void melkonyanma::lab5()
{

}



/**
 * Метод минимальных невязок
 */
void melkonyanma::lab6()
{

}



/**
 * Метод сопряженных градиентов
 */
void melkonyanma::lab7()
{

}


/**
 * Метод вращения для нахождения собственных значений матрицы
 */
void melkonyanma::lab8()
{

}


/**
 * Нахождение наибольшего по модулю собственного значения матрицы
 */
void melkonyanma::lab9()
{

}


std::string melkonyanma::get_name()
{
  return "M.A. Melkonyan";
}
