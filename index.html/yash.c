//create a website for clinic?
/*[clinic input]
_ssl._SSLContext.load_cert_chain
certfile: object
keyfile: object = NULL
password: object = NULL


#define _SSL__SSLCONTEXT_LOAD_CERT_CHAIN_METHODDEF    \
    {"load_cert_chain", (PyCFunction)_ssl__SSLContext_load_cert_chain, METH_FASTCALL, _ssl__SSLContext_load_cert_chain__doc__}

static PyObject *
_ssl__SSLContext_load_cert_chain(PySSLContext *self, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    [...]
    return_value = _ssl__SSLContext_load_cert_chain_impl(self, certfile, keyfile, password);
}


static struct PyMethodDef context_methods[] = {
    [...]
    _SSL__SSLCONTEXT_LOAD_CERT_CHAIN_METHODDEF
    [...]
    {NULL, NULL}        /* sentinel */
};

[...]

static PyTypeObject PySSLContext_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "_ssl._SSLContext",                        /*tp_name*/
    sizeof(PySSLContext),                      /*tp_basicsize*/
    [...]
    context_methods,                           /*tp_methods*/
    [...]
};


    