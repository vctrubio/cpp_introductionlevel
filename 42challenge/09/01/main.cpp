#include <sstream>
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
    //std::cout << "Returning--- " << rtn << std::endl;
    return (rtn);
}

std::vector<std::string> create_stack(char **av)
{
    std::vector<std::string> stack;
    while (*av)
    {
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
            i = doStack(stack, *av);
        else
            stack.push_back(std::stoi(*av));
        av++;
    }
/*    std::cout << ":....FINAL:\n";
    printStack(stack);
    std::cout << ":....FINALISED:\n";
*/
	std::cout << GREEN << i << ENDC << std::endl;
}

bool isDigit(const std::string& str)
{
    return str.length() == 1 && isdigit(str[0]);
}

std::vector<std::string>	exchange(char **av)
{
	std::vector<std::string>	rtn;
	std::stringstream			tmp;
	std::string					whi;
	char delimeter 				= 32;

	while (*av)
	{
		//if spaces, split in spaces and push to the back of vector.
		tmp << *av;
		while (std::getline(tmp, whi, delimeter))
			rtn.push_back(whi);
		tmp.str("");
		tmp.clear();
		av++;
	}
	
	rtn.push_back(tmp.str());
	return rtn;
}


std::vector<std::string>    validate(std::vector<std::string> av)
{
	std::vector<std::string>	rtn;
	std::vector<std::string>::iterator it = av.begin();

	while (it != av.end())
	{
		if (!isOperation((*it)) && !isDigit((*it)))
		{
			std::cout << "Parsing Errorn - Check Numbers / Operations \n" << ENDC;
			exit(101);
		}
		rtn.push_back(*it);
		it++;
	}
	if (!isOperation(rtn.back()))
	{
		std::cout << "Last char ≠ RPN\n";
		exit(2);
	}
	return rtn;
}


int main(int ac, char **av)
{
 	std::vector<std::string> str;

    if (ac == 1)
        return -1;
    else
    {
		str = exchange(av + 1);
		str.pop_back();
        if (str.empty())
            return -1;
		validate(str);
    }

	std::cout << "GOOD TO GO ON:\n";
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
