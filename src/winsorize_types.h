// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4;  -*-
//
//  winsorize -- Rcpp bindings to APT package information on Debian systems
//
//  Copyright (C) 2015           Dirk Eddelbuettel and Andreas Alfons 
//
//  This file is part of winsorize
//
//  winsorize is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 2 of the License, or
//  (at your option) any later version.
//
//  winsorize is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with winsorize.  If not, see <http://www.gnu.org/licenses/>.


// Rcpp Attributes will always include a file 'pkgname_types.h' in
// which we can place global declarations such as the 'using namespace
// ...' needed here in order to build the autogenerated RcppExports.cpp

#include <RcppArmadillo.h>

using namespace arma;
using namespace Rcpp;