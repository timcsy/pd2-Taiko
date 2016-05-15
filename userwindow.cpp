#include "userwindow.h"
#include "ui_userwindow.h"
#include "drumset.h"
#include <QMediaPlayer>

UserWindow::UserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserWindow)
{
    ui->setupUi(this);
    RGIFLabel = new QLabel(this);
    Rmovie = new QMovie(":/img/Right.gif");
    Rmovie->setScaledSize(QSize(320,180));
    RGIFLabel->setGeometry(191,201,320,180);
    RGIFLabel->setMovie(Rmovie);

    LGIFLabel = new QLabel(this);
    Lmovie = new QMovie(":/img/Left.gif");
    Lmovie->setScaledSize(QSize(320,180));
    LGIFLabel->setGeometry(0,201,320,180);
    LGIFLabel->setMovie(Lmovie);

    QLabel *picture = new QLabel(this);
    picture->setPixmap(QPixmap(":/img/blank_note.png"));
    picture->setGeometry(100,120,47,47);
    DrumSet *drumset = new DrumSet(this,this,RGIFLabel,LGIFLabel,Rmovie,Lmovie,650,ui->TimeText,ui->ScoreText);
    QLabel *drumpicture = new QLabel(this);
    drumpicture->setPixmap(QPixmap(":/img/mtaiko.png"));
    drumpicture->setGeometry(-420,90,511,91);
    drumset->gamestart();
}

UserWindow::~UserWindow()
{
    delete ui;
}
