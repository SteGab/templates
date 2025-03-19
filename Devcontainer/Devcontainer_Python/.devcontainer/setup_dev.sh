#!/bin/bash

pip install --upgrade pip
pip3 install --user -r ./requirements.txt
bash -c "$(curl -fsSL https://raw.githubusercontent.com/ohmybash/oh-my-bash/master/tools/install.sh)"
