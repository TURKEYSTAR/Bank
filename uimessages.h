#ifndef UIMESSAGES_H
#define UIMESSAGES_H

#include <QMainWindow>

namespace Ui {
class Uimessages;
}

class Uimessages : public QMainWindow
{
    Q_OBJECT

public:
    explicit Uimessages(QWidget *parent = nullptr);
    ~Uimessages();

private:
    Ui::Uimessages *ui;
};

#endif // UIMESSAGES_H
