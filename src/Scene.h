//
// Created by nxsnow on 5/14/23.
//

#ifndef SUZURANRENDERER_SCENE_H
#define SUZURANRENDERER_SCENE_H

#include "Core.h"
#include "Model.h"
#include "Light.h"
#include "Camera.h"
#include <map>

namespace szr
{
    class Scene
    {
    public:
        Scene(std::vector<Model*> models,
              std::vector<Light> lights,
              std::vector<ShaderProgram*> shaders,
              std::vector<ShaderProgram*> geo_shaders,
              Camera cam);
        ~Scene();
        std::vector<Model*> models;
        std::vector<Light> lights;
        std::vector<ShaderProgram*> shaders;
        std::vector<ShaderProgram*> geo_shaders;
        Camera camera;

    };

}


#endif //SUZURANRENDERER_SCENE_H
