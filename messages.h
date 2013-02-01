#ifndef MESSAGES_H
#define MESSAGES_H

#include <QWidget>

namespace Ui {
class Messages;
}

class Messages : public QWidget
{
    Q_OBJECT
    
public:
    explicit Messages(QWidget *parent = 0);
    ~Messages();
    
private:
    Ui::Messages *ui;
};

#endif // MESSAGES_H
