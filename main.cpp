#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;


int Summa(int* counters, int size)
{
  int tmp = 0;
  for (int i = 0; i < size ; i++)
  {
    tmp += counters[i];
    
  }
  return tmp;
}

// outpost #1

int GetRandomInt(int min, int max)
{
    if ( min == max ) // сравнение вводимых значений
        return min; // если min значение равняется  max значению - выдается min


    else if ( min > max )// если значение min больше max, они меняются местами
        swap( min, max ); // меняются местами min и max


    if ( min < 0 ) // если min меньше нуля, то..
        max += 0 - min; // в max присваивает min с положительным знаком
    return rand( ) % ( max + 1 ) + min; // возращение выражения: получаем остаток от деления рандмного числа на среднее фриметическое min и max
}

//outpost #2

double GetRandomDouble(intermidiate, number)
{
    for (int i=0;i<7;i++)
    {
        number += intermidiate;
        number += intermidiate * pow(10.,i + 1);
    }
}

//outpost #3

int main() 
{   

    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int counters[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    

    for(int i = 1; i <= 10000;i++)
    {
        int intermidiate = GetRandomInt(0,9);
        double number = 0.;

    GetRandomDouble;
        counters[intermidiate]++;      
    }
    cout << number << endl;

    cout << Summa(counters, 10) << endl;
    for (int i=0;i<10;i++)
    {
        cout << "сгенерировано:" << i << ":" << counters[i] << endl;
    }
}

//outpost #4

