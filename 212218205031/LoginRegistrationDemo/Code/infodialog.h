#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = nullptr);
    ~InfoDialog();

private slots:
    void on_label_linkActivated(const QString &link);

private:
    Ui::InfoDialog *ui;
};

#endif // INFODIALOG_H
