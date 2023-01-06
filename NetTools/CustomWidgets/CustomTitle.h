#ifndef CUSTOMTITLE_H
#define CUSTOMTITLE_H
/**
  * File: 自定义标题栏
  * Date：2023/1/6
  * Authir：yp
  * PS: 界面及内部控件大小等细节由QSS文件控制
*/
#include <QWidget>
#include <QPixmap>
#include <QPushButton>
#include <QLabel>
#include <QFontMetrics>
#include <QSpacerItem>
#include <QHBoxLayout>
#include <QShowEvent>
class CustomTitle : public QWidget
{
    Q_OBJECT
public:
    explicit CustomTitle(QString titleString = "Title", QWidget *parent = nullptr);
    ~CustomTitle();
public:
    void initUI();  //初始化UI
    void initCallFunction();  //初始化槽与信号
private:
    QLabel* m_leftLabel;  //左侧图标
    QPushButton* m_minBtn;
    QPushButton* m_maxBtn;
    QPushButton* m_closeBtn;  //关闭按钮
    QLabel* m_titleLabel;  //标题栏

    QSpacerItem* m_leftSpacer;
    QHBoxLayout* m_titleHBox;

    QString m_titleString; //标题内容

};

#endif // CUSTOMTITLE_H
