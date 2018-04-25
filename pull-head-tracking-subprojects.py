#!/usr/bin/env python

from __future__ import print_function

import os
import sys
import subprocess

if not os.path.exists('subprojects'):
    print('No suprojects dir found')
    sys.exit(1)

wraps = os.listdir('subprojects')

for name in wraps:
    if not name.endswith('.wrap'):
        continue
    path = os.path.join('subprojects', name)

    if not os.path.exists(path):
        print('Path not found:', path)
        sys.exit(1)
    f = open(path, 'r')
    header = f.readline().strip()
    if header != '[wrap-git]':
        continue
    values = dict()
    for line in f:
        line = line.strip()
        if line == '':
            continue
        (k, v) = line.split('=', 1)
        k = k.strip()
        v = v.strip()
        values[k] = v
    d = values['directory']
    if d is None:
        continue
    rev = values['revision']
    if rev != 'head':
        continue
    path = os.path.join('subprojects', d)
    if not os.path.exists(path):
        print('Path not found:', path)
        sys.exit(1)
    print('> Updating', path + '...')
    subprocess.call(['git', 'pull'], cwd=path)
