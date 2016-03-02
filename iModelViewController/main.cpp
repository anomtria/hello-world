#include "i_mvc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    i_mvc w;
    w.show();

    return a.exec();
}
