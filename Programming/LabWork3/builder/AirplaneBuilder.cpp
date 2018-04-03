#include <string>
#include "AirplaneBuilder.h"

//
// Created by Alexey Novopashin on 20/03/2018.
//
AirplaneBuilder::AirplaneBuilder(Frame frame, Metal metal, TurbineNumber turbineNumber) : frame(frame),
                                                                                          metal(metal),
                                                                                          turbineNumber(turbineNumber) {}

Airplane *AirplaneBuilder::build() {
    return new Airplane(this->frame, this->metal, this->turbineNumber, "Custom");
}

