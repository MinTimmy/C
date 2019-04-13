/**
 * Project Untitled
 */


#ifndef _LOG IN_H
#define _LOG IN_H

class log in {
public: 
    
void log in();
    
void _conn();
    
MYSQL * get_connection();
    
int get_sno();
private: 
    MYSQL * conn;
    MYSQL_ROW row;
    MYSQL_RES * res;
    string username;
    string password;
    int sno;
};

#endif //_LOG IN_H