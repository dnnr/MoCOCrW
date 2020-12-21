FROM ubuntu:focal

# Install MoCOCrW dependencies
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt -y install \
        build-essential \
        cmake \
        doxygen \
        git \
        googletest \
        libboost-all-dev \
        ninja-build \
        pkg-config \
        python3 \
        && rm -rf /var/lib/apt/lists/*

# Verify that OpenSSL is not installed
RUN ! dpkg -s libssl-dev

# Build and install specific OpenSSL version
RUN git clone https://github.com/openssl/openssl.git \
        && cd openssl
        && git checkout OpenSSL_1_1_1-stable \
        && ./config -Wl,--enable-new-dtags,-rpath,'$(LIBRPATH)' \
        && make \
        && make install \
        && rm -rf openssl
