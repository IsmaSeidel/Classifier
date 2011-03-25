#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showFileDialog()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    emit fileSelected(fileName);
}


/*
Implementar um programa que satisfa�a as seguintes propriedades:

    O programa deve ser capaz de gerar 4 tipos de conjuntos de dados:
        Um conjunto de dados 2D (duas vari�veis apenas).
        Um conjunto de dados ND (com um grande n�mero de vari�veis)
        Conjuntos de dados de espiral simples.
        Conjuntos de dados de espiral dupla.
    Euclidiana entre padr�es de dimens�es arbitr�rias, de maneira que possam
    ser usados para todos os conjuntos de dados gerados.
    Implemente o algoritmo de NN (Nearest Neighbour) e kNN (k-Nearest
    Neighbours) e teste em todos os 4 conjuntos de dados.

Observa��es:

    Os dados 2D e ND podem ser utilizados a partir de conjuntos de dados
    dispon�veis nos sites sugeridos.
Ismael Seidel dit (16:32)
Os dados em espiral devem ser gerados a partir de algoritmos que voc�
mesmo vai implementar. Inclua no algoritmo a possibilidade de introduzir
ru�do na gera��o dos dados (atrav�s, por exemplo, de uma vari�vel aleat�ria
que modifica levemente o comprimento do raio gerado para o pr�ximo
ponto).
Observe que na espiral dupla cada bra�o da espiral em seu total
representa uma classe.
    O programa deve ser capaz de desenhar os padr�es na tela com cores
    distintas para cada classe.
    Deve ser poss�vel entrar com padr�es arbitr�rios (2D e ND) para que o
    programa os classifique.
*/
