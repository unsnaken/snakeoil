#pragma once

#include "Settings.h"
#include "Macro.h"
#include "Templates.h"

#include <algorithm>
#include <iostream>
#include <cassert>
#include <ctime>
#include <chrono>
#include <thread>
#include <vector>
#include <map>
#include <memory>

#include <conio.h>

#ifdef PDCURESES_ENABLED
#	pragma comment(lib, "pdcurses.lib")
#endif