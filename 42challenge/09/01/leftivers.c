

void    setOp(RPN &stack, std::string str)
{
    if (str == "+")
        stack.opp = ADD;
    if (str == "-")
        stack.opp = SUB;
    if (str == "*")
        stack.opp = MUL;
    if (str == "/")
        stack.opp = DIV;
}


int    ptr_function(int nb, int ptr, enum op opp)
{
    int rtn = nb;

    if (opp == ADD)
        rtn ;
    
    return rtn;
}
