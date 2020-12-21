FROM ubuntu:focal

# Install MoCOCrW dependencies
RUN apt update && DEBIAN_FRONTEND=noninteractive apt -y install build-essential cmake pkg-config libboost-all-dev googletest git doxygen python3

# Install OpenSSL1.1.1
RUN git clone https://github.com/openssl/openssl.git
RUN cd openssl && git checkout OpenSSL_1_1_1-stable \
               && ./config -Wl,--enable-new-dtags,-rpath,'$(LIBRPATH)' \
               && make \
               && make install
RUN rm -rf openssl
