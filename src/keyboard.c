#include <stdio.h>
#include <stdlib.h>

#include "config_bits.h"
#include "keyboard_control.h"

int main(int argc, char** argv)
{
    keyboards_ansel_setup();
    
    while (1)
    {
        buttons_procedure_interface();
    }
    
    return (EXIT_SUCCESS);
}

