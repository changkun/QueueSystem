//  
//  ServiceWindow.h
//  QueueSystem
//
//  Create by Euryugasaki on 2014-03-24.
//  Copyright (c) 2014 Euryugasaki. All rights reserved.
// 

#ifndef __SERVICE_WINDOW_H_
#define __SERVICE_WINDOW_H_

#include "Node.h"

typedef struct ServiceWindow
{
    Customer customer;  // 正在服务的顾客
    int flag;           // 是否被占用，0表示当前窗口是空闲的，1表示当前窗口是被占用的
} ServiceWindow;

// 服务窗口的基本操作
void initServiceWindows(ServiceWindow* &windows);
void destroyWindows(ServiceWindow* &windows);
int idleWindow(ServiceWindow* &windows);

#endif