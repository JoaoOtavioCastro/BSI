/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cFabrica.h
 * Author: jotavio
 *
 * Created on 15 de agosto de 2022, 21:09
 */

#ifndef CFABRICA_H
#define CFABRICA_H

class cFabrica {
public:
    cFabrica();
    cFabrica(const cFabrica& orig);
    virtual ~cFabrica();
    int insertSeg();
    int computeMin(int seg);
    int computeHour(int seg);
    int computeSeg(int seg);
    void printFabrica();
private:
    int seg;
};

#endif /* CFABRICA_H */

