//#include <QtCore/QCoreApplication>
//#include <QPushButton>
#include <iostream>
//#include <QPaintEvent>
//#include <QPixmap>
//#include <QPainter>
#include <QApplication>
#include "QSlider"
#include "QSpinBox"
#include <QtWidgets>
//class ImageButton : public QPushButton {

//};

int main(int argc, char** argv) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);
    QApplication app(argc, argv);
  //  QLabel lbl("Привет <br> <b style=color:red> мир!!!</b>");
   
 //       lbl.show();
    auto* slider = new QSlider(Qt::Horizontal);
   auto* spinbox = new QSpinBox();
    slider->setMinimum(0);
    slider->setMaximum(100);
   spinbox->setMinimum(0);
    spinbox->setMaximum(100);
    QObject::connect(slider, &QSlider::valueChanged, spinbox, QSpinBox::setValue);
    slider->resize(50, 10);
    spinbox->resize(20, 20);
   spinbox->move(900, 500);
    slider->move(800, 500);
    slider->show();
    spinbox->show();
    // create and show your widgets here

    return app.exec();
}