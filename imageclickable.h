#ifndef IMAGECLICKABLE_H
#define IMAGECLICKABLE_H
#include <QLabel>
#include <string>
class ImageClickable: public QLabel
{

    Q_OBJECT

public:
    explicit ImageClickable(std::string nouveau_path_image_film, QWidget * parent = 0);
    ~ImageClickable();
    std::string get_path_image_film();
    std::string get_path_dessin();
    void set_path_dessin(std::string nouveau_path_dessin);
    void changer_image(QString nouveau_path_image);
    void set_affichage_image(bool choix);
    void set_affichage_dessin(bool choix);

private:
    std::string path_image_film;
    std::string path_dessin;
};

#endif // IMAGECLICKABLE_H
