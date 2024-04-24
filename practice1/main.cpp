#include <QApplication>
#include "mainwindow.hpp"

#define WINDOW_WIDTH	(640)
#define WINDOW_HEIGHT	(480)
#define WINDOW_TITLE	("Top-level widget")

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    window.resize(WINDOW_WIDTH, WINDOW_HEIGHT);
    window.setWindowTitle(WINDOW_TITLE);
    window.show();

    return app.exec();
}
