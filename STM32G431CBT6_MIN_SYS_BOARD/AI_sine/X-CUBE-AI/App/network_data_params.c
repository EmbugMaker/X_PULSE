/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Oct 26 20:27:56 2022
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[297] = {
  0xbe7b0c3100000000U, 0xbb24a2523ece65d7U, 0xbf072448U, 0xbee9eb5200000000U,
  0x0U, 0xbe899609U, 0x3daf524000000000U, 0xbed5622eU,
  0x3c8a75203e316086U, 0xbc5ac8e0beaef8f2U, 0x3db4f28cbe8364c0U, 0x3e1a4be6bd4d16c8U,
  0x3e79ea5a3e17a7c2U, 0x3da1c2bcbe05fb20U, 0xbea20a6a3e29a122U, 0x3dad53143e8a1d23U,
  0x3d2806f13e576ffeU, 0x3df97c47be60d1c6U, 0xbe88ec723d757553U, 0x3e578a683e927213U,
  0xbe19882ebedd3dabU, 0x3be67440bda21a57U, 0x3e9ec9a0be9fcfdaU, 0xbd14e4603e364dcbU,
  0xbe21ecc43eb71f2fU, 0xbe9f70713e3ee2acU, 0x3ebc4a4b3d800894U, 0xbd35d610bec37e56U,
  0xbe9862d83ecd1017U, 0x3d412208bda05500U, 0xbee6f1213e9ac2e7U, 0xbedaad773ea251c1U,
  0x3eb3d044bc70da00U, 0xbed6e8133df135c2U, 0xbebe0b66bbff94c7U, 0x3dc7a9f0bed3ed8eU,
  0xbca47be03df0640cU, 0x3e6662b6be6b8c89U, 0x3d6acda3bc87ade0U, 0xbe1ee1283e39695eU,
  0x3ddf1fc93ecb3585U, 0x3e070e33be3981d6U, 0x3ed65b2b3e633002U, 0xbea589ac3e0f83c6U,
  0xbeac7be33e133906U, 0x3d0d95c03b7350b3U, 0xbe6f323dbe212feaU, 0xbebdf78cbd71e6a4U,
  0x3e625f4f3e4a09e6U, 0x3ebf51343db9ee49U, 0x3d84fbe43e1b3358U, 0x3dc08cc33e807575U,
  0xbdaf3a8cbde193ecU, 0x3edd7d173e979f1cU, 0x3d102df1be576d86U, 0xbe7caf093ed0d8d7U,
  0xbcf8ff413e400186U, 0x3df8c4753ed8d73fU, 0x3eb02e05be96d242U, 0xbef4c9753ea7404fU,
  0xbe001fd8be797b27U, 0xbe128d16be16b01bU, 0x3cf0ecbfbd4af708U, 0x3ea9daf5bf6d3032U,
  0x3e6da7a3be41c9b2U, 0xbeabd8943d9ee9a9U, 0xbea612f2bfb2bafcU, 0x3f23f6423e39202eU,
  0x3c668dc03e61f16eU, 0x3e7dfdba3e626284U, 0x3ea89211be414539U, 0x3cb0a3103e1950baU,
  0x3e731dbabd4c8e98U, 0xbd8416f0beba640dU, 0x3e091a16bed6f0e3U, 0xbe90c9103e2c8b7eU,
  0x3c1ec4c03eb1a883U, 0x3e8d3309be8bc37cU, 0xbe5d1dcdbe73a5d4U, 0xbea1a27abe7a7670U,
  0xbe2f21eabdb59a30U, 0xbe0360bb3cfbbd4eU, 0x3eb6632dbea23645U, 0xbe086b88be0980d8U,
  0x3e03dd6ebe850de0U, 0xbeabd3dabd27dd98U, 0xbe0ce5373e3b9f82U, 0xbec0902b3d560938U,
  0x3daece843e3e405eU, 0xbbd37f00be810295U, 0xbcd053903d4954d8U, 0xbe574394be04ad98U,
  0x3e0b1f3e3ea8bb8bU, 0xbec20dcd3ec59ae5U, 0xbe98f08c3ed83477U, 0xbe2863643e84e6bbU,
  0x3ea25a01bde15fb0U, 0xbeaf3070be614741U, 0xbeccb949be3f2bbfU, 0xbea8516e3e653f3eU,
  0x3d46c8b8bea918cbU, 0x3e53238a3e7d4c1eU, 0xbec545efbdcffe28U, 0xbe2dda0cbebcc3d6U,
  0x3eb13f853ea6baddU, 0xbc993c243db122a0U, 0x3e5f498a3d6ec2e6U, 0xbec198d63e73fb5aU,
  0x3eb14db73ec54a3dU, 0x3ec07b513d869c60U, 0xbed0aab63ea5fb91U, 0xbda67fc4beb4257dU,
  0x3deb211cbe684469U, 0x38a87000be987cd0U, 0xbe9838b53e04f5ceU, 0xbcd4b3c0bd1e9f48U,
  0x3de0f9d43ecd57c9U, 0xbb827580be5b139dU, 0xbe94b372be221354U, 0xbe8882743e646482U,
  0xbe049f1d3d510650U, 0x3ea2602ebe872490U, 0xbe7a82433dbe64aaU, 0x3e204691be85a804U,
  0xbeabc049ba857300U, 0xbdf599483eb3a941U, 0xbe26f947beacc7a0U, 0xbe97f0843ec7723eU,
  0xbd2d85a3beb8a3d0U, 0x3ea7140dbdd65ba2U, 0x3e7e9526bec70c22U, 0xbe9251be3eab1a83U,
  0xbe6e09be3e88661dU, 0x3e32aac2be271041U, 0x3d2a6775be0a317eU, 0x3de2cf44bf2587c3U,
  0xbd23e68600000000U, 0x3e1df0eabd19d17aU, 0xbe167b07bc3e982fU, 0x3e65e9c23ef4e088U,
  0xbb26ff9c00000000U, 0x0U, 0xbd295390U, 0x3edcd95ebe57379cU,
  0x3efbf0cb3e26d4eaU, 0x3d21dec83e01e01eU, 0x3ecabe8c3e86e591U, 0x3da2fe603eeac082U,
  0x3dfaa427be54611aU, 0xbe9cbc9cbeb1e4f2U, 0xbebb812dbec300acU, 0x3f12e21e3e111a3eU,
  0x3e93869e3e0997b6U, 0xbd2f3f2fbe402293U, 0x3ea4eb2a3d06b47bU, 0x3e26949d3f07a8adU,
  0x3d71801abed7e82dU, 0x3eaf9543bdc415ecU, 0x3d1b0510be9885b5U, 0xbe3fb494bf05110cU,
  0x3e8677743e52451aU, 0xbe6ce95e3eaa76f8U, 0xbc9fb4e23d793258U, 0xbef0e2aa3dc67686U,
  0xbc3f4b2a3e1dc14eU, 0x3eb74205bec0b29bU, 0x3e06715ebe2f99c1U, 0xbb523a1ebf10d940U,
  0xbd20bfc83e6e2c6eU, 0x3e3492ca3e244746U, 0xbe2ed762bdecb4c4U, 0xbea813f2be539b98U,
  0xbd2c4ba8be0a83a0U, 0xbc9c1bd0bedcc2bcU, 0x3dea9b84be806ce8U, 0x3e2c99c6bce09ed0U,
  0xbd74eae2be50940aU, 0xbec3f951bdc37b99U, 0xbdcb0c21bdb8d8d0U, 0xbec751a73e948548U,
  0x3e0d656abe915b53U, 0x3ebda597be819274U, 0xbd97eea83e34555eU, 0xbe5c7d6abf3d8703U,
  0xbdc33454be950cf5U, 0x3dbd8fc93e2292f6U, 0x3ee261ddbe4ace1cU, 0xbe8b4b1bbe4ab358U,
  0xbeb2ddd93d047ce8U, 0x3d705b70be1e095aU, 0xbe7380ab3ed03b5cU, 0xbeb0d16d3f03e2b2U,
  0xbe106bd7be74c64cU, 0x3e197fadbe1f387aU, 0x3eb4216d3e87061aU, 0x3dcdcdaa3eb6fdfeU,
  0xbb5cf3fabe535e30U, 0xbe60fb88bdfc4c3cU, 0xbded5b34be708767U, 0x3eace4d2bdf01d51U,
  0xbf684c18bdf97ad4U, 0x3ed8041e3e50dc50U, 0xbeab87b8be4c6680U, 0x3ee97bc7bda303a9U,
  0x3ec37998be219a1eU, 0x3e88b54d3e3f586eU, 0xbec8bd5dbe20ed00U, 0xbe843eb8be57a471U,
  0xbeb8523d3e9af1e5U, 0xbe54b70c3ebb4311U, 0xbe70d86abdd62a04U, 0xbee478623e82f54eU,
  0xbe680a083eab9155U, 0xbec11c70be011ac0U, 0x3daaa13cbd0a6a2eU, 0x3ecdcda13d8c0356U,
  0x3d609a933ec08e49U, 0xbf0445663e4c642dU, 0xbe3085f53e92df51U, 0xbe6b98e9bce29357U,
  0x3e318d233e017526U, 0x3e68ac5e3dc58e54U, 0xbe15dda0bd0532a5U, 0x3eb7a22bbe3dcb83U,
  0xbe9c17ce3ec58337U, 0x3def2f643e92b3dbU, 0xbe281c88beb3238cU, 0xbdcef420bebc8216U,
  0x3d1664c83ead632bU, 0xbe488eb93e82e2d9U, 0xbe3baa1c3d9dd80cU, 0x3eb7d8503eb7aabcU,
  0xbea621bf3e728adaU, 0xbf22d1833e27345cU, 0xbdc4c66b3d8ea184U, 0xbc89544e3ebc3b96U,
  0x3e85c3a23e2dc4e2U, 0xbe433e0f3e823601U, 0x3e9ce16dbe4d093dU, 0x3e98783cbf212890U,
  0x3ea1935cbdc48bb4U, 0x3d410de33e01c63eU, 0x3ea24e17bdfbf8e6U, 0x3e997273bf6c57aaU,
  0xbe2f81583e6ae0c2U, 0xbeaa3ecc3ec28da5U, 0xbe9693163e18e36eU, 0xbc6fde89bd1a9d8fU,
  0x3ec640783e7d1672U, 0xbedd976cbd0adac8U, 0x3e253d4d3e603adfU, 0x3e40a56abf6bb1a2U,
  0xbe9c76c2beb1164eU, 0xbed976cebed11d9aU, 0xbea8d37cbeadc396U, 0xbcdee6d63d82907fU,
  0x3ed4b2d53d8667a0U, 0xbeffc55ebed06b02U, 0xbe9c7e293ed36813U, 0xbef5e8fd3ee58b7fU,
  0xbea67ed03e5304aaU, 0x3d2679c03e0953eaU, 0xb9c48800be4ca4e1U, 0x3e329699befd487bU,
  0x3e0bbaf4bded8c08U, 0xbee5d0c33ec7ca0cU, 0xbeb1963dbe3b0bdeU, 0xbf14e55b3e855685U,
  0xbeb18bbd3eb25f6fU, 0x3ccb0ae03e1210b2U, 0xbd31f198be5d645cU, 0x3ead39d2bccccae0U,
  0x3e6966d73e8ff431U, 0x3e756636U, 0xbe9fb21a3e231c75U, 0x3dfa2bde3e97329aU,
  0x3e3275473e5f21e7U, 0x3e67869cbc957d81U, 0xbe8497ebbe92e9f3U, 0x3e800be03e8eecaaU,
  0xbe1472dbbea77de7U, 0x3eb0da7c3ee5ac45U, 0x3f1f80853ecb54aeU, 0xbf11d079bf164a70U,
  0x3f0c42343f46776aU, 0x3f08fc4fbebd2d14U, 0x3f45cef53f7f7df5U, 0x3f4634713f4db83eU,
  0xbc86dce0bea2c0c5U, 0x3e3bf00a3d8ab112U, 0x3e92e80b3ef7ed0fU, 0xbe46b388bf0e91afU,
  0xbd48aee03e8ec373U, 0x3e27cb0fbf12c3b8U, 0xbe8af627bd6e6d40U, 0x3e14150cbce959b4U,
  0xbcfd8080U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

