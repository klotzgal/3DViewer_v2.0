﻿#include "stylehelper.h"

QString StyleHelper::getButtonDarkStyle() {
  return  "border-radius: 5%;"
          "color: transparent;"
          "background-color: #222324;";
}

QString StyleHelper::getFrameDarkStyle() {
  return "QFrame {"
         "   background-color: #222324;"
         "   border: 1px solid #323334;"
         "}"
         "QRadioButton {"
         "   background-color: #222324;"
         "}"
         "QSlider {"
         "   background-color: #222324;"
         "}"
         "QComboBox {"
         "   padding: 5px;"
         "}"
         "QComboBox::hover {"
         "   border: 1px solid #323334;"
         "}"
         "QSpinBox {"
         "   background-color: #1C1D1E;"
         "   padding: 5px;"
         "}"
         "QSpinBox::hover {"
         "   border: 1px solid #323334;"
         "}"
         "QSpinBox::focus {"
         "   border: 1px solid #017BFF;"
         "}"
         "QTabBar {"
         "   background-color: #222324;"
         "}"
         "QLabel {"
         "   background: transparent;"
         "   border: none;"
         "}";
}

QString StyleHelper::getDarkGLframe() {
  return "QFrame {"
         "    background-color: #222324;"
         "    border: 1px solid #323334;"
         "    border-radius: 8px;"
         "}";
}

QString StyleHelper::getButtonLightStyle() {
  return  "border-radius: 5%;"
          "color: transparent;"
          "background-color: #E2E3E5;";
}

QString StyleHelper::getFrameLightStyle() {
  return "QFrame {"
         "   background-color: #E2E3E5;"
         "   border: 1px solid #D3D3D5;"
         "   color: #242424;"
         "}"
         "QRadioButton {"
         "   background-color: #E2E3E5;"
         "   color: #242424;"
         "}"
         "QSlider {"
         "   background-color: #E2E3E5;"
         "}"
         "QComboBox {"
         "   padding: 5px;"
         "}"
         "QComboBox::hover {"
         "   border: 1px solid #D3D3D5;"
         "}"
         "QSpinBox {"
         "   background-color: #EAEBED;"
         "   padding: 5px;"
         "}"
         "QSpinBox::hover {"
         "   border: 1px solid #D3D3D5;"
         "}"
         "QSpinBox::focus {"
         "   border: 1px solid #017BFF;"
         "}"
         "QTabBar {"
         "   background-color: #E2E3E5;"
         "}"
         "QTabBar::tab {"
         "   color: #242424;"
         "}"
         "QLabel {"
         "   background: transparent;"
         "   border: none;"
         "}";
}

QString StyleHelper::getLightGLframe() {
  return "QFrame {"
         "    background-color: #E2E3E5;"
         "    border: 1px solid #D3D3D5;"
         "    border-radius: 8px;"
         "}";
}
