#ifndef SCENE_H
#define SCENE_H

// Project
#include "AbstractScene.h"
#include "Window.h"

//------------------------------------------------------------------------------
/// @file Scene.h
/// @author Ramon Blanquer
/// @version 0.0.1
/// @class Scene
/// @brief This is an example on how to subclass the AbstractScene and use your
/// OpenGL commands.
///
/// In order to create your scene you need to subclass the AbstractScene through
/// public inheritance and write initialize() and paint(). Both are virtual, but
/// the paint() is pure virtual, initialize() is not.
///
/// There is just one requirement, AbstractScene::initialize() method must be
/// called from the Scene::initialize() in order to initialize the OpenGL
/// functions, that saves you from having to do it. Just make sure you call
/// the superclass method and you are good to go.
//------------------------------------------------------------------------------
class Scene : public AbstractScene
{

public:
  //----------------------------------------------------------------------------
  /// @brief Constructor.
  /// @param[in] _window The OpenGL window to associate the scene with.
  //----------------------------------------------------------------------------
  Scene(Window *_window);
  //----------------------------------------------------------------------------
  /// @brief Destructor. Do all the OpenGL cleanup here.
  //----------------------------------------------------------------------------
  ~Scene();
  //----------------------------------------------------------------------------
  /// @brief All the OpenGL initialization should be done in this method.
  //----------------------------------------------------------------------------
  void initialize();
  //----------------------------------------------------------------------------
  /// @brief Gets called everytime we want to draw the scene.
  //----------------------------------------------------------------------------
  void paint();

};

#endif // SCENE_H