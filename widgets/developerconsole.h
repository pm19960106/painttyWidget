#ifndef DEVELOPERCONSOLE_H
#define DEVELOPERCONSOLE_H

#include <QDialog>

namespace Ui {
class DeveloperConsole;
}

class DeveloperConsole : public QDialog
{
    Q_OBJECT
    
public:
    explicit DeveloperConsole(QWidget *parent = 0);
    ~DeveloperConsole();
    
public slots:
    void commandProc();
private:
    Ui::DeveloperConsole *ui;
};

#endif // DEVELOPERCONSOLE_H
