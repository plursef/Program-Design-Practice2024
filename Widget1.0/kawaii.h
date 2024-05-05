#ifndef KAWAII_H
#define KAWAII_H

#include <QDialog>
namespace Ui{
class Kawaii;
}
class Kawaii : public QDialog
{
    Q_OBJECT
public:
    explicit Kawaii(QWidget* parent = nullptr);
    ~Kawaii();
private:
    Ui::Kawaii *ui;
};

#endif // KAWAII_H
