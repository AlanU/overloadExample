#include "college.h"

int main(int argc, char *argv[])
{
    college obj("Test U");
    obj.show();
    obj.show(3);

    obj.setName("Diffrent Name");
    obj.show();
    obj.show(3);
}
