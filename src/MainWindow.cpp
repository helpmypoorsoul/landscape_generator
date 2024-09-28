#include "MainWindow.h"
#include "./ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
                                          QMainWindow(parent),
                                          m_ui(new Ui::MainWindow)
{
  m_ui->setupUi(this);
  m_scene = new NGLScene(this);
  m_ui->m_mainWindowGridLayout->addWidget(m_scene,0,1,6,3);

  //to choose colour palettes
  connect(m_ui->m_setPalette1,SIGNAL(clicked(bool)),m_scene,SLOT(setColourPaletteOne()));
  connect(m_ui->m_setPalette2,SIGNAL(clicked(bool)),m_scene,SLOT(setColourPaletteTwo()));
  connect(m_ui->m_setPalette3,SIGNAL(clicked(bool)),m_scene,SLOT(setColourPaletteThree()));
  //to choose the rules
  connect(m_ui->m_updateLeft, &QPushButton::clicked,
          [=]()
          {
            m_scene->addLeftRule(m_ui->m_numberForLeft->value());
          });
  connect(m_ui->m_updateRight, &QPushButton::clicked,
          [=]()
          {
            m_scene->addRightRule(m_ui->m_numberForRight->value());
          });
  connect(m_ui->m_updateCentre, &QPushButton::clicked,
          [=]()
          {
            m_scene->addCentreRule(m_ui->m_numberForCentre->value());
          });
  connect(m_ui->m_updateBottom, &QPushButton::clicked,
          [=]()
          {
            m_scene->addBottomRule(m_ui->m_numberForBottom->value());
          });
  connect(m_ui->m_updateTop, &QPushButton::clicked,
          [=]()
          {
            m_scene->addTopRule(m_ui->m_numberForTop->value());
          });
  connect(m_ui->m_updateDelta, &QPushButton::clicked,
          [=]()
          {
            m_scene->addDeltaRule(m_ui->m_numberForDelta->value());
          });
  //to chose input areas
  connect(m_ui->m_setAreaOne, &QPushButton::clicked,
          [=]()
          {
            m_scene->setAreaOne(m_ui->m_numXArea1->value(), m_ui->m_numYArea1->value(), m_ui->m_numSideXArea1->value(), m_ui->m_numSideYArea1->value(), m_ui->m_numValueArea1->value());
          });
  connect(m_ui->m_setAreaTwo, &QPushButton::clicked,
          [=]()
          {
            m_scene->setAreaTwo(m_ui->m_numXArea2->value(), m_ui->m_numYArea2->value(), m_ui->m_numSideXArea2->value(), m_ui->m_numSideYArea2->value(), m_ui->m_numValueArea2->value());
          });
  connect(m_ui->m_setAreaThree, &QPushButton::clicked,
          [=]()
          {
            m_scene->setAreaThree(m_ui->m_numXArea3->value(), m_ui->m_numYArea3->value(), m_ui->m_numSideXArea3->value(), m_ui->m_numSideYArea3->value(), m_ui->m_numValueArea3->value());
          });
  connect(m_ui->m_setAreaFour, &QPushButton::clicked,
          [=]()
          {
            m_scene->setAreaFour(m_ui->m_numXArea4->value(), m_ui->m_numYArea4->value(), m_ui->m_numSideXArea4->value(), m_ui->m_numSideYArea4->value(), m_ui->m_numValueArea4->value());
          });
  //to choose the maximum iteration to draw up to
  connect(m_ui->m_setMaxIteration, &QPushButton::clicked,
          [=]()
          {
            m_scene->setMaxIterations(m_ui->m_numMaxIterationIn->value());
          });
  //slider to choose the iteration to draw ie see the evolution of land
  connect(m_ui->m_iterationSlider, &QSlider::sliderMoved,
          [=]()
          {
            m_scene->setIterationSlider(m_ui->m_iterationSlider->value());
          });
}

MainWindow::~MainWindow()
{
    delete m_ui;
    delete m_scene;
}

