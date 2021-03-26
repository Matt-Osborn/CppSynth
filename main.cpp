#include <iostream>
using namespace std;
#include "olcNoiseMaker.h"



//double pi = 


double MakeNoise(double dtime)
{
    return 0.5 * sin(440.0 * 2 * 3.14159 * dtime);
}



int main()
{
    //Get all sound hardware

    vector<wstring> devices = olcNoiceMaker<short>::Enumerate();

    //Display Devices

    for (auto d : devices) wcout << "Found Output Device:" << d << endl;

    //Create Sound Machine

    //paramaters are: sample rate, number of channels, last two are for latency management

    //you can change short to char for 8 bit or int for 32 (short is 16)


    olcNoiseMaker<short> sound(devices[0], 44100, 1, 8 ,512);

    //connect MakeNoise and NoiseMaker

    sound.SetUserFunction(MakeNoise);



    return 0;
}

    while(1)
    {

    }