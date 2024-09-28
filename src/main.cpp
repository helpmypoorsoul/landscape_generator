#include "MainWindow.h"
#include <QApplication>
#include <QSurfaceFormat>


int main(int argc, char *argv[])
{
  //create an OpenGL format specifier
  QSurfaceFormat format;
  //set the number of samples for multisampling
  //will need to enable glEnable(GL_MULTISAMPLE); once we have a context
  format.setSamples(4);
  format.setMajorVersion(4);
  format.setMinorVersion(6);
  //set to CoreProfile OpenGL so we can't use an old Immediate mode GL
  format.setProfile(QSurfaceFormat::CoreProfile);
  //set depth buffer to 24 bits
  format.setDepthBufferSize(24);
  //set the format for all widgets
  QSurfaceFormat::setDefaultFormat(format);

  //make an instance of the QApplication
  QApplication a(argc, argv);
  //create a new MainWindow
  MainWindow w;
  //show it
  w.show();

  //hand control over to Qt framework
  return a.exec();
}
