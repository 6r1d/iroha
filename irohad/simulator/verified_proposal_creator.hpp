/**
 * Copyright Soramitsu Co., Ltd. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef IROHA_VERIFIED_PROPOSAL_CREATOR_HPP
#define IROHA_VERIFIED_PROPOSAL_CREATOR_HPP

#include "simulator/verified_proposal_creator_common.hpp"

namespace iroha {
  namespace network {
    struct OrderingEvent;
  }
  namespace simulator {

    /**
     * Interface for providing proposal validation
     */
    class VerifiedProposalCreator {
     public:
      /**
       * Execute stateful validation for given proposal
       */
      virtual VerifiedProposalCreatorEvent processProposal(
          std::shared_ptr<shared_model::interface::Proposal const> const &proposal, consensus::Round const &round,
          std::shared_ptr<LedgerState const> const &ledger_state) = 0;

      virtual ~VerifiedProposalCreator() = default;
    };
  }  // namespace simulator
}  // namespace iroha
#endif  // IROHA_VERIFIED_PROPOSAL_CREATOR_HPP
