FROM ubuntu:focal

# Install MoCOCrW dependencies
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt -y install \
        build-essential \
        cmake \
        doxygen \
        git \
        googletest \
        libboost-all-dev \
        pkg-config \
        python3 \
        && rm -rf /var/lib/apt/lists/*

# Install OpenSSL1.1.1
RUN git clone https://github.com/openssl/openssl.git \
        && cd openssl
        && git checkout OpenSSL_1_1_1-stable \
        && ./config -Wl,--enable-new-dtags,-rpath,'$(LIBRPATH)' \
        && make \
        && make install \
        && rm -rf openssl
