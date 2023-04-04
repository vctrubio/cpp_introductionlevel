// Reverse Polish Notation
// Make a stack, wait for an operator, perfomr the stack to get a new stack value
#include "Headers.hpp"
#include "RPN.hpp"

int doAdd(std::vector<int> &stack)
{
    int rtn = 0;
    for (std::vector<int>::iterator it = stack.begin(); it != stack.end(); it++)
    {
        rtn += *it;
    }
    return rtn;
}

int doSub(std::vector<int> &stack, int flag)
{
    int rtn = 0;
    for (std::vector<int>::iterator it = stack.begin(); it != stack.end(); it++)
    {
        if (flag && it == stack.begin())
            rtn += *it;
        else
            rtn += -(*it);
    }
    return rtn;
}

int doDiv(std::vector<int> &stack)
{
    int rtn;
    for (std::vector<int>::iterator it = stack.begin(); it != stack.end(); it++)
    {
        if (it == stack.begin())
            rtn = *it;
        else
            rtn /= *it;
    }
    return rtn;
}

int doMul(std::vector<int> &stack)
{
    int rtn = 1;
    for (std::vector<int>::iterator it = stack.begin(); it != stack.end(); it++)
    {
        rtn *= *it;
    }
    return rtn;
}


int isOperation(std::string str)
{
    if (str == "+" || str == "-" || str == "*" || str == "/")
        return 1;
    return 0;
}

void    printStack(std::vector<int> &stack)
{
    for (std::vector<int>::iterator it = stack.begin(); it != stack.end(); it++)
        std::cout << "it: " << *it << std::endl;
    std::cout << "COMPLETE:....\n";
}

int doStack(std::vector<int> &stack, std::string str)
{
    int rtn;
    static int i = 0;

    if (str == "+")
        rtn = doAdd(stack);
    if (str == "-")
        rtn = doSub(stack, i);
    if (str == "*")
        rtn = doMul(stack);
    if (str == "/")
        rtn = doDiv(stack);
    stack.clear();
    stack.push_back(rtn);
    i++;
    std::cout << "Returning--- " << rtn << std::endl;
    return (rtn);
}

bool    validate_av(std::string av)
{
    return true;
}


std::vector<std::string> create_stack(char **av)
{
    std::vector<std::string> stack;
    while (*av)
    {
        if (!validate_av(*av))
            throw std::out_of_range("Out of context");
        stack.push_back(*av);
        av++;
    }
    return stack;
}

void init_stack(char **av)
{
    // std::cout << "init_stack on_::" << *av << std::endl;
    std::vector<int> stack;

    int i = 0;
    
    while (*av)
    {
        if (isOperation(*av))
            i += doStack(stack, *av);
        else
            stack.push_back(std::stoi(*av));
        av++;
    }
    std::cout << ":....FINAL:\n";
    printStack(stack);
    std::cout << ":....FINALISED:\n";
}

bool isDigit(char *str)
{
    int i = -1;
    while(str[++i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            continue;
        break;
    }
    // if (str[i] == 0  && i < 2) //• The numbers used in this operation will always be less than 10.
    //     return true;
    return true;
}


bool    validate(char **av)
{
    while (*av)
    {
        if (!isOperation(*av) && !isDigit(*av))
        {
            std::cout << "Parsing Errorn\n";
            return false;
        }
        av++;
    }
    if (*(--av))
    {
        if (!isOperation(*av))
        {
            std::cout << "Last char ≠ RPN\n";
            return false;
        }
    }
    return true;
}


int main(int ac, char **av)
{
 
    if (ac == 1)
        return -1;
    else
    {
        if (!validate(av + 1))
            return -1;
    }
    try 
    {
        init_stack(av + 1);
    }
    catch (std::exception &e)
	{
		std::cerr << "Parsing Catch: " << e.what() << std::endl;
	}
    return 1;
}
