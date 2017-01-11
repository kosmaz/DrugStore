#include "WebEngine.hpp"
#include <Wt/WEnvironment>
using namespace Wt;
using namespace std;

WebEngine::WebEngine(const WEnvironment& env, const Dbo::SqlConnectionPool*) :
    WApplication(env)
{

}

WebEngine::~WebEngine()
{

}


void WebEngine::setupHomePage()
{
    return;
}

