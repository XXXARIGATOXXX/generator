#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


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
    

    for(int i= 1; i <= 101;i++)
    {
      int number = GetRandomInt(0,9);
      cout << number << endl;

      switch(number)
      {
        case 0:
            int count0++;
            break;
        case 1:
            int count1++;
            break;
        case 2:
            int count2++;
            break;
        case 3:
            int count3++;
            break;
        case 4:
            int count4++;
            break;
        case 5:
            int count5++;
            break;
        case 6:
            int count6++;
            break;
        case 7:
            int count7++;
            break;
        case 8:
            int count8++;
            break;
        case 9:
            int count9++;
            break;
       }
    }



}
