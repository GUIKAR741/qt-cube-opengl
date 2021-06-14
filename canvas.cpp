#include "canvas.h"
#include <GL/glu.h>

Canvas::Canvas(QWidget *parent): QOpenGLWidget(parent)
{

}

void Canvas::idleGL()
{
    update();
}

void Canvas::initializeGL()
{
    glClearColor(1,1,1,1);
    glEnable(GL_PROGRAM_POINT_SIZE);
    glEnable(GL_POINT_SMOOTH);
    glEnable(GL_DEPTH_TEST);
}

void Canvas::paintGL()
{
    glViewport(0,0,width(),height());
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glFrustum(-1,1,-1,1,1,1000);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(5,5,5,
              0,0,0,
              0,1,0);

    cubo.desenha();

}
