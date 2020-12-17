#include <QCoreApplication>
#include <iostream>
#include "rpc/client.h"

int main() {
    // Creating a client that connects to the localhost on port 8080
    rpc::client client("127.0.0.1", 8080);


    // Calling a function with paramters and converting the result to int
    client.set_timeout(1000);
    auto result = client.call("add", 2, 3).as<int>();
    std::cout << "The result is: " << result << std::endl;
    return 0;
}

