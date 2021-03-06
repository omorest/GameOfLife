#include "../include/Board.h"

//-------- Constructor----------
Board::Board(int rows, int cols):
  rows_(rows),
  cols_(cols) 
{
  table_.resize(rows + 2);

  for (int i = 0; i < table_.size(); i++) {
    table_[i].resize(cols_ + 2);

    for (int j = 0; j < table_[i].size(); j++) 
      table_[i][j] = new Cell(i,j);    
  }      
}



//-------- Destructor----------
Board::~Board() {
  for (int i = 0; i < table_.size(); i++) {
    for (int j = 0; j < table_[i].size(); j++) {
      delete(table_[i][j]);
    }
  } 
}



//-------- Getters ---------
int Board::getRows() {
  return rows_;
}



int Board::getCols() {
  return cols_;
}



//------------- Methods -------------
void Board::play(int turns) {
  int i = 0;

  cout << "\nEstado inicial del tablero" << endl;
  write();
  cout << endl << endl;

  while (i < turns) {        
    cout << endl;
    cout << "Turno " << i + 1 << endl;
    
    for (int i = 1; i < table_.size() - 1; i++) {
      for (int j = 1; j < table_[i].size() - 1; j++){
        table_[i][j]->countNeightbors(*this);    
      }
    }  

    for (int i = 1; i < table_.size() - 1; i++) {
      for (int j = 1; j < table_[i].size() - 1; j++){
        int newType = table_[i][j]->updateState();
        table_[i][j] = table_[i][j]->createCelula(newType, i, j); 
      }  
    }  

    std::this_thread::sleep_for (std::chrono::seconds(1));
    write();

    i++;    
  }
}



void Board::write() {
  for (int i = 1; i < rows_ + 1; i++) {
    for (int j = 1; j < cols_ + 1; j++) {
      table_[i][j]->show(cout);      
    }
    cout << endl;
  }
}



void Board::activateCell(int type, int row, int col) {
  table_[row][col] = table_[row][col]->createCelula(type, row, col);  
}



//----------- Sobrecarga operador -----------
vector<Cell*> Board::operator[](const int position) {
  return table_[position];
}