FROM debian:stable

RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get -y install \
        build-essential \
        cmake \
        googletest \
        libboost-dev \
        ninja-build

# Verify that OpenSSL headers are not available:
RUN ! dpkg -s libssl-dev
