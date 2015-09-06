#!/bin/bash
cd ..
cd Sources
flex Lexico.l
mv lex.yy.c lex.yy.cpp
