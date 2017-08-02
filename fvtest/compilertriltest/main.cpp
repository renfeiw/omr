/*******************************************************************************
 *
 * (c) Copyright IBM Corp. 2017, 2017
 *
 *  This program and the accompanying materials are made available
 *  under the terms of the Eclipse Public License v1.0 and
 *  Apache License v2.0 which accompanies this distribution.
 *
 *      The Eclipse Public License is available at
 *      http://www.eclipse.org/legal/epl-v10.html
 *
 *      The Apache License v2.0 is available at
 *      http://www.opensource.org/licenses/apache2.0.php
 *
 * Contributors:
 *    Multiple authors (IBM Corp.) - initial implementation and documentation
 ******************************************************************************/

#include "gtest/gtest.h"
#include "omrTestHelpers.h"

int main(int argc, char** argv) {
   ::testing::InitGoogleTest(&argc, argv);
   int result = RUN_ALL_TESTS();
   OMRTEST_PRINT_STATUS(result);
   return result;
}
