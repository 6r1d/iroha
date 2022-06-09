/**
 * Copyright Soramitsu Co., Ltd. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef IROHA_BLOCK_CREATOR_HPP
#define IROHA_BLOCK_CREATOR_HPP

#include "simulator/block_creator_common.hpp"

namespace iroha {
  namespace simulator {
    struct VerifiedProposalCreatorEvent;

    /**
     * Interface for creating blocks from proposal
     */
    class BlockCreator {
     public:
      /**
       * Creates a block from given proposal and top block info
       */
      virtual std::optional<RoundData> processVerifiedProposal(
          VerifiedProposalCreatorEvent const &event, TopBlockInfo const &prev_block_info) = 0;

      virtual ~BlockCreator() = default;
    };
  }  // namespace simulator
}  // namespace iroha

#endif  // IROHA_BLOCK_CREATOR_HPP
