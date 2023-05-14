//
// Created by nxsnow on 5/14/23.
//

#ifndef SUZURANRENDERER_LIGHT_H
#define SUZURANRENDERER_LIGHT_H
#include "Core.h"

namespace szr
{
    enum LightType
    {
        Point,
        Direct,
        Spot,
        Area
    };

    struct Light
    {
        LightType type;
        glm::vec3 position;
        glm::vec3 direction;
        glm::vec3 color;

        //TODO: Support spot and area lighting
    };
}


#endif //SUZURANRENDERER_LIGHT_H
