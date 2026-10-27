#include <QApplication>
#include "MainWindow.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QApplication::setApplicationName("TmogReplica");
    QApplication::setOrganizationName("TmogReplica");

    tmog::MainWindow win;
    win.show();
    return app.exec();
}
