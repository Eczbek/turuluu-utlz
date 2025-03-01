#include "strings.hpp"

#include <thread>

namespace utlz
{
std::string get_thread_id()
{
    return to_string(std::this_thread::get_id());
}

}  // namespace utlz