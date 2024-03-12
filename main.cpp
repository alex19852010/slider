#include "widget.h"
#include <QSlider>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

            QWidget window;
            window.setWindowTitle("QSlider example");

            QVBoxLayout layout(&window);

            QSlider slider(Qt::Horizontal);
            slider.setMinimum(0);
            slider.setMaximum(100);

            QLabel label;
            QPixmap image("C:/Users/User/Pictures/circles/faq2.png");
            label.setPixmap(image);
            label.setFixedSize(220, 120);
            layout.addWidget(&label);
            layout.addWidget(&slider);

            QObject::connect(&slider, &QSlider::valueChanged, [&](int value)
            {

                if(value <= 33)
                {
                    QPixmap image("C:/Users/User/Pictures/circles/faq2.png");
                    label.setPixmap(image);
                }


                else if(value > 33 && value <= 66)                {
                    QPixmap image("C:/Users/User/Pictures/circles/faq3.png");
                    label.setPixmap(image);
                }

                else if (value > 66)
                {
                    QPixmap image("C:/Users/User/Pictures/circles/faq1.png");
                    label.setPixmap(image);
                }


            });

           window.show();

        return app.exec();



}
