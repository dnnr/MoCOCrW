FROM ubuntu:focal

# Install MoCOCrW dependencies (except OpenSSL)
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt -y install \
        build-essential \
        clang \
        cmake \
        doxygen \
        git \
        googletest \
        libboost-all-dev \
        ninja-build \
        pkg-config \
        python3 \
        && rm -rf /var/lib/apt/lists/*

# Verify that OpenSSL has not been installed inadvertently
RUN ! dpkg -s libssl-dev

# Build and install specific OpenSSL version
RUN wget https://github.com/openssl/openssl/archive/OpenSSL_1_1_1-stable.tar.gz \
        && tar xf OpenSSL_1_1_1-stable.tar.gz \
        && cd openssl-OpenSSL_1_1_1-stable \
        && ./config -Wl,--enable-new-dtags,-rpath,'$(LIBRPATH)' \
        && make \
        && make install \
        && cd .. \
        && rm -rf openssl-OpenSSL_1_1_1-stable
