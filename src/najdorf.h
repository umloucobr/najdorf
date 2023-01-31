#ifndef NAJDORF_H
#define NAJDORF_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {class Najdorf;}
QT_END_NAMESPACE

//Main text editor screen.
class Najdorf : public QMainWindow
{
    Q_OBJECT

public:
    Najdorf(QWidget *parent = nullptr);
    ~Najdorf();

private slots:
    void on_actionExplorer_toggled(bool arg1);

    void on_actionOutput_toggled(bool arg1);

    void on_output_visibilityChanged(bool visible);

    void on_explorer_visibilityChanged(bool visible);
private:
    void applyStyleSheet(bool isDarkMode);
    Ui::Najdorf *ui;
};

#endif // NAJDORF_H
