#pragma once

#include <QtCore/QDebug>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QtGui/QAction>
#include <QtWidgets/QDialog>

class MyDialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit MyDialog1(QWidget* parent = nullptr) noexcept;
    ~MyDialog1();

private:
    auto onOkButtonClicked() noexcept->void;

public:
    static const size_t	DIALOG_WIDTH = 180;
    static const size_t DIALOG_HEIGHT = 120;
private:
};


//-------------------------------------------------------

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr) noexcept;
    ~MainWindow();

signals:
    void pressedButton();

private:
    auto actionButton() noexcept->void;
    auto actionTopLabel() const noexcept->void;
    auto actionMiddleLabel() const noexcept->void;
    auto actionBottomLabel() const noexcept->void;
    auto actionOpenDialog() noexcept->void;
};
