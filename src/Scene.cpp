#include "Scene.h"
using namespace szr;

Scene::Scene(std::vector<Model*> models,
             std::vector<Light*> lights,
             std::vector<ShaderProgram*> shaders,
             std::vector<ShaderProgram*> geo_shaders,
             Camera cam):models(models), lights(lights), shaders(shaders), geo_shaders(geo_shaders), camera(cam)
{

};

Scene::~Scene()
{

};