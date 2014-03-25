//  
//  Random.h
//  QueueSystem
//
//  Create by Euryugasaki on 2014-03-25.
//  Copyright (c) 2014 Euryugasaki. All rights reserved.
// 

#ifndef __RANDOM_H_
#define __RANDOM_H_

// 生成[0,1)之间的一个随机值，均匀分布
double uniform();
// 返回服从泊松分布的随机变量的一个随机值
double getPoisson(double lambda);
// 返回服从负指数分布的随机变量的一个随机值
double getExponentail(double lambda);

#endif