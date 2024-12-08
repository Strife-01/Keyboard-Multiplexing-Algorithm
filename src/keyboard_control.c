#include "keyboard_control.h"
#include "utils.h"
#include <xc.h>

void set_pin_c4_output (void);
void set_pin_c3_output (void);
void set_pin_c2_output (void);
void set_pin_c1_output (void);
void set_pin_r1_output (void);
void set_pin_r2_output (void);
void set_pin_r3_output (void);
void set_pin_r4_output (void);

void set_pin_c4_input (void);
void set_pin_c3_input (void);
void set_pin_c2_input (void);
void set_pin_c1_input (void);
void set_pin_r1_input (void);
void set_pin_r2_input (void);
void set_pin_r3_input (void);
void set_pin_r4_input (void);

void set_pin_c4_0 (void);
void set_pin_c3_0 (void);
void set_pin_c2_0 (void);
void set_pin_c1_0 (void);
void set_pin_r1_0 (void);
void set_pin_r2_0 (void);
void set_pin_r3_0 (void);
void set_pin_r4_0 (void);

void set_pin_c4_1 (void);
void set_pin_c3_1 (void);
void set_pin_c2_1 (void);
void set_pin_c1_1 (void);
void set_pin_r1_1 (void);
void set_pin_r2_1 (void);
void set_pin_r3_1 (void);
void set_pin_r4_1 (void);

unsigned char get_pin_c4_state (void);
unsigned char get_pin_c3_state (void);
unsigned char get_pin_c2_state (void);
unsigned char get_pin_c1_state (void);
unsigned char get_pin_r1_state (void);
unsigned char get_pin_r2_state (void);
unsigned char get_pin_r3_state (void);
unsigned char get_pin_r4_state (void);

void keyboards_ansel_setup (void)
{
    ANSELC = ANSELC & ~0x04;
    ANSELD = ANSELD & ~0xFD;
}

void set_pin_c4_output (void)
{
    WPUD = WPUD & ~PIN_C4;
    TRISD = TRISD & ~PIN_C4;
}
void set_pin_c3_output (void)
{
    WPUD = WPUD & ~PIN_C3;
    TRISD = TRISD & ~PIN_C3;
}
void set_pin_c2_output (void)
{
    WPUD = WPUD & ~PIN_C2;
    TRISD = TRISD & ~PIN_C2;
}
void set_pin_c1_output (void)
{
    WPUD = WPUD & ~PIN_C1;
    TRISD = TRISD & ~PIN_C1;
}
void set_pin_r1_output (void)
{
    WPUD = WPUD & ~PIN_R1;
    TRISD = TRISD & ~PIN_R1;
}
void set_pin_r2_output (void)
{
    WPUD = WPUD & ~PIN_R2;
    TRISD = TRISD & ~PIN_R2;
}
void set_pin_r3_output (void)
{
    WPUC = WPUC & ~PIN_R3;
    TRISC = TRISC & ~PIN_R3;
}
void set_pin_r4_output (void)
{
    WPUD = WPUD & ~PIN_R4;
    TRISD = TRISD & ~PIN_R4;
}

void set_pin_c4_input (void)
{
    TRISD = TRISD | PIN_C4;
    WPUD = WPUD | PIN_C4;
}
void set_pin_c3_input (void)
{
    TRISD = TRISD | PIN_C3;
    WPUD = WPUD | PIN_C3;
}
void set_pin_c2_input (void)
{
    TRISD = TRISD | PIN_C2;
    WPUD = WPUD | PIN_C2;
}
void set_pin_c1_input (void)
{
    TRISD = TRISD | PIN_C1;
    WPUD = WPUD | PIN_C1;
}
void set_pin_r1_input (void)
{
    TRISD = TRISD | PIN_R1;
    WPUD = WPUD | PIN_R1;
}
void set_pin_r2_input (void)
{
    TRISD = TRISD | PIN_R2;
    WPUD = WPUD | PIN_R2;
}
void set_pin_r3_input (void)
{
    TRISC = TRISC | PIN_R3;
    WPUC = WPUC | PIN_R3;
}
void set_pin_r4_input (void)
{
    TRISD = TRISD | PIN_R4;
    WPUD = WPUD | PIN_R4;
}

unsigned char get_pin_c4_state (void)
{
    unsigned char output;
    
    if ((PORTD & PIN_C4) == PIN_C4)
    {
        output = 1;
    }
    else
    {
        output = 0;
    }
    
    return output;
}
unsigned char get_pin_c3_state (void)
{
    unsigned char output;
    
    if ((PORTD & PIN_C3) == PIN_C3)
    {
        output = 1;
    }
    else
    {
        output = 0;
    }
    
    return output;
}
unsigned char get_pin_c2_state (void)
{
    unsigned char output;
    
    if ((PORTD & PIN_C2) == PIN_C2)
    {
        output = 1;
    }
    else
    {
        output = 0;
    }
    
    return output;
}
unsigned char get_pin_c1_state (void)
{
    unsigned char output;
    
    if ((PORTD & PIN_C1) == PIN_C1)
    {
        output = 1;
    }
    else
    {
        output = 0;
    }
    
    return output;
}
unsigned char get_pin_r1_state (void)
{
    unsigned char output;
    
    if ((PORTD & PIN_R1) == PIN_R1)
    {
        output = 1;
    }
    else
    {
        output = 0;
    }
    
    return output;
}
unsigned char get_pin_r2_state (void)
{
    unsigned char output;
    
    if ((PORTD & PIN_R2) == PIN_R2)
    {
        output = 1;
    }
    else
    {
        output = 0;
    }
    
    return output;
}
unsigned char get_pin_r3_state (void)
{
    unsigned char output;
    
    if ((PORTC & PIN_R3) == PIN_R3)
    {
        output = 1;
    }
    else
    {
        output = 0;
    }
    
    return output;
}
unsigned char get_pin_r4_state (void)
{
    unsigned char output;
    
    if ((PORTD & PIN_R4) == PIN_R4)
    {
        output = 1;
    }
    else
    {
        output = 0;
    }
    
    return output;
}

void set_pin_c4_0 (void)
{
    PORTD = PORTD & ~PIN_C4;
}
void set_pin_c3_0 (void)
{
    PORTD = PORTD & ~PIN_C3;
}
void set_pin_c2_0 (void)
{
    PORTD = PORTD & ~PIN_C2;
}
void set_pin_c1_0 (void)
{
    PORTD = PORTD & ~PIN_C1;
}
void set_pin_r1_0 (void)
{
    PORTD = PORTD & ~PIN_R1;
}
void set_pin_r2_0 (void)
{
    PORTD = PORTD & ~PIN_R2;
}
void set_pin_r3_0 (void)
{
    PORTC = PORTC & ~PIN_R3;
}
void set_pin_r4_0 (void)
{
    PORTD = PORTD & ~PIN_R4;
}

void set_pin_c4_1 (void)
{
    PORTD = PORTD | PIN_C4;
}
void set_pin_c3_1 (void)
{
    PORTD = PORTD | PIN_C3;
}
void set_pin_c2_1 (void)
{
    PORTD = PORTD | PIN_C2;
}
void set_pin_c1_1 (void)
{
    PORTD = PORTD | PIN_C1;
}
void set_pin_r1_1 (void)
{
    PORTD = PORTD | PIN_R1;
}
void set_pin_r2_1 (void)
{
    PORTD = PORTD | PIN_R2;
}
void set_pin_r3_1 (void)
{
    PORTC = PORTC | PIN_R3;
}
void set_pin_r4_1 (void)
{
    PORTD = PORTD | PIN_R4;
}

void set_line_pin_level (unsigned char line_index)
{
    switch (line_index)
    {
        case PIN_R1_INDEX:
        {
            set_pin_r1_0();
            set_pin_r2_1();
            set_pin_r3_1();
            set_pin_r4_1();
        }
        break;
        
        case PIN_R2_INDEX:
        {
            set_pin_r1_1();
            set_pin_r2_0();
            set_pin_r3_1();
            set_pin_r4_1();
        }
        break;
        
        case PIN_R3_INDEX:
        {
            set_pin_r1_1();
            set_pin_r2_1();
            set_pin_r3_0();
            set_pin_r4_1();
        }
        break;
        
        case PIN_R4_INDEX:
        {
            set_pin_r1_1();
            set_pin_r2_1();
            set_pin_r3_1();
            set_pin_r4_0();
        }
        break;
    }
}

void set_column_pin_level (unsigned char column_index)
{
    switch (column_index)
    {
        case PIN_C1_INDEX:
        {
            set_pin_c1_0();
            set_pin_c2_1();
            set_pin_c3_1();
            set_pin_c4_1();
        }
        break;
        
        case PIN_C2_INDEX:
        {
            set_pin_c1_1();
            set_pin_c2_0();
            set_pin_c3_1();
            set_pin_c4_1();
        }
        break;
        
        case PIN_C3_INDEX:
        {
            set_pin_c1_1();
            set_pin_c2_1();
            set_pin_c3_0();
            set_pin_c4_1();
        }
        break;
        
        case PIN_C4_INDEX:
        {
            set_pin_c1_1();
            set_pin_c2_1();
            set_pin_c3_1();
            set_pin_c4_0();
        }
        break;
    }
}

void set_line_pins_as_input (void)
{
    set_pin_r1_input();
    set_pin_r2_input();
    set_pin_r3_input();
    set_pin_r4_input();
}
void set_line_pins_as_output (void)
{
    set_pin_r1_output();
    set_pin_r2_output();
    set_pin_r3_output();
    set_pin_r4_output();
}

void set_column_pins_as_input (void)
{
    set_pin_c1_input();
    set_pin_c2_input();
    set_pin_c3_input();
    set_pin_c4_input();
}
void set_column_pins_as_output (void)
{
    set_pin_c1_output();
    set_pin_c2_output();
    set_pin_c3_output();
    set_pin_c4_output();
}

unsigned char get_line_pin_level (unsigned char line_index)
{
    unsigned char output;
    
    switch (line_index)
    {
        case PIN_R1_INDEX:
            output = get_pin_r1_state();
            break;
            
        case PIN_R2_INDEX:
            output = get_pin_r2_state();
            break;
            
        case PIN_R3_INDEX:
            output = get_pin_r3_state();
            break;
            
        case PIN_R4_INDEX:
            output = get_pin_r4_state();
            break;
    }
    
    return output;
}
unsigned char get_column_pin_level (unsigned char column_index)
{
    unsigned char output;
    
    switch (column_index)
    {
        case PIN_C1_INDEX:
            output = get_pin_c1_state();
            break;
            
        case PIN_C2_INDEX:
            output = get_pin_c2_state();
            break;
            
        case PIN_C3_INDEX:
            output = get_pin_c3_state();
            break;
            
        case PIN_C4_INDEX:
            output = get_pin_c4_state();
            break;
    }
    
    return output;
}

unsigned char get_button_pressed_line_to_column (unsigned char line_index, unsigned char column_index)
{
    unsigned char output = BUTTON_DEFAULT;
    
    switch (line_index)
    {
        case PIN_R1_INDEX:
        {
            switch (column_index)
            {
                case PIN_C1_INDEX:
                    output = BUTTON_S1_INDEX;
                    break;
                    
                case PIN_C2_INDEX:
                    output = BUTTON_S2_INDEX;
                    break;
                    
                case PIN_C3_INDEX:
                    output = BUTTON_S3_INDEX;
                    break;
                    
                case PIN_C4_INDEX:
                    output = BUTTON_S4_INDEX;
                    break;
                    
                default:
                    output = BUTTON_DEFAULT;
                    break;
            }
        }
        break;
        
        case PIN_R2_INDEX:
        {
            switch (column_index)
            {
                case PIN_C1_INDEX:
                    output = BUTTON_S5_INDEX;
                    break;
                    
                case PIN_C2_INDEX:
                    output = BUTTON_S6_INDEX;
                    break;
                    
                case PIN_C3_INDEX:
                    output = BUTTON_S7_INDEX;
                    break;
                    
                case PIN_C4_INDEX:
                    output = BUTTON_S8_INDEX;
                    break;
                    
                default:
                    output = BUTTON_DEFAULT;
                    break;
            }
        }
        break;
        
        case PIN_R3_INDEX:
        {
            switch (column_index)
            {
                case PIN_C1_INDEX:
                    output = BUTTON_S9_INDEX;
                    break;
                    
                case PIN_C2_INDEX:
                    output = BUTTON_S10_INDEX;
                    break;
                    
                case PIN_C3_INDEX:
                    output = BUTTON_S11_INDEX;
                    break;
                    
                case PIN_C4_INDEX:
                    output = BUTTON_S12_INDEX;
                    break;
                    
                default:
                    output = BUTTON_DEFAULT;
                    break;
            }
        }
        break;
        
        case PIN_R4_INDEX:
        {
            switch (column_index)
            {
                case PIN_C1_INDEX:
                    output = BUTTON_S13_INDEX;
                    break;
                    
                case PIN_C2_INDEX:
                    output = BUTTON_S14_INDEX;
                    break;
                    
                case PIN_C3_INDEX:
                    output = BUTTON_S15_INDEX;
                    break;
                    
                case PIN_C4_INDEX:
                    output = BUTTON_S16_INDEX;
                    break;
                    
                default:
                    output = BUTTON_DEFAULT;
                    break;
            }
        }
        break;
    }
    
    return output;
}

unsigned char get_button_pressed_column_to_line (unsigned char line_index, unsigned char column_index)
{
    unsigned char output;
    
    switch (column_index)
    {
        case PIN_C1_INDEX:
        {
            switch (line_index)
            {
                case PIN_R1_INDEX:
                    output = BUTTON_S1_INDEX;
                    break;
                    
                case PIN_R2_INDEX:
                    output = BUTTON_S5_INDEX;
                    break;
                    
                case PIN_R3_INDEX:
                    output = BUTTON_S9_INDEX;
                    break;
                    
                case PIN_R4_INDEX:
                    output = BUTTON_S13_INDEX;
                    break;
                    
                default:
                    output = BUTTON_DEFAULT;
                    break;
            }
        }
        break;
        
        case PIN_C2_INDEX:
        {
            switch (line_index)
            {
                case PIN_R1_INDEX:
                    output = BUTTON_S2_INDEX;
                    break;
                    
                case PIN_R2_INDEX:
                    output = BUTTON_S6_INDEX;
                    break;
                    
                case PIN_R3_INDEX:
                    output = BUTTON_S10_INDEX;
                    break;
                    
                case PIN_R4_INDEX:
                    output = BUTTON_S14_INDEX;
                    break;
                    
                default:
                    output = BUTTON_DEFAULT;
                    break;
            }
        }
        break;
        
        case PIN_C3_INDEX:
        {
            switch (line_index)
            {
                case PIN_R1_INDEX:
                    output = BUTTON_S3_INDEX;
                    break;
                    
                case PIN_R2_INDEX:
                    output = BUTTON_S7_INDEX;
                    break;
                    
                case PIN_R3_INDEX:
                    output = BUTTON_S11_INDEX;
                    break;
                    
                case PIN_R4_INDEX:
                    output = BUTTON_S15_INDEX;
                    break;
                    
                default:
                    output = BUTTON_DEFAULT;
                    break;
            }
        }
        break;
        
        case PIN_C4_INDEX:
        {
            switch (line_index)
            {
                case PIN_R1_INDEX:
                    output = BUTTON_S4_INDEX;
                    break;
                    
                case PIN_R2_INDEX:
                    output = BUTTON_S8_INDEX;
                    break;
                    
                case PIN_R3_INDEX:
                    output = BUTTON_S12_INDEX;
                    break;
                    
                case PIN_R4_INDEX:
                    output = BUTTON_S16_INDEX;
                    break;
                    
                default:
                    output = BUTTON_DEFAULT;
                    break;
            }
        }
        break;
    }
    
    return output;
}

void update_buttons_checker_line_to_column (unsigned char line_index, unsigned char column_index)
{
    unsigned char line_level_value;
    unsigned char column_level_value;
    unsigned char button = BUTTON_DEFAULT;
    
    line_level_value = get_line_pin_level(line_index);
    column_level_value = get_column_pin_level(column_index);
    
    if ((line_level_value == BUTTON_PRESSED_VALUE) && (column_level_value == BUTTON_PRESSED_VALUE))
    {
        button = get_button_pressed_line_to_column(line_index, column_index);
        
        switch (button)
        {
            case BUTTON_S1_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S1_PRESSED;
                break;
                
            case BUTTON_S2_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S2_PRESSED;
                break;
                
            case BUTTON_S3_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S3_PRESSED;
                break;
                
            case BUTTON_S4_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S4_PRESSED;
                break;
                
            case BUTTON_S5_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S5_PRESSED;
                break;
                
            case BUTTON_S6_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S6_PRESSED;
                break;
             
            case BUTTON_S7_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S7_PRESSED;
                break;
                
            case BUTTON_S8_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S8_PRESSED;
                break;
                
            case BUTTON_S9_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S9_PRESSED;
                break;
                
            case BUTTON_S10_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S10_PRESSED;
                break;
                
            case BUTTON_S11_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S11_PRESSED;
                break;
            
            case BUTTON_S12_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S12_PRESSED;
                break;
            
            case BUTTON_S13_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S13_PRESSED;
                break;
            
            case BUTTON_S14_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S14_PRESSED;
                break;
                
            case BUTTON_S15_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S15_PRESSED;
                break;
                
            case BUTTON_S16_INDEX:
                buttons_pressed_indicator_line_to_column = buttons_pressed_indicator_line_to_column | BUTTON_S16_PRESSED;
                break;
            
            case BUTTON_DEFAULT:
                break;
        }
    }
}

void update_buttons_checker_column_to_line (unsigned char line_index, unsigned char column_index)
{
    unsigned char line_level_value;
    unsigned char column_level_value;
    unsigned char button = BUTTON_DEFAULT;
    
    column_level_value = get_column_pin_level(column_index);
    line_level_value = get_line_pin_level(line_index);
    
    if ((line_level_value == BUTTON_PRESSED_VALUE) && (column_level_value == BUTTON_PRESSED_VALUE))
    {
        button = get_button_pressed_column_to_line(line_index, column_index);
        
        switch (button)
        {
            case BUTTON_S1_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S1_PRESSED;
                break;
                
            case BUTTON_S2_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S2_PRESSED;
                break;
                
            case BUTTON_S3_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S3_PRESSED;
                break;
                
            case BUTTON_S4_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S4_PRESSED;
                break;
                
            case BUTTON_S5_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S5_PRESSED;
                break;
                
            case BUTTON_S6_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S6_PRESSED;
                break;
             
            case BUTTON_S7_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S7_PRESSED;
                break;
                
            case BUTTON_S8_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S8_PRESSED;
                break;
                
            case BUTTON_S9_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S9_PRESSED;
                break;
                
            case BUTTON_S10_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S10_PRESSED;
                break;
                
            case BUTTON_S11_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S11_PRESSED;
                break;
            
            case BUTTON_S12_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S12_PRESSED;
                break;
            
            case BUTTON_S13_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S13_PRESSED;
                break;
            
            case BUTTON_S14_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S14_PRESSED;
                break;
                
            case BUTTON_S15_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S15_PRESSED;
                break;
                
            case BUTTON_S16_INDEX:
                buttons_pressed_indicator_column_to_line = buttons_pressed_indicator_column_to_line | BUTTON_S16_PRESSED;
                break;
                
            case BUTTON_DEFAULT:
                break;
        }
    }
}

void check_line_to_column_pins (void)
{
    unsigned char line_index;
    unsigned char column_index;
    
    set_line_pins_as_output();
    set_column_pins_as_input();
    
    for (line_index = 0; line_index < LINES; line_index++)
    {
        set_line_pin_level(line_index);
        
        for (column_index = 0; column_index < COLUMNS; column_index++)
        {
            update_buttons_checker_line_to_column(line_index, column_index);
        }
    }
}

void check_column_to_line_pins (void)
{
    unsigned char line_index;
    unsigned char column_index;
    
    set_column_pins_as_output();
    set_line_pins_as_input();
    
    for (column_index = 0; column_index < COLUMNS; column_index++)
    {
        set_column_pin_level(column_index);
        
        for (line_index = 0; line_index < LINES; line_index++)
        {
            update_buttons_checker_column_to_line(line_index, column_index);
        }
    }
}

void reset_buttons_pressed (void)
{
    PORTD = PORTD & ~PORTD_PINS;
    PORTC = PORTC & ~PORTC_PINS;
    
    WPUD = WPUD & ~PORTD_PINS;
    WPUC = WPUC & ~PORTC_PINS;
    
    buttons_pressed_indicator_line_to_column = 0x0000;
    buttons_pressed_indicator_column_to_line = 0x0000;
    buttons_pressed = 0x0000;
}
void set_buttons_pressed_indicator (void)
{
    buttons_pressed = buttons_pressed_indicator_line_to_column & buttons_pressed_indicator_column_to_line;
}

void buttons_procedure_interface (void)
{
        reset_buttons_pressed();
        check_line_to_column_pins();
        busy_wait(5000);
        check_column_to_line_pins();
        set_buttons_pressed_indicator();
}