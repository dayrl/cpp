Demos in this directory:

- [async](./async)

  This demo illustrates the use of Asynchronous Message Invocation
  (AMI) and Asynchronous Message Dispatch (AMD).

- [bidir](./bidir)

  This demo shows how to use bidirectional connections for callbacks.
  This is typically used if the server cannot open a connection to the
  client to send callbacks, for example, because firewalls block
  incoming connections to the client.

- [callback](./callback)

  A simple callback demo that illustrates how a client can pass a
  proxy to a server, invoke an operation in the server, and the server
  call back into an object provided by the client as part of that
  invocation.

- [context](./context)

  This demo shows how to use Ice request contexts.

- [converter](./converter)

  This demo shows how to use string converters.

- [hello](./hello)

  This demo illustrates how to invoke ordinary (twoway) operations, as
  well as how to invoke oneway operations, use datagrams, secure
  invocations, and how to use batched invocations.

- [interleaved](./interleaved)

  A more advanced throughput demo that allows you to send sequences of
  various types between client and server and to measure the maximum
  bandwidth that can be achieved using asynchronous requests & replies.

- [invoke](./invoke)

  This demo illustrates the use of the Ice streaming API.

- [latency](./latency)

  A simple latency test that measures the basic call dispatch delay of
  Ice.

- [locator](./locator)

  This demo illustrates how to write a simple custom `Ice::Locator`.

- [minimal](./minimal)

  This demo illustrates a minimal Ice application.

- [multicast](./multicast)

  This demo illistrates the use of UDP multicast.

- [MFC](./MFC) (Windows Only)

  Shows how to use Ice in conjunction with the Microsoft Foundation
  Classes.

- [nested](./nested)

  A demo to illustrate how nested callbacks work, and how the size of
  the thread pool affects the maximum nesting depth.

- [nrvo](./nrvo)

  A demo that shows how Ice takes advantage of NRVO (Named Return
  Value Optimization) which is included in modern C++ compilers.

- [optional](./optional)

  This demo shows the use of the optional keyword.

- [plugin](./plugin)

  A demo to illustrate how to write and use Ice plugins.

- [properties](./properties)

  Shows how to access a server's PropertiesAdmin facet in order to
  retrieve and modify its configuration properties, and how the server
  can receive notifications whenever its properties are changed.

- [session](./session)

  This demo shows how to use sessions to clean up client-specific
  resources in a server after the client shuts down or crashes.

- [throughput](./throughput)

  A simple throughput demo that allows you to send sequences of
  various types between client and server and to measure the maximum
  bandwidth that can be achieved using serialized synchronous
  requests.

- [value](./value)

  This demo shows how to use classes, class factories, and the
  difference between local and remote invocations of class operations.
