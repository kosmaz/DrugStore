#ifndef WEBENGINE_HPP
#define WEBENGINE_HPP

#include <Wt/WApplication>

namespace dbo = Wt::Dbo;

class WebEngine : public Wt::WApplication
{
public:
    WebEngine(const Wt::WEnvironment&, const dbo::SqlConnectionPool*);
    ~WebEngine();
    void setupHomePage();
};

#endif // WEBENGINE_HPP
