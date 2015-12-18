/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file log.cpp
 * @author liruihao(com@baidu.com)
 * @date 2015/12/16 11:48:45
 * @brief 
 *  
 **/

#include "brocbuild/log/log.h"

log::log():
log_file(),
log_dir()
{
}

log::~log()
{
}

void log::set_log_file(std::string filename)
{
    log_file = filename;
}

std::string log::get_log_file()
{
    return log_file;
}

void log::set_log_dir(std::string dirname)
{
    log_dir = dirname;
}

std::string log::get_log_dir()
{
    return log_dir;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
