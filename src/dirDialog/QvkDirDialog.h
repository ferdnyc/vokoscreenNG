
#ifndef QvkDirDialog_H
#define QvkDirDialog_H

#include <QFileDialog>
#include <QEvent>

class QvkDirDialog : public QFileDialog
{
    Q_OBJECT

public:
    QvkDirDialog(QWidget *parent = 0);

    
public slots:


protected:
    bool eventFilter(QObject *o, QEvent *event);


private:


signals:

    
};
#endif
