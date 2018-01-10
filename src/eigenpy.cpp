/*
 * Copyright (c) 2015-2018 LAAS-CNRS
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

#include "eigenpy/eigenpy.hpp"

namespace eigenpy
{

  /* Enable Eigen-Numpy serialization for a set of standard MatrixBase instance. */
  void enableEigenPy()
  {
    using namespace Eigen;
    Exception::registerException();

    ENABLE_SPECIFIC_MATRIX_TYPE(MatrixXd);
    ENABLE_SPECIFIC_MATRIX_TYPE(Matrix2d);
    ENABLE_SPECIFIC_MATRIX_TYPE(Matrix3d);
    ENABLE_SPECIFIC_MATRIX_TYPE(Matrix4d);
    
    ENABLE_SPECIFIC_MATRIX_TYPE(VectorXd);
    ENABLE_SPECIFIC_MATRIX_TYPE(Vector2d);
    ENABLE_SPECIFIC_MATRIX_TYPE(Vector3d);
    ENABLE_SPECIFIC_MATRIX_TYPE(Vector4d);
  }

} // namespace eigenpy
