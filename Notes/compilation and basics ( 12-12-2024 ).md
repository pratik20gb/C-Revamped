## C++.Primer.5th.Edition_2013.pdf

int main(){
    return 0;
}



# The operating system runs a c++ program by calling main .

# A function definition has 4 elements 
## a return type
## a function name
## a parameter list enclosed in para
## a function body

# The main function is required to have a return type of int 

# The final part of function definition   - the function body is  a block of statement {}
{
    return 0;
}
### the return type of main is int and the return value is 0 , which is an int 

## status indicator 
### 0 - success
### 1 - a nonzero return indicates what kind of error occurred

### g++ prog1.cpp -o prog1
### prog1.exe
### the -o prog1 is an argument to the compiler and names the file in which to put the executable file 


# how to check The exit status code 
##  compile -> prog1.exe -> echo %ERRORLEVEL% 