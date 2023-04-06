#include <iostream>
#include <ctime>
#include <cstdlib>
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

int GetRandomInt(int min, int max)
{
    if ( min == max ) // сравнение вводимых значений
        return min; // если min значение равняется  max значению - выдается min


    else if ( min > max )// если значение min больше max, они меняются местами
        swap( min, max ); // меняются местами min и max


    if ( min < 0 ) // если min меньше нуля, то..
        max += 0 - min; // в max присваивает min с положительным знаком
    return rand( ) % ( max + 1 ) + min; // возращение выражения: получаем остаток от деления ранодмного числа на среднее фриметическое min и max
}


int main() 
{   

    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int counters[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    

    for(int i= 1; i <= 100;i++)
    {
      int number = GetRandomInt(0,9);
      cout << number << endl;
      
      switch(number)
      {
        case 0:
            counters[0]++;
            break;
        case 1:
            counters[1]++;
            break;
        case 2:
            counters[2]++;
            break;
        case 3:
            counters[3]++;
            break;
        case 4:
            counters[4]++;
            break;
        case 5:
            counters[5]++;
            break;
        case 6:
            counters[6]++;
            break;
        case 7:
            counters[7]++;
            break;
        case 8:
            counters[8]++;
            break;
        case 9:
            counters[9]++;
            break;
       }
    }
cout << Summa(counters, 10) << endl;
}

