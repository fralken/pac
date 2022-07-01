# Pac

This utility interprets a pac file and calls the `FindProxyForUrl()` to return a list of proxies and `myIpAddress()` to return the ip address of the caller.

## Usage

```
pac [ <path/to/proxy.pac> [ <destination host> [ <destination url> ]]]
```

## How to build

```
make
```

## Info

This utility is implemented using [Duktape](https://duktape.org/) Javascript engine.
