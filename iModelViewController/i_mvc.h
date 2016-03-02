#ifndef I_MVC_H
#define I_MVC_H

#include <QWidget>
#include <QStringList>
#include <QStringListModel>
#include <QAbstractItemView>

namespace Ui {
class i_mvc;
}

class i_mvc : public QWidget
{
    Q_OBJECT

public:
    explicit i_mvc(QWidget *parent = 0);
    ~i_mvc();

private slots:
    void on_pushButton_Add_clicked();

    void on_pushButton_Insert_clicked();

    void on_pushButton_Delete_clicked();

private:
    Ui::i_mvc *ui;
    QStringListModel *i_model;

};

#endif // I_MVC_H
