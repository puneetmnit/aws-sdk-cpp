﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint-email/model/PlacementStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

PlacementStatistics::PlacementStatistics() : 
    m_inboxPercentage(0.0),
    m_inboxPercentageHasBeenSet(false),
    m_spamPercentage(0.0),
    m_spamPercentageHasBeenSet(false),
    m_missingPercentage(0.0),
    m_missingPercentageHasBeenSet(false),
    m_spfPercentage(0.0),
    m_spfPercentageHasBeenSet(false),
    m_dkimPercentage(0.0),
    m_dkimPercentageHasBeenSet(false)
{
}

PlacementStatistics::PlacementStatistics(JsonView jsonValue) : 
    m_inboxPercentage(0.0),
    m_inboxPercentageHasBeenSet(false),
    m_spamPercentage(0.0),
    m_spamPercentageHasBeenSet(false),
    m_missingPercentage(0.0),
    m_missingPercentageHasBeenSet(false),
    m_spfPercentage(0.0),
    m_spfPercentageHasBeenSet(false),
    m_dkimPercentage(0.0),
    m_dkimPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

PlacementStatistics& PlacementStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InboxPercentage"))
  {
    m_inboxPercentage = jsonValue.GetDouble("InboxPercentage");

    m_inboxPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpamPercentage"))
  {
    m_spamPercentage = jsonValue.GetDouble("SpamPercentage");

    m_spamPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MissingPercentage"))
  {
    m_missingPercentage = jsonValue.GetDouble("MissingPercentage");

    m_missingPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpfPercentage"))
  {
    m_spfPercentage = jsonValue.GetDouble("SpfPercentage");

    m_spfPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DkimPercentage"))
  {
    m_dkimPercentage = jsonValue.GetDouble("DkimPercentage");

    m_dkimPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue PlacementStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_inboxPercentageHasBeenSet)
  {
   payload.WithDouble("InboxPercentage", m_inboxPercentage);

  }

  if(m_spamPercentageHasBeenSet)
  {
   payload.WithDouble("SpamPercentage", m_spamPercentage);

  }

  if(m_missingPercentageHasBeenSet)
  {
   payload.WithDouble("MissingPercentage", m_missingPercentage);

  }

  if(m_spfPercentageHasBeenSet)
  {
   payload.WithDouble("SpfPercentage", m_spfPercentage);

  }

  if(m_dkimPercentageHasBeenSet)
  {
   payload.WithDouble("DkimPercentage", m_dkimPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
