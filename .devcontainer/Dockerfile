# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.209.6/containers/cpp/.devcontainer/base.Dockerfile

# [Choice] Debian / Ubuntu version (use Debian 11/9, Ubuntu 18.04/21.04 on local arm64/Apple Silicon): debian-11, debian-10, debian-9, ubuntu-21.04, ubuntu-20.04, ubuntu-18.04
ARG VARIANT="bullseye"
FROM mcr.microsoft.com/vscode/devcontainers/cpp:0-${VARIANT}

# [Optional] Uncomment this section to install additional packages.
# RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
#     && apt-get -y install --no-install-recommends <your-package-list-here>
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends fish

# Setting fish as interactive shell only
RUN echo 'if [[ $(ps --no-header --pid=$PPID --format=cmd) != "fish" && -z ${BASH_EXECUTION_STRING} ]]\n\
then\n\
    exec fish\n\
fi' >> /home/vscode/.bashrc

# add starship
ADD starship /usr/local/bin/starship
RUN mkdir -p /etc/fish/conf.d \
    && echo "starship init fish | source" > /etc/fish/conf.d/starship.fish \
    && mkdir -p /home/vscode/.config \
    && mkdir -p /home/vscode/.config/fish \
    && echo '[hostname]\n\
ssh_only = false\n\
[shell]\n\
fish_indicator = ""\n\
powershell_indicator = "_"\n\
disabled = false' > /home/vscode/.config/starship.toml \
    && chown -R vscode:vscode /home/vscode