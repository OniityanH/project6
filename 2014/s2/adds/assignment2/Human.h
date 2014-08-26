#ifndef HUMAN_H
#define HUMAN_H


class Human
{
    public:
        Human(char hum_input);
        void set_human_choice(char hum_choice);
        char get_human_choice();
    private:
        char hum_element;
};

#endif // HUMAN_H
