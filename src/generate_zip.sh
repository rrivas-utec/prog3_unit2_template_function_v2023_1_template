#!/usr/bin/env bash

project_name='prog3_unit2_template_function_v2023_1'
source_code='
        P1.h P1.cpp
        P2.h P2.cpp
        P3.h P3.cpp
        P4.h P4.cpp
        P5.h P5.cpp
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}