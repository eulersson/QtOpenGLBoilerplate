#ifndef WINDOW_H
#define WINDOW_H

// Qt
#include <QOpenGLWindow>
#include <QTimer>

// Project
#include "AbstractScene.h"

//------------------------------------------------------------------------------
/// @file Window.h
/// @author Ramon Blanquer
/// @version 0.0.1
/// @class Window
/// @brief Handles all the windowing related functionality.
///
/// Subclasses QOpenGLWindow which wraps all the functionality that allows
/// QWindow to render OpenGL graphics.
//------------------------------------------------------------------------------
class Window : public QOpenGLWindow
{

public:
  //----------------------------------------------------------------------------
  /// @brief Constructor.
  /// @param[in] Sets the upper class parent.
  //----------------------------------------------------------------------------
  Window(QWindow *parent = 0);
  //----------------------------------------------------------------------------
  /// @brief Scene getter.
  //----------------------------------------------------------------------------
  AbstractScene* scene() const;
  //----------------------------------------------------------------------------
  /// @brief Scene setter.
  //----------------------------------------------------------------------------
  void setScene(AbstractScene *_scene);

protected:
  //----------------------------------------------------------------------------
  /// @brief Internally calls the Scene::initialize() of the bound Scene.
  //----------------------------------------------------------------------------
  void initializeGL();
  //----------------------------------------------------------------------------
  /// @brief Internally calls the Scene::paint() of the bound Scene.
  //----------------------------------------------------------------------------
  void paintGL();
  //----------------------------------------------------------------------------
  /// @brief Updates the Scene's Viewport accordingly to the new Window size.
  //----------------------------------------------------------------------------
  void resizeGL(int _w, int _h);

private:
  //----------------------------------------------------------------------------
  /// @brief Scene associated with the Window.
  //----------------------------------------------------------------------------
  AbstractScene *m_scene = nullptr;
  //----------------------------------------------------------------------------
  /// @brief QTimer clocks schedule updates for repainting the scene.
  //----------------------------------------------------------------------------
  QTimer m_timer;

};

#endif // WINDOW_H
