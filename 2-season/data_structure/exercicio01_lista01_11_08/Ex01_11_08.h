/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Ex01_11_08.h
 * Author: aluno
 *
 * Created on 11 de agosto de 2022, 10:15
 */

#ifndef EX01_11_08_H
#define EX01_11_08_H

class Ex01_11_08 {
public:
    Ex01_11_08();
    Ex01_11_08(const Ex01_11_08& orig);
    virtual ~Ex01_11_08();
    
    int x1=0, x2=0, y1, y2;
    void getData();
    float compute();
    void print(float result);
private:

};

#endif /* EX01_11_08_H */

