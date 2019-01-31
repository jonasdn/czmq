/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/

#include "QmlZhttpClient.h"


///
//  Send a get request to the url, headers is optional.
//      Use arg to identify response when making multiple requests simultaneously.
//      Timeout is in milliseconds, use -1 or 0 to wait indefinitely.
int QmlZhttpClient::get (const QString &url, QmlZlistx *headers, int timeout, zhttp_client_fn handler, void *arg) {
    return zhttp_client_get (self, url.toUtf8().data(), headers->self, timeout, handler, arg);
};

///
//  Send a post request to the url, headers is optional.
//  Use arg to identify response when making multiple requests simultaneously.
//  Timeout is in milliseconds, use -1 or 0 to wait indefinitely.
int QmlZhttpClient::post (const QString &url, QmlZlistx *headers, QmlZchunk *body, int timeout, zhttp_client_fn handler, void *arg) {
    return zhttp_client_post (self, url.toUtf8().data(), headers->self, body->self, timeout, handler, arg);
};

///
//  Invoke callback function for received responses.
//  Should be call after zpoller wait method.
//  Returns 0 if OK, -1 on failure.
int QmlZhttpClient::execute () {
    return zhttp_client_execute (self);
};

///
//  Wait until a response is ready to be consumed.
//  Use when you need a synchronize response.
//
//  The timeout should be zero or greater, or -1 to wait indefinitely.
//
//  Returns 0 if a response is ready, -1 and otherwise. errno will be set to EAGAIN if no response is ready.
int QmlZhttpClient::wait (int timeout) {
    return zhttp_client_wait (self, timeout);
};


QObject* QmlZhttpClient::qmlAttachedProperties(QObject* object) {
    return new QmlZhttpClientAttached(object);
}


///
//  Self test of this class.
void QmlZhttpClientAttached::test (bool verbose) {
    zhttp_client_test (verbose);
};

///
//  Create a new http client
QmlZhttpClient *QmlZhttpClientAttached::construct (bool verbose) {
    QmlZhttpClient *qmlSelf = new QmlZhttpClient ();
    qmlSelf->self = zhttp_client_new (verbose);
    return qmlSelf;
};

///
//  Destroy an http client
void QmlZhttpClientAttached::destruct (QmlZhttpClient *qmlSelf) {
    zhttp_client_destroy (&qmlSelf->self);
};

/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/