FROM ubuntu:22.04

LABEL maintainer="cynynpri"

RUN apt-get update && apt-get upgrade -y

RUN apt-get install build-essential -qy

RUN apt-get clean -q && \
    apt-get autoremove -qy && \
    rm -rf /var/lib/apt/lists/* \
    /var/cache/apt/* \
    /tmp/*

RUN mkdir /home/atcoder
RUN useradd -d /home/atcoder atcoder
WORKDIR /home/atcoder
ENV HOME /home/atcoder
RUN chown atcoder:atcoder -R /home/atcoder
USER atcoder
