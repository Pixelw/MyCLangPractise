//
// Created by carl- on 2020/2/13.
//

#ifndef DATASTRUCTURE_STATUS_BOOL_H
#define DATASTRUCTURE_STATUS_BOOL_H

typedef int Status;

#define TRUE 1
#define FALSE 0

#define OK 1
#define ERROR -1
#define OVERFLOW -2

//@depreciated
//_STATUS will print info on the console
#define _OK on_success()  //1
#define _ERROR on_error("") //-1
#define _OVERFLOW on_overflow("") //-2
#define _ERRNULL on_err_null("") //NULL

int on_success();

/**
 * 在return ERROR时，输出错误，换用红色字体(windows)
 * @return -1
 */
int on_error(char *err_msg);

int on_overflow(char *err_msg);

void *on_err_null(char *err_msg);

#endif //DATASTRUCTURE_STATUS_BOOL_H
