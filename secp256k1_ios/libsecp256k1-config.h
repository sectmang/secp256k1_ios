//
//  libsecp256k1-config.h
//  secp256k1_ios
//
//  Created by Alexander Vlasov on 20.12.2017.
//  Copyright © 2017 Alexander Vlasov. All rights reserved.
//

#ifndef libsecp256k1_config_h
#define libsecp256k1_config_h
#undef USE_BASIC_CONFIG
#define USE_NUM_NONE 1
#define USE_FIELD_INV_BUILTIN 1
#define USE_SCALAR_INV_BUILTIN 1
#define USE_FIELD_10X26 1
#define USE_SCALAR_8X32 1
#endif /* libsecp256k1_config_h */
