#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonLinux_clicked();

    void on_pushButtonWindows_clicked();

    void on_pushButtonOS_clicked();

    void on_lineEditCode_textChanged(const QString &arg1);

    void on_actionJAVA_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
