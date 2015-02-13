#ifndef DESSIN_H
#define DESSIN_H

#include <QLabel>
#include <QPainter>
#include <QPen>
#include <QPixmap>

class Dessin: public QLabel
{
    Q_OBJECT
public:
    explicit Dessin(QWidget * parent=0);
    ~Dessin();

signals:
    void clicked(int x, int y);

protected:
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent * event);

private:
    QPixmap dessin;
    bool trace = false;
    int x;
    int y;


};

#endif // DESSIN_H
