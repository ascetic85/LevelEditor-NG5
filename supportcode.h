#ifndef SUPPORTCODE_H
#define SUPPORTCODE_H

#include <QWidget>

namespace Ui {
class SupportCode;
}

class SupportCode : public QWidget
{
    Q_OBJECT
    
public:
    explicit SupportCode(QWidget *parent = 0);
    ~SupportCode();
    
private:
    Ui::SupportCode *ui;
};

#endif // SUPPORTCODE_H
