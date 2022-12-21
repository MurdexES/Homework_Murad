#include <iostream>
#include <string>
#include <vector>
#include "nlohmann/json.hpp"
#include "Master.h"
using namespace std;

int main()
{
    Master admin{};

    admin.main_menu();

    return 0;
}
