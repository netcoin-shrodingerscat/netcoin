// Copyright (c) 2012 The Bitcoin developers
// Copyright (c) 2012 Litecoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include "clientversion.h"
#include <string>

//
// client versioning
//

// These need to be macro's, as version.cpp's voodoo requires it
// #define CLIENT_VERSION_MAJOR       2
// #define CLIENT_VERSION_MINOR       3
// #define CLIENT_VERSION_REVISION    1
// #define CLIENT_VERSION_BUILD       0

static const int CLIENT_VERSION =
                           1000000 * CLIENT_VERSION_MAJOR
                         +   10000 * CLIENT_VERSION_MINOR 
                         +     100 * CLIENT_VERSION_REVISION
                         +       1 * CLIENT_VERSION_BUILD;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

///
///  BlockIndex Versioning
///
static const int BLOCKINDEX_VERSION_POS = 2010000;

//
// database format versioning
//
static const int DATABASE_VERSION = 70501;

//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 70004;

// intial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 209;

// disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION = 70003;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

// reject blocks with non-canonical signatures starting from this version
static const int CANONICAL_BLOCK_SIG_VERSION = 60016;
static const int CANONICAL_BLOCK_SIG_LOW_S_VERSION = 60018;

#endif
