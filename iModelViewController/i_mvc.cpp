#include "i_mvc.h"
#include "ui_i_mvc.h"

i_mvc::i_mvc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::i_mvc)
{
    ui->setupUi(this);

    //buat string listnya
    i_model = new QStringListModel(this);

    //nama data listnya
    QStringList i_list;
    i_list << "Kartago" << "Fenisia" << "Punic";

    i_model->setStringList(i_list);

    ui->listView->setModel(i_model);
    ui->comboBox->setModel(i_model);


}

i_mvc::~i_mvc()
{
    delete ui;
}

void i_mvc::on_pushButton_Add_clicked()
{
    //tombol add di tekan

    int row = i_model->rowCount();

    i_model->insertRows(row,1);

    QModelIndex index = i_model->index(row);

    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}

void i_mvc::on_pushButton_Insert_clicked()
{
    int row = ui->listView->currentIndex().row();

    i_model->insertRows(row,1);

    QModelIndex index = i_model->index(row);

    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}
