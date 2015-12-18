/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file log.h
 * @author liruihao(com@baidu.com)
 * @date 2015/12/16 11:46:12
 * @brief 
 *  
 **/




#ifndef  BROCBUILD_LOG_LOG_H
#define  BROCBUILD_LOG_LOG_H

#include <string>

class log {
    public:
        log();
        ~log();
    public:
        void set_log_file(std::string &filename);
        std::string get_log_file();
        void set_log_dir(std::string &dirname);
        std::string get_log_dir();
    private:
        std::string log_file;
        std::string log_dir;
};

#endif  //__LOG_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
