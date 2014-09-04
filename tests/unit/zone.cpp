/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/**
 * Copyright (c) 2014, Regents of the University of California.
 *
 * This file is part of NDNS (Named Data Networking Domain Name Service).
 * See AUTHORS.md for complete list of NDNS authors and contributors.
 *
 * NDNS is free software: you can redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * NDNS is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * NDNS, e.g., in COPYING.md file.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "zone.hpp"
#include "../boost-test.hpp"

#include <ndn-cxx/name.hpp>

namespace ndn {
namespace ndns {
namespace tests {


BOOST_AUTO_TEST_SUITE(ZoneTest)

BOOST_AUTO_TEST_CASE(TestCase)
{
  Name zoneName("/net/ndnsim");
  Zone zone1;
  zone1.setName(zoneName);
  zone1.setId(2);

  Zone zone2(zoneName);
  Zone zone3("/net/ndnsim");

  BOOST_CHECK_EQUAL(zone1, zone2);
  BOOST_CHECK_EQUAL(zone3, zone2);
  BOOST_CHECK_EQUAL(zone2.getName(), zone3.getName());
  BOOST_CHECK_EQUAL(zone1.getId(), 2);
  BOOST_CHECK_EQUAL(zone1.getName(), zoneName);
}

BOOST_AUTO_TEST_SUITE_END()

} // namespace tests
} // namespace ndns
} // namespace ndn