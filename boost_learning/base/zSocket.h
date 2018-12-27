//
// Created by zivqi on 2018/12/27.
//

#ifndef BOOST_LEARNING_ZSOCKET_H
#define BOOST_LEARNING_ZSOCKET_H

#include <boost/asio.hpp>
using namespace boost::asio;
using boost::system::error_code;
using ip::tcp;

class zSocket {
public:
    zSocket(io_service& iosev):_io_sev(iosev),_accept(iosev, tcp::endpoint(tcp::v4(),1000)) {}
private:
    io_service& _io_sev;
    ip::tcp::acceptor _accept;
};


#endif //BOOST_LEARNING_ZSOCKET_H
