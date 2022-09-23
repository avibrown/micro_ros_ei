from setuptools import find_packages
from setuptools import setup

setup(
    name='ei_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('ei_interfaces', 'ei_interfaces.*')),
)
