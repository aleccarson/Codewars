double arithmetic(double a, double b, char* operator) 
{
    // cheese method of solving without if statements
    switch(operator[0])
    {
        case 'a':
            return a + b;
      
        case 's':
            return a - b;
            
        case 'm':
            return a * b;
            
        case 'd':
            return a / b;
    }  
}