#include "MainUI.h"

MainUI::MainUI(QWidget *parent)
    : QWidget(parent)
{
    initUI();
}

MainUI::~MainUI()
{
}

void MainUI::initUI()
{
//    setWindowFlag(Qt::FramelessWindowHint);

    m_mainVBox = new QVBoxLayout(this);
    m_title = new CustomTitle();
    m_mainVBox->addWidget(m_title);
    this->setMinimumWidth(600);
}

