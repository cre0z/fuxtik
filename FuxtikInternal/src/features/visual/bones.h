#pragma once

enum Bones : int
{
    head = 6,
    neck0 = 5,
    
    spine0 = 4,
    spine1 = 2,
    
    pelvis = 0,
    
    armUpperLeft = 8,
    armLowerLeft = 9,
    handLeft = 10,
    
    armUpperRight = 13,
    armLowerRight = 14,
    handRight = 15,
    
    legUpperLeft = 22,
    legLowerLeft = 23,
    ankleLeft = 24,
    
    legUpperRight = 25,
    legLowerRight = 26,
    ankleRight = 27,
};

struct BoneConnection
{
    int bone1;
    int bone2;

    BoneConnection(int b1, int b2) : bone1(b1), bone2(b2) {}
};
