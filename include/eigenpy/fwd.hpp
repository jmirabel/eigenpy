/*
 * Copyright 2014-2018, Nicolas Mansard and Justin Carpentier, LAAS-CNRS
 *
 * This file is part of eigenpy.
 * eigenpy is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 * eigenpy is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.  You should
 * have received a copy of the GNU Lesser General Public License along
 * with eigenpy.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __eigenpy_fwd_hpp__
#define __eigenpy_fwd_hpp__

#include <boost/python.hpp>
#include <Eigen/Core>

#include <numpy/numpyconfig.h>
#ifdef NPY_1_8_API_VERSION
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#endif

#include <numpy/noprefix.h>

#ifdef NPY_ALIGNED
#if EIGEN_VERSION_AT_LEAST(3,2,90)
  #define EIGENPY_DEFAULT_ALIGNMENT_VALUE Eigen::Aligned16
#else
  #define EIGENPY_DEFAULT_ALIGNMENT_VALUE Eigen::Aligned
#endif
#else
  #define EIGENPY_DEFAULT_ALIGNMENT_VALUE Eigen::Unaligned
#endif

#endif // ifndef __eigenpy_fwd_hpp__

