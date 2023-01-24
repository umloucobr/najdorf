#ifndef LINECOUNTER_H
#define LINECOUNTER_H
#include <QWidget>
#include <QPlainTextEdit>

class LineNumberArea : public QWidget
{
public:
    LineNumberArea(QPlainTextEdit *editor);
    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QPlainTextEdit *plainTextEdit;
};

#endif // LINECOUNTER_H
