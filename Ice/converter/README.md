This demo illustrates how to implement and use string converters
with Ice. In this demo, the clients uses ISO-Latin-1 as its
character set, while the server uses UTF-8.

The demo sends and receives the greeting "Bonne journée" which
in Latin-1 encoding is "Bonne journ\351e" and in UTF-8 encoding
is "Bonne journ\303\251e".

The demo server prints the strings as they are received to show
how, without conversion, they are not in the format expected by
the application.

There are two clients, client1 uses a string converter and client2
doesn't use a string converter.

To run the demo, first start the server:

      server

In a separate window, start client1:

      client1

In a separate window, start client2:

      client2
