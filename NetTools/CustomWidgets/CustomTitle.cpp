#include "CustomTitle.h"

CustomTitle::CustomTitle(QString titleString, QWidget *parent) :
    QWidget(parent),
    m_titleString(titleString)
{
    initUI();
    initCallFunction();
}

CustomTitle::~CustomTitle()
{

}

void CustomTitle::initUI()
{
    setWindowFlag(Qt::FramelessWindowHint);  //设置窗口无边框
    m_titleHBox = new QHBoxLayout(this);
    m_leftSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

    m_titleLabel = new QLabel(this);
    m_titleLabel->setText(m_titleString);
    int titleWidth = QFontMetrics(m_titleLabel->font()).horizontalAdvance(m_titleString);  //计算标题文字长度

    m_leftLabel = new QLabel;
    m_minBtn = new QPushButton;
    m_maxBtn = new QPushButton;
    m_closeBtn = new QPushButton;

    m_titleHBox->addWidget(m_leftLabel);
    m_titleHBox->addItem(m_leftSpacer);
    m_titleHBox->addWidget(m_minBtn);
    m_titleHBox->addWidget(m_maxBtn);
    m_titleHBox->addWidget(m_closeBtn);

    m_titleLabel->resize(titleWidth, 30);
    m_titleLabel->move(this->width()/2 - m_titleLabel->width()/2 , 0);
}

void CustomTitle::initCallFunction()
{

}
