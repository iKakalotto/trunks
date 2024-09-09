#!/bin/bash

script="build_all_android.sh"

set -e
cp ../${script} .
bash ${script}
rm ${script}
