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

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{
  enum class AuthorizationType
  {
    NOT_SET,
    NONE,
    AWS_IAM,
    CUSTOM,
    JWT
  };

namespace AuthorizationTypeMapper
{
AWS_APIGATEWAYV2_API AuthorizationType GetAuthorizationTypeForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForAuthorizationType(AuthorizationType value);
} // namespace AuthorizationTypeMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
