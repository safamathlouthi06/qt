#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "etudiant.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_pb_forme_clicked();

    void on_pb_famille_clicked();








private:
    Ui::MainWindow *ui;
    Medicament tmpmedicament;
    QSortFilterProxyModel *proxyModel; //variable de tri
    //void checkStockNotification();

};

#endif // MAINWINDOW_H
