# Simple-guess-game

**How to setup**

## Buildozer Docker image

A Dockerfile is available to use buildozer through a Docker environment.

- Build with:

      docker build --tag=buildozer .

- Run with:

      docker run --volume "$(pwd)":/home/user/hostcwd buildozer --version