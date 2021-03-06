/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the  "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#if !defined(XNODESETRESULTTREEFRAGPROXY_HEADER_GUARD_1357924680)
#define XNODESETRESULTTREEFRAGPROXY_HEADER_GUARD_1357924680



// Base include file.  Must be first.
#include <xalanc/XPath/XPathDefinitions.hpp>



#include <xalanc/XPath/XObjectResultTreeFragProxyBase.hpp>



XALAN_CPP_NAMESPACE_BEGIN



class XNodeSetBase;



class XALAN_XPATH_EXPORT XNodeSetResultTreeFragProxy : public XObjectResultTreeFragProxyBase
{
public:

    XNodeSetResultTreeFragProxy(const XNodeSetBase& value);

    virtual
    ~XNodeSetResultTreeFragProxy();

    // These interfaces are inherited from XObjectResultTreeFragProxyBase...

    virtual XalanNode*
    getFirstChild() const;

    virtual XalanNode*
    getLastChild() const;

private:

    // Not implemented...
    XNodeSetResultTreeFragProxy(const XNodeSetResultTreeFragProxy&  theSource);

    XNodeSetResultTreeFragProxy&
    operator=(const XNodeSetResultTreeFragProxy&    theRHS);

    bool
    operator==(const XNodeSetResultTreeFragProxy&   theRHS);


    // Data members...
    const XNodeSetBase&     m_value;
};



XALAN_CPP_NAMESPACE_END



#endif  // XNODESETRESULTTREEFRAGPROXY_HEADER_GUARD_1357924680
