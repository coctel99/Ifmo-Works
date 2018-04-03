//
// Created by Alexey Novopashin on 20/03/2018.
//

#ifndef WORK_3_AIRPLANEBUILDER_H
#define WORK_3_AIRPLANEBUILDER_H

#include <iostream>
#include "Airplane.h"

using namespace std;

class AirplaneBuilder {
protected:
    Frame frame;
    Metal metal;
    TurbineNumber turbineNumber;
public:
    AirplaneBuilder(Frame frame, Metal metal, TurbineNumber turbineNumber);

    Airplane *build();
};

#endif //WORK_3_AIRPLANEBUILDER_H
