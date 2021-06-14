#ifndef CANVAS_H
#define CANVAS_H

#include <QOpenGLWidget>
#include "cubo.h"

class Canvas : public QOpenGLWidget
{
    Q_OBJECT
    public:
        Canvas(QWidget *parent);
    public slots:
        void idleGL();
    protected:
        virtual void initializeGL();
        virtual void paintGL();
    private:
        Cubo cubo;
};

#endif // CANVAS_H
