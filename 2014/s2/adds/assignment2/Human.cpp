#include "Human.h"

Human::Human(char hum_input)
{
    set_human_choice(hum_input);
}

void Human::set_human_choice(char hum_choice){
    hum_element=hum_choice;
}

char Human::get_human_choice(){
    return hum_element;

}
