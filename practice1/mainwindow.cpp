#include "mainwindow.hpp"

MyDialog1::MyDialog1(QWidget* parent) noexcept
    : QDialog(parent)
{
    auto	okButton		{new QPushButton("OK")};
    auto	dialogLayout	{new QVBoxLayout};
    dialogLayout->addWidget(okButton);
    setLayout(dialogLayout);
    connect(okButton, &QPushButton::clicked, this, &MyDialog1::onOkButtonClicked);
}

MyDialog1::~MyDialog1() {}

auto MyDialog1::onOkButtonClicked() noexcept->void
{
    accept();
}


//-------------------------------------------------------

MainWindow::MainWindow(QWidget *parent) noexcept
    : QMainWindow(parent)
{
    auto    mainWidget  {new QWidget};
    setCentralWidget(mainWidget);

    auto    mainLayout  {new QGridLayout};
    mainWidget->setLayout(mainLayout);

    // {Q; 뒤에 this를 넣어주어야 하나? 부모 안 넣으면 nullptr 들어갈 텐데 메모리 릭..?}
    auto    button      {new QPushButton("Press me")};
    auto    topLabel    {new QLabel("topLabel")};
    auto    middleLabel {new QLabel("middleLabel")};
    auto    bottomLabel {new QLabel("bottomLabel")};
    auto    openDialog  {new QPushButton("Open dialog")};
    mainLayout->addWidget(button, 0, 0);
    mainLayout->addWidget(topLabel, 1, 0);
    mainLayout->addWidget(middleLabel, 2, 0);
    mainLayout->addWidget(bottomLabel, 3, 0);
    mainLayout->addWidget(openDialog, 4, 0);

    // 연습 1
    // auto    buttonAction    {new QAction("buttonAction")};
    // button->addAction(buttonAction);
    // connect(button, &QPushButton::clicked, buttonAction, &QAction::triggered);
    // connect(buttonAction, &QAction::triggered, this, &MainWindow::actionTopLabel);
    // connect(buttonAction, &QAction::triggered, this, &MainWindow::actionMiddleLabel);
    // connect(buttonAction, &QAction::triggered, this, &MainWindow::actionBottomLabel);

    // 연습 2
    connect(button, &QPushButton::clicked, this, &MainWindow::actionTopLabel);
    connect(button, &QPushButton::clicked, this, &MainWindow::actionMiddleLabel);
    connect(button, &QPushButton::clicked, this, &MainWindow::actionBottomLabel);
    connect(button, &QPushButton::clicked, this, [=](){qInfo() << "It is Lambda";});
    connect(openDialog, &QPushButton::clicked, this, &MainWindow::actionOpenDialog);
}

MainWindow::~MainWindow() {}

auto MainWindow::actionButton() noexcept->void
{
    emit pressedButton();
}

auto MainWindow::actionTopLabel() const noexcept->void
{
    qInfo() << "top label";
}

auto MainWindow::actionMiddleLabel() const noexcept->void
{
    qInfo() << "middle label";
}

auto MainWindow::actionBottomLabel() const noexcept->void
{
    qInfo() << "bottom label";
}

auto MainWindow::actionOpenDialog() noexcept->void
{
    // MODAL DIALOG TEST
    // MyDialog1 dialog(this);
    // dialog.resize(dialog.DIALOG_WIDTH, dialog.DIALOG_HEIGHT);
    // dialog.exec();

    // MODALESS DIALOG TSET
    auto dialog	{new MyDialog1(this)};
    dialog->setAttribute(Qt::WA_DeleteOnClose); // 이거 없으면 메모리 릭..?
    dialog->show();
}
