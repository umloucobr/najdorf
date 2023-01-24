#ifndef NAJDORF_H
#define NAJDORF_H

#include <QMainWindow>
#include <linecounter.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Najdorf; }
QT_END_NAMESPACE

//Main text editor screen.
class Najdorf : public QMainWindow
{
    Q_OBJECT

public:
    Najdorf(QWidget *parent = nullptr);
    ~Najdorf();

private slots:
    void updateLineNumberAreaWidth(int newBlockCount);
    void updateLineNumberArea(const QRect &rect, int dy);
    int lineNumberAreaWidth();
    LineNumberArea* lineNumberArea;

private:
    Ui::Najdorf *ui;
};

#endif // NAJDORF_H
