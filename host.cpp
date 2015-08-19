#include "host.h"

void Host::addVHost (listHosts host) {
    this->map[host.host] = host;

    emit msbBox (host.host);
}

void Host::deleteVHost (QString host) {
    this->map.remove (host);
}

void Host::editVHost (QString host, listHosts newValueHost) {
    this->map[host].fileName = newValueHost.fileName;
    this->map[host].index = newValueHost.index;
    this->map[host].port = newValueHost.port;
    this->map[host].root = newValueHost.root;
    this->map[host].host = newValueHost.host;
}

