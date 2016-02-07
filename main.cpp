#include <iostream> //cout and endl
#include <iomanip> //setw() and right-alignment

int main()
{
    for(int i = 1; i <= 12; ++i)
    {
        for(int j = 1; j <= 12; ++j)
        {
            int k = (j==1) ? 2 : 4; //strip out leading spaces
            //setw(k) - set width of the next output to k places
            //right - make the output text right-aligned
            std::cout << std::setw(k) << std::right << i*j;
        }
        //print in matrix form
        std::cout << std::endl;
    }
}
