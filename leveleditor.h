#ifndef LEVELEDITOR_H
#define LEVELEDITOR_H

#include <QWidget>

namespace Ui {
class LevelEditor;
}

class LevelEditor : public QWidget
{
    Q_OBJECT
    
public:
    explicit LevelEditor(QWidget *parent = 0);
    ~LevelEditor();
    
private:
    Ui::LevelEditor *ui;
};

#endif // LEVELEDITOR_H
