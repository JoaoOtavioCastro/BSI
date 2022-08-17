/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cAluno.h
 * Author: jotavio
 *
 * Created on 14 de agosto de 2022, 22:05
 */

#ifndef CALUNO_H
#define CALUNO_H

class cAluno {
public:
    cAluno();
    cAluno(const cAluno& orig);
    virtual ~cAluno();
    void printNotas();
private:
    int insertNotas(int i);
};

#endif /* CALUNO_H */

