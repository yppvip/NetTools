#ifndef MAINUI_H
#define MAINUI_H

#include <QWidget>
#include <QVBoxLayout>
#include "CustomWidgets/CustomTitle.h"
class MainUI : public QWidget
{
    Q_OBJECT

public:
    MainUI(QWidget *parent = nullptr);
    ~MainUI();

private:
    void initUI();
private:
    QVBoxLayout* m_mainVBox;

    CustomTitle* m_title;
};
#endif // MAINUI_H
