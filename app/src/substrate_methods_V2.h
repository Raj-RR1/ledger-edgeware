/*******************************************************************************
 *  (c) 2019 - 2022 Zondax GmbH
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextern-c-compat"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include "substrate_types_V2.h"
#include <stddef.h>
#include <stdint.h>

#define PD_CALL_SYSTEM_V2 0
#define PD_CALL_TIMESTAMP_V2 3
#define PD_CALL_INDICES_V2 4
#define PD_CALL_BALANCES_V2 6
#define PD_CALL_STAKING_V2 8
#define PD_CALL_SESSION_V2 9
#define PD_CALL_GRANDPA_V2 14
#define PD_CALL_DEMOCRACY_V2 10
#define PD_CALL_COUNCIL_V2 11
#define PD_CALL_TECHNICALCOMMITTEE_V2 16
#define PD_CALL_PHRAGMENELECTION_V2 17
#define PD_CALL_TECHNICALMEMBERSHIP_V2 18
#define PD_CALL_TREASURY_V2 15
#define PD_CALL_CLAIMS_V2 24
#define PD_CALL_VESTING_V2 25
#define PD_CALL_UTILITY_V2 1
#define PD_CALL_IDENTITY_V2 23
#define PD_CALL_PROXY_V2 29
#define PD_CALL_MULTISIG_V2 30
#define PD_CALL_BOUNTIES_V2 37
#define PD_CALL_TIPS_V2 38
#define PD_CALL_ELECTIONPROVIDERMULTIPHASE_V2 36
#define PD_CALL_BAGSLIST_V2 37
#define PD_CALL_CONFIGURATION_V2 51
#define PD_CALL_INITIALIZER_V2 57
#define PD_CALL_HRMP_V2 60
#define PD_CALL_PARASDISPUTES_V2 62
#define PD_CALL_REGISTRAR_V2 70
#define PD_CALL_AUCTIONS_V2 72

#define PD_CALL_BALANCES_TRANSFER_ALL_V2 4
typedef struct {
    pd_LookupasStaticLookupSource_V2_t dest;
    pd_bool_t keep_alive;
} pd_balances_transfer_all_V2_t;

#define PD_CALL_STAKING_BOND_V2 0
typedef struct {
    pd_LookupasStaticLookupSource_V2_t controller;
    pd_CompactBalance_t amount;
    pd_RewardDestination_V2_t payee;
} pd_staking_bond_V2_t;

#define PD_CALL_STAKING_BOND_EXTRA_V2 1
typedef struct {
    pd_CompactBalance_t amount;
} pd_staking_bond_extra_V2_t;

#define PD_CALL_STAKING_UNBOND_V2 2
typedef struct {
    pd_CompactBalance_t amount;
} pd_staking_unbond_V2_t;

#define PD_CALL_STAKING_WITHDRAW_UNBONDED_V2 3
typedef struct {
    pd_u32_t num_slashing_spans;
} pd_staking_withdraw_unbonded_V2_t;

#define PD_CALL_STAKING_VALIDATE_V2 4
typedef struct {
    pd_ValidatorPrefs_V2_t prefs;
} pd_staking_validate_V2_t;

#define PD_CALL_STAKING_NOMINATE_V2 5
typedef struct {
    pd_VecLookupasStaticLookupSource_V2_t targets;
} pd_staking_nominate_V2_t;

#define PD_CALL_STAKING_CHILL_V2 6
typedef struct {
} pd_staking_chill_V2_t;

#define PD_CALL_STAKING_SET_PAYEE_V2 7
typedef struct {
    pd_RewardDestination_V2_t payee;
} pd_staking_set_payee_V2_t;

#define PD_CALL_STAKING_SET_CONTROLLER_V2 8
typedef struct {
    pd_LookupasStaticLookupSource_V2_t controller;
} pd_staking_set_controller_V2_t;

#define PD_CALL_STAKING_PAYOUT_STAKERS_V2 18
typedef struct {
    pd_AccountId_V2_t validator_stash;
    pd_EraIndex_V2_t era;
} pd_staking_payout_stakers_V2_t;

#define PD_CALL_STAKING_REBOND_V2 19
typedef struct {
    pd_CompactBalance_t amount;
} pd_staking_rebond_V2_t;

#define PD_CALL_SESSION_SET_KEYS_V2 0
typedef struct {
    pd_Keys_V2_t keys;
    pd_Bytes_t proof;
} pd_session_set_keys_V2_t;

#define PD_CALL_SESSION_PURGE_KEYS_V2 1
typedef struct {
} pd_session_purge_keys_V2_t;

#define PD_CALL_UTILITY_BATCH_V2 0
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_V2_t;

#define PD_CALL_UTILITY_AS_DERIVATIVE_V2 1
typedef struct {
    pd_u16_t index;
    pd_Call_t call;
} pd_utility_as_derivative_V2_t;

#define PD_CALL_UTILITY_BATCH_ALL_V2 2
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_all_V2_t;

#ifdef SUBSTRATE_PARSER_FULL

#define PD_CALL_TIMESTAMP_SET_V2 0
typedef struct {
    pd_Compactu64_t now;
} pd_timestamp_set_V2_t;

#define PD_CALL_INDICES_CLAIM_V2 0
typedef struct {
    pd_AccountIndex_V2_t index;
} pd_indices_claim_V2_t;

#define PD_CALL_INDICES_FREE_V2 2
typedef struct {
    pd_AccountIndex_V2_t index;
} pd_indices_free_V2_t;

#define PD_CALL_INDICES_FORCE_TRANSFER_V2 3
typedef struct {
    pd_AccountId_V2_t new_;
    pd_AccountIndex_V2_t index;
    pd_bool_t freeze;
} pd_indices_force_transfer_V2_t;

#define PD_CALL_INDICES_FREEZE_V2 4
typedef struct {
    pd_AccountIndex_V2_t index;
} pd_indices_freeze_V2_t;

#define PD_CALL_BALANCES_FORCE_UNRESERVE_V2 5
typedef struct {
    pd_LookupasStaticLookupSource_V2_t who;
    pd_Balance_t amount;
} pd_balances_force_unreserve_V2_t;

#define PD_CALL_STAKING_SET_VALIDATOR_COUNT_V2 9
typedef struct {
    pd_Compactu32_t new_;
} pd_staking_set_validator_count_V2_t;

#define PD_CALL_STAKING_INCREASE_VALIDATOR_COUNT_V2 10
typedef struct {
    pd_Compactu32_t additional;
} pd_staking_increase_validator_count_V2_t;

#define PD_CALL_STAKING_SCALE_VALIDATOR_COUNT_V2 11
typedef struct {
    pd_Percent_V2_t factor;
} pd_staking_scale_validator_count_V2_t;

#define PD_CALL_STAKING_FORCE_NO_ERAS_V2 12
typedef struct {
} pd_staking_force_no_eras_V2_t;

#define PD_CALL_STAKING_FORCE_NEW_ERA_V2 13
typedef struct {
} pd_staking_force_new_era_V2_t;

#define PD_CALL_STAKING_SET_INVULNERABLES_V2 14
typedef struct {
    pd_VecAccountId_V2_t invulnerables;
} pd_staking_set_invulnerables_V2_t;

#define PD_CALL_STAKING_FORCE_UNSTAKE_V2 15
typedef struct {
    pd_AccountId_V2_t stash;
    pd_u32_t num_slashing_spans;
} pd_staking_force_unstake_V2_t;

#define PD_CALL_STAKING_FORCE_NEW_ERA_ALWAYS_V2 16
typedef struct {
} pd_staking_force_new_era_always_V2_t;

#define PD_CALL_STAKING_CANCEL_DEFERRED_SLASH_V2 17
typedef struct {
    pd_EraIndex_V2_t era;
    pd_Vecu32_t slash_indices;
} pd_staking_cancel_deferred_slash_V2_t;

#define PD_CALL_STAKING_SET_HISTORY_DEPTH_V2 20
typedef struct {
    pd_Compactu32_t new_history_depth;
    pd_Compactu32_t era_items_deleted;
} pd_staking_set_history_depth_V2_t;

#define PD_CALL_STAKING_REAP_STASH_V2 21
typedef struct {
    pd_AccountId_V2_t stash;
    pd_u32_t num_slashing_spans;
} pd_staking_reap_stash_V2_t;

#define PD_CALL_STAKING_KICK_V2 22
typedef struct {
    pd_VecLookupasStaticLookupSource_V2_t who;
} pd_staking_kick_V2_t;

#define PD_CALL_STAKING_SET_STAKING_CONFIGS_V2 23
typedef struct {
    pd_ConfigOpBalanceOfT_V2_t min_nominator_bond;
    pd_ConfigOpBalanceOfT_V2_t min_validator_bond;
    pd_ConfigOpu32_V2_t max_nominator_count;
    pd_ConfigOpu32_V2_t max_validator_count;
    pd_ConfigOpPercent_V2_t chill_threshold;
    pd_ConfigOpPerbill_V2_t min_commission;
} pd_staking_set_staking_configs_V2_t;

#define PD_CALL_STAKING_CHILL_OTHER_V2 24
typedef struct {
    pd_AccountId_V2_t controller;
} pd_staking_chill_other_V2_t;

#define PD_CALL_STAKING_FORCE_APPLY_MIN_COMMISSION_V2 25
typedef struct {
    pd_AccountId_V2_t validator_stash;
} pd_staking_force_apply_min_commission_V2_t;

#define PD_CALL_GRANDPA_NOTE_STALLED_V2 2
typedef struct {
    pd_BlockNumber_t delay;
    pd_BlockNumber_t best_finalized_block_number;
} pd_grandpa_note_stalled_V2_t;

#define PD_CALL_DEMOCRACY_PROPOSE_V2 0
typedef struct {
    pd_Hash_t proposal_hash;
    pd_CompactBalance_t amount;
} pd_democracy_propose_V2_t;

#define PD_CALL_DEMOCRACY_SECOND_V2 1
typedef struct {
    pd_Compactu32_t proposal;
    pd_Compactu32_t seconds_upper_bound;
} pd_democracy_second_V2_t;

#define PD_CALL_DEMOCRACY_VOTE_V2 2
typedef struct {
    pd_Compactu32_t ref_index;
    pd_AccountVote_V2_t vote;
} pd_democracy_vote_V2_t;

#define PD_CALL_DEMOCRACY_EMERGENCY_CANCEL_V2 3
typedef struct {
    pd_ReferendumIndex_V2_t ref_index;
} pd_democracy_emergency_cancel_V2_t;

#define PD_CALL_DEMOCRACY_EXTERNAL_PROPOSE_V2 4
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_external_propose_V2_t;

#define PD_CALL_DEMOCRACY_EXTERNAL_PROPOSE_MAJORITY_V2 5
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_external_propose_majority_V2_t;

#define PD_CALL_DEMOCRACY_EXTERNAL_PROPOSE_DEFAULT_V2 6
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_external_propose_default_V2_t;

#define PD_CALL_DEMOCRACY_FAST_TRACK_V2 7
typedef struct {
    pd_Hash_t proposal_hash;
    pd_BlockNumber_t voting_period;
    pd_BlockNumber_t delay;
} pd_democracy_fast_track_V2_t;

#define PD_CALL_DEMOCRACY_VETO_EXTERNAL_V2 8
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_veto_external_V2_t;

#define PD_CALL_DEMOCRACY_CANCEL_REFERENDUM_V2 9
typedef struct {
    pd_Compactu32_t ref_index;
} pd_democracy_cancel_referendum_V2_t;

#define PD_CALL_DEMOCRACY_CANCEL_QUEUED_V2 10
typedef struct {
    pd_ReferendumIndex_V2_t which;
} pd_democracy_cancel_queued_V2_t;

#define PD_CALL_DEMOCRACY_DELEGATE_V2 11
typedef struct {
    pd_AccountId_V2_t to;
    pd_Conviction_V2_t conviction;
    pd_Balance_t balance;
} pd_democracy_delegate_V2_t;

#define PD_CALL_DEMOCRACY_UNDELEGATE_V2 12
typedef struct {
} pd_democracy_undelegate_V2_t;

#define PD_CALL_DEMOCRACY_CLEAR_PUBLIC_PROPOSALS_V2 13
typedef struct {
} pd_democracy_clear_public_proposals_V2_t;

#define PD_CALL_DEMOCRACY_NOTE_PREIMAGE_V2 14
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_preimage_V2_t;

#define PD_CALL_DEMOCRACY_NOTE_PREIMAGE_OPERATIONAL_V2 15
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_preimage_operational_V2_t;

#define PD_CALL_DEMOCRACY_NOTE_IMMINENT_PREIMAGE_V2 16
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_imminent_preimage_V2_t;

#define PD_CALL_DEMOCRACY_NOTE_IMMINENT_PREIMAGE_OPERATIONAL_V2 17
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_imminent_preimage_operational_V2_t;

#define PD_CALL_DEMOCRACY_REAP_PREIMAGE_V2 18
typedef struct {
    pd_Hash_t proposal_hash;
    pd_Compactu32_t proposal_len_upper_bound;
} pd_democracy_reap_preimage_V2_t;

#define PD_CALL_DEMOCRACY_UNLOCK_V2 19
typedef struct {
    pd_AccountId_V2_t target;
} pd_democracy_unlock_V2_t;

#define PD_CALL_DEMOCRACY_REMOVE_VOTE_V2 20
typedef struct {
    pd_ReferendumIndex_V2_t index;
} pd_democracy_remove_vote_V2_t;

#define PD_CALL_DEMOCRACY_REMOVE_OTHER_VOTE_V2 21
typedef struct {
    pd_AccountId_V2_t target;
    pd_ReferendumIndex_V2_t index;
} pd_democracy_remove_other_vote_V2_t;

#define PD_CALL_DEMOCRACY_ENACT_PROPOSAL_V2 22
typedef struct {
    pd_Hash_t proposal_hash;
    pd_ReferendumIndex_V2_t index;
} pd_democracy_enact_proposal_V2_t;

#define PD_CALL_DEMOCRACY_BLACKLIST_V2 23
typedef struct {
    pd_Hash_t proposal_hash;
    pd_Optionu32_t maybe_ref_index;
} pd_democracy_blacklist_V2_t;

#define PD_CALL_DEMOCRACY_CANCEL_PROPOSAL_V2 24
typedef struct {
    pd_Compactu32_t prop_index;
} pd_democracy_cancel_proposal_V2_t;

#define PD_CALL_COUNCIL_EXECUTE_V2 1
typedef struct {
    pd_Proposal_t proposal;
    pd_Compactu32_t length_bound;
} pd_council_execute_V2_t;

#define PD_CALL_COUNCIL_PROPOSE_V2 2
typedef struct {
    pd_Compactu32_t threshold;
    pd_Proposal_t proposal;
    pd_Compactu32_t length_bound;
} pd_council_propose_V2_t;

#define PD_CALL_COUNCIL_SET_MEMBERS_V2 0
typedef struct {
    pd_VecAccountId_V2_t new_members;
    pd_OptionAccountId_V2_t prime;
    pd_MemberCount_V2_t old_count;
} pd_council_set_members_V2_t;

#define PD_CALL_COUNCIL_VOTE_V2 3
typedef struct {
    pd_Hash_t proposal;
    pd_Compactu32_t index;
    pd_bool_t approve;
} pd_council_vote_V2_t;

#define PD_CALL_COUNCIL_CLOSE_V2 4
typedef struct {
    pd_Hash_t proposal_hash;
    pd_Compactu32_t index;
    pd_Compactu64_t proposal_weight_bound;
    pd_Compactu32_t length_bound;
} pd_council_close_V2_t;

#define PD_CALL_COUNCIL_DISAPPROVE_PROPOSAL_V2 5
typedef struct {
    pd_Hash_t proposal_hash;
} pd_council_disapprove_proposal_V2_t;

#define PD_CALL_TECHNICALCOMMITTEE_VOTE_V2 3
typedef struct {
    pd_Hash_t proposal;
    pd_Compactu32_t index;
    pd_bool_t approve;
} pd_technicalcommittee_vote_V2_t;

#define PD_CALL_TECHNICALCOMMITTEE_CLOSE_V2 4
typedef struct {
    pd_Hash_t proposal_hash;
    pd_Compactu32_t index;
    pd_Compactu64_t proposal_weight_bound;
    pd_Compactu32_t length_bound;
} pd_technicalcommittee_close_V2_t;

#define PD_CALL_TECHNICALCOMMITTEE_DISAPPROVE_PROPOSAL_V2 5
typedef struct {
    pd_Hash_t proposal_hash;
} pd_technicalcommittee_disapprove_proposal_V2_t;

#define PD_CALL_PHRAGMENELECTION_REMOVE_VOTER_V2 1
typedef struct {
} pd_phragmenelection_remove_voter_V2_t;

#define PD_CALL_PHRAGMENELECTION_SUBMIT_CANDIDACY_V2 2
typedef struct {
    pd_Compactu32_t candidate_count;
} pd_phragmenelection_submit_candidacy_V2_t;

#define PD_CALL_PHRAGMENELECTION_REMOVE_MEMBER_V2 4
typedef struct {
    pd_LookupasStaticLookupSource_V2_t who;
    pd_bool_t has_replacement;
} pd_phragmenelection_remove_member_V2_t;

#define PD_CALL_PHRAGMENELECTION_CLEAN_DEFUNCT_VOTERS_V2 5
typedef struct {
    pd_u32_t num_voters;
    pd_u32_t num_defunct;
} pd_phragmenelection_clean_defunct_voters_V2_t;

#define PD_CALL_TECHNICALMEMBERSHIP_ADD_MEMBER_V2 0
typedef struct {
    pd_AccountId_V2_t who;
} pd_technicalmembership_add_member_V2_t;

#define PD_CALL_TECHNICALMEMBERSHIP_REMOVE_MEMBER_V2 1
typedef struct {
    pd_AccountId_V2_t who;
} pd_technicalmembership_remove_member_V2_t;

#define PD_CALL_TECHNICALMEMBERSHIP_SWAP_MEMBER_V2 2
typedef struct {
    pd_AccountId_V2_t remove;
    pd_AccountId_V2_t add;
} pd_technicalmembership_swap_member_V2_t;

#define PD_CALL_TECHNICALMEMBERSHIP_RESET_MEMBERS_V2 3
typedef struct {
    pd_VecAccountId_V2_t members;
} pd_technicalmembership_reset_members_V2_t;

#define PD_CALL_TECHNICALMEMBERSHIP_CHANGE_KEY_V2 4
typedef struct {
    pd_AccountId_V2_t new_;
} pd_technicalmembership_change_key_V2_t;

#define PD_CALL_TECHNICALMEMBERSHIP_SET_PRIME_V2 5
typedef struct {
    pd_AccountId_V2_t who;
} pd_technicalmembership_set_prime_V2_t;

#define PD_CALL_TECHNICALMEMBERSHIP_CLEAR_PRIME_V2 6
typedef struct {
} pd_technicalmembership_clear_prime_V2_t;

#define PD_CALL_TREASURY_PROPOSE_SPEND_V2 0
typedef struct {
    pd_CompactBalance_t amount;
    pd_LookupasStaticLookupSource_V2_t beneficiary;
} pd_treasury_propose_spend_V2_t;

#define PD_CALL_TREASURY_REJECT_PROPOSAL_V2 1
typedef struct {
    pd_Compactu32_t proposal_id;
} pd_treasury_reject_proposal_V2_t;

#define PD_CALL_TREASURY_APPROVE_PROPOSAL_V2 2
typedef struct {
    pd_Compactu32_t proposal_id;
} pd_treasury_approve_proposal_V2_t;

#define PD_CALL_CLAIMS_CLAIM_V2 0
typedef struct {
    pd_AccountId_V2_t dest;
    pd_EcdsaSignature_V2_t ethereum_signature;
} pd_claims_claim_V2_t;

#define PD_CALL_CLAIMS_CLAIM_ATTEST_V2 2
typedef struct {
    pd_AccountId_V2_t dest;
    pd_EcdsaSignature_V2_t ethereum_signature;
    pd_Bytes_t statement;
} pd_claims_claim_attest_V2_t;

#define PD_CALL_CLAIMS_ATTEST_V2 3
typedef struct {
    pd_Bytes_t statement;
} pd_claims_attest_V2_t;

#define PD_CALL_CLAIMS_MOVE_CLAIM_V2 4
typedef struct {
    pd_EthereumAddress_V2_t old;
    pd_EthereumAddress_V2_t new_;
    pd_OptionAccountId_V2_t maybe_preclaim;
} pd_claims_move_claim_V2_t;

#define PD_CALL_VESTING_VEST_V2 0
typedef struct {
} pd_vesting_vest_V2_t;

#define PD_CALL_VESTING_VEST_OTHER_V2 1
typedef struct {
    pd_LookupasStaticLookupSource_V2_t target;
} pd_vesting_vest_other_V2_t;

#define PD_CALL_VESTING_VESTED_TRANSFER_V2 2
typedef struct {
    pd_AccountIdLookupOfT_V2_t target;
    pd_VestingInfo_t schedule;
} pd_vesting_vested_transfer_V2_t;

#define PD_CALL_VESTING_FORCE_VESTED_TRANSFER_V2 3
typedef struct {
    pd_AccountIdLookupOfT_V2_t source;
    pd_AccountIdLookupOfT_V2_t target;
    pd_VestingInfo_t schedule;
} pd_vesting_force_vested_transfer_V2_t;

#define PD_CALL_VESTING_MERGE_SCHEDULES_V2 4
typedef struct {
    pd_u32_t schedule1_index;
    pd_u32_t schedule2_index;
} pd_vesting_merge_schedules_V2_t;

#define PD_CALL_IDENTITY_ADD_REGISTRAR_V2 0
typedef struct {
    pd_AccountId_V2_t account;
} pd_identity_add_registrar_V2_t;

#define PD_CALL_IDENTITY_SET_IDENTITY_V2 1
typedef struct {
    pd_IdentityInfo_t info;
} pd_identity_set_identity_V2_t;

#define PD_CALL_IDENTITY_SET_SUBS_V2 2
typedef struct {
    pd_VecTupleAccountIdData_V2_t subs;
} pd_identity_set_subs_V2_t;

#define PD_CALL_IDENTITY_CLEAR_IDENTITY_V2 3
typedef struct {
} pd_identity_clear_identity_V2_t;

#define PD_CALL_IDENTITY_REQUEST_JUDGEMENT_V2 4
typedef struct {
    pd_Compactu32_t reg_index;
    pd_Compactu128_t max_fee;
} pd_identity_request_judgement_V2_t;

#define PD_CALL_IDENTITY_CANCEL_REQUEST_V2 5
typedef struct {
    pd_RegistrarIndex_V2_t reg_index;
} pd_identity_cancel_request_V2_t;

#define PD_CALL_IDENTITY_SET_FEE_V2 6
typedef struct {
    pd_Compactu32_t index;
    pd_Compactu128_t fee;
} pd_identity_set_fee_V2_t;

#define PD_CALL_IDENTITY_SET_ACCOUNT_ID_V2 7
typedef struct {
    pd_Compactu32_t index;
    pd_AccountId_V2_t new_;
} pd_identity_set_account_id_V2_t;

#define PD_CALL_IDENTITY_PROVIDE_JUDGEMENT_V2 9
typedef struct {
    pd_Compactu32_t reg_index;
    pd_LookupasStaticLookupSource_V2_t target;
    pd_JudgementBalanceOfT_V2_t judgement;
} pd_identity_provide_judgement_V2_t;

#define PD_CALL_IDENTITY_KILL_IDENTITY_V2 10
typedef struct {
    pd_LookupasStaticLookupSource_V2_t target;
} pd_identity_kill_identity_V2_t;

#define PD_CALL_IDENTITY_ADD_SUB_V2 11
typedef struct {
    pd_LookupasStaticLookupSource_V2_t sub;
    pd_Data_t data;
} pd_identity_add_sub_V2_t;

#define PD_CALL_IDENTITY_RENAME_SUB_V2 12
typedef struct {
    pd_LookupasStaticLookupSource_V2_t sub;
    pd_Data_t data;
} pd_identity_rename_sub_V2_t;

#define PD_CALL_IDENTITY_REMOVE_SUB_V2 13
typedef struct {
    pd_LookupasStaticLookupSource_V2_t sub;
} pd_identity_remove_sub_V2_t;

#define PD_CALL_IDENTITY_QUIT_SUB_V2 14
typedef struct {
} pd_identity_quit_sub_V2_t;

#define PD_CALL_PROXY_ADD_PROXY_V2 1
typedef struct {
    pd_AccountId_V2_t delegate;
    pd_ProxyType_V2_t proxy_type;
    pd_BlockNumber_t delay;
} pd_proxy_add_proxy_V2_t;

#define PD_CALL_PROXY_REMOVE_PROXY_V2 2
typedef struct {
    pd_AccountId_V2_t delegate;
    pd_ProxyType_V2_t proxy_type;
    pd_BlockNumber_t delay;
} pd_proxy_remove_proxy_V2_t;

#define PD_CALL_PROXY_REMOVE_PROXIES_V2 3
typedef struct {
} pd_proxy_remove_proxies_V2_t;

#define PD_CALL_PROXY_ANONYMOUS_V2 4
typedef struct {
    pd_ProxyType_V2_t proxy_type;
    pd_BlockNumber_t delay;
    pd_u16_t index;
} pd_proxy_anonymous_V2_t;

#define PD_CALL_PROXY_KILL_ANONYMOUS_V2 5
typedef struct {
    pd_AccountId_V2_t spawner;
    pd_ProxyType_V2_t proxy_type;
    pd_u16_t index;
    pd_Compactu32_t height;
    pd_Compactu32_t ext_index;
} pd_proxy_kill_anonymous_V2_t;

#define PD_CALL_PROXY_PROXY_ANNOUNCED_V2 9
typedef struct {
    pd_AccountId_V2_t delegate;
    pd_AccountId_V2_t real;
    pd_OptionProxyType_V2_t force_proxy_type;
    pd_Call_t call;
} pd_proxy_proxy_announced_V2_t;

#define PD_CALL_BOUNTIES_PROPOSE_BOUNTY_V2 0
typedef struct {
    pd_CompactBalance_t amount;
    pd_Bytes_t description;
} pd_bounties_propose_bounty_V2_t;

#define PD_CALL_BOUNTIES_APPROVE_BOUNTY_V2 1
typedef struct {
    pd_Compactu32_t bounty_id;
} pd_bounties_approve_bounty_V2_t;

#define PD_CALL_BOUNTIES_PROPOSE_CURATOR_V2 2
typedef struct {
    pd_Compactu32_t bounty_id;
    pd_LookupasStaticLookupSource_V2_t curator;
    pd_CompactBalance_t fee;
} pd_bounties_propose_curator_V2_t;

#define PD_CALL_BOUNTIES_UNASSIGN_CURATOR_V2 3
typedef struct {
    pd_Compactu32_t bounty_id;
} pd_bounties_unassign_curator_V2_t;

#define PD_CALL_BOUNTIES_ACCEPT_CURATOR_V2 4
typedef struct {
    pd_Compactu32_t bounty_id;
} pd_bounties_accept_curator_V2_t;

#define PD_CALL_BOUNTIES_AWARD_BOUNTY_V2 5
typedef struct {
    pd_Compactu32_t bounty_id;
    pd_LookupasStaticLookupSource_V2_t beneficiary;
} pd_bounties_award_bounty_V2_t;

#define PD_CALL_BOUNTIES_CLAIM_BOUNTY_V2 6
typedef struct {
    pd_Compactu32_t bounty_id;
} pd_bounties_claim_bounty_V2_t;

#define PD_CALL_BOUNTIES_CLOSE_BOUNTY_V2 7
typedef struct {
    pd_Compactu32_t bounty_id;
} pd_bounties_close_bounty_V2_t;

#define PD_CALL_BOUNTIES_EXTEND_BOUNTY_EXPIRY_V2 8
typedef struct {
    pd_Compactu32_t bounty_id;
    pd_Bytes_t remark;
} pd_bounties_extend_bounty_expiry_V2_t;

#define PD_CALL_TIPS_REPORT_AWESOME_V2 0
typedef struct {
    pd_Bytes_t reason;
    pd_AccountId_V2_t who;
} pd_tips_report_awesome_V2_t;

#define PD_CALL_TIPS_RETRACT_TIP_V2 1
typedef struct {
    pd_Hash_t hash;
} pd_tips_retract_tip_V2_t;

#define PD_CALL_TIPS_TIP_NEW_V2 2
typedef struct {
    pd_Bytes_t reason;
    pd_AccountId_V2_t who;
    pd_Compactu128_t tip_value;
} pd_tips_tip_new_V2_t;

#define PD_CALL_TIPS_TIP_V2 3
typedef struct {
    pd_Hash_t hash;
    pd_Compactu128_t tip_value;
} pd_tips_tip_V2_t;

#define PD_CALL_TIPS_CLOSE_TIP_V2 4
typedef struct {
    pd_Hash_t hash;
} pd_tips_close_tip_V2_t;

#define PD_CALL_TIPS_SLASH_TIP_V2 5
typedef struct {
    pd_Hash_t hash;
} pd_tips_slash_tip_V2_t;

#define PD_CALL_ELECTIONPROVIDERMULTIPHASE_GOVERNANCE_FALLBACK_V2 4
typedef struct {
    pd_Optionu32_t maybe_max_voters;
    pd_Optionu32_t maybe_max_targets;
} pd_electionprovidermultiphase_governance_fallback_V2_t;

#define PD_CALL_BAGSLIST_REBAG_V2 0
typedef struct {
    pd_AccountId_V2_t dislocated;
} pd_bagslist_rebag_V2_t;

#define PD_CALL_BAGSLIST_PUT_IN_FRONT_OF_V2 1
typedef struct {
    pd_AccountId_V2_t lighter;
} pd_bagslist_put_in_front_of_V2_t;

#define PD_CALL_CONFIGURATION_SET_VALIDATION_UPGRADE_COOLDOWN_V2 0
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_validation_upgrade_cooldown_V2_t;

#define PD_CALL_CONFIGURATION_SET_VALIDATION_UPGRADE_DELAY_V2 1
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_validation_upgrade_delay_V2_t;

#define PD_CALL_CONFIGURATION_SET_CODE_RETENTION_PERIOD_V2 2
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_code_retention_period_V2_t;

#define PD_CALL_CONFIGURATION_SET_MAX_CODE_SIZE_V2 3
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_code_size_V2_t;

#define PD_CALL_CONFIGURATION_SET_MAX_POV_SIZE_V2 4
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_pov_size_V2_t;

#define PD_CALL_CONFIGURATION_SET_MAX_HEAD_DATA_SIZE_V2 5
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_head_data_size_V2_t;

#define PD_CALL_CONFIGURATION_SET_PARATHREAD_CORES_V2 6
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_parathread_cores_V2_t;

#define PD_CALL_CONFIGURATION_SET_PARATHREAD_RETRIES_V2 7
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_parathread_retries_V2_t;

#define PD_CALL_CONFIGURATION_SET_GROUP_ROTATION_FREQUENCY_V2 8
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_group_rotation_frequency_V2_t;

#define PD_CALL_CONFIGURATION_SET_CHAIN_AVAILABILITY_PERIOD_V2 9
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_chain_availability_period_V2_t;

#define PD_CALL_CONFIGURATION_SET_THREAD_AVAILABILITY_PERIOD_V2 10
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_thread_availability_period_V2_t;

#define PD_CALL_CONFIGURATION_SET_SCHEDULING_LOOKAHEAD_V2 11
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_scheduling_lookahead_V2_t;

#define PD_CALL_CONFIGURATION_SET_MAX_VALIDATORS_PER_CORE_V2 12
typedef struct {
    pd_Optionu32_t new_;
} pd_configuration_set_max_validators_per_core_V2_t;

#define PD_CALL_CONFIGURATION_SET_MAX_VALIDATORS_V2 13
typedef struct {
    pd_Optionu32_t new_;
} pd_configuration_set_max_validators_V2_t;

#define PD_CALL_CONFIGURATION_SET_DISPUTE_POST_CONCLUSION_ACCEPTANCE_PERIOD_V2 15
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_dispute_post_conclusion_acceptance_period_V2_t;

#define PD_CALL_CONFIGURATION_SET_DISPUTE_MAX_SPAM_SLOTS_V2 16
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_dispute_max_spam_slots_V2_t;

#define PD_CALL_CONFIGURATION_SET_DISPUTE_CONCLUSION_BY_TIME_OUT_PERIOD_V2 17
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_dispute_conclusion_by_time_out_period_V2_t;

#define PD_CALL_CONFIGURATION_SET_NO_SHOW_SLOTS_V2 18
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_no_show_slots_V2_t;

#define PD_CALL_CONFIGURATION_SET_N_DELAY_TRANCHES_V2 19
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_n_delay_tranches_V2_t;

#define PD_CALL_CONFIGURATION_SET_ZEROTH_DELAY_TRANCHE_WIDTH_V2 20
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_zeroth_delay_tranche_width_V2_t;

#define PD_CALL_CONFIGURATION_SET_NEEDED_APPROVALS_V2 21
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_needed_approvals_V2_t;

#define PD_CALL_CONFIGURATION_SET_RELAY_VRF_MODULO_SAMPLES_V2 22
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_relay_vrf_modulo_samples_V2_t;

#define PD_CALL_CONFIGURATION_SET_MAX_UPWARD_QUEUE_COUNT_V2 23
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_upward_queue_count_V2_t;

#define PD_CALL_CONFIGURATION_SET_MAX_UPWARD_QUEUE_SIZE_V2 24
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_upward_queue_size_V2_t;

#define PD_CALL_CONFIGURATION_SET_MAX_DOWNWARD_MESSAGE_SIZE_V2 25
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_downward_message_size_V2_t;

#define PD_CALL_CONFIGURATION_SET_UMP_SERVICE_TOTAL_WEIGHT_V2 26
typedef struct {
    pd_Weight_V2_t new_;
} pd_configuration_set_ump_service_total_weight_V2_t;

#define PD_CALL_CONFIGURATION_SET_MAX_UPWARD_MESSAGE_SIZE_V2 27
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_upward_message_size_V2_t;

#define PD_CALL_CONFIGURATION_SET_MAX_UPWARD_MESSAGE_NUM_PER_CANDIDATE_V2 28
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_upward_message_num_per_candidate_V2_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_OPEN_REQUEST_TTL_V2 29
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_open_request_ttl_V2_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_SENDER_DEPOSIT_V2 30
typedef struct {
    pd_Balance_t new_;
} pd_configuration_set_hrmp_sender_deposit_V2_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_RECIPIENT_DEPOSIT_V2 31
typedef struct {
    pd_Balance_t new_;
} pd_configuration_set_hrmp_recipient_deposit_V2_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_CHANNEL_MAX_CAPACITY_V2 32
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_channel_max_capacity_V2_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_CHANNEL_MAX_TOTAL_SIZE_V2 33
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_channel_max_total_size_V2_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_MAX_PARACHAIN_INBOUND_CHANNELS_V2 34
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_max_parachain_inbound_channels_V2_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_MAX_PARATHREAD_INBOUND_CHANNELS_V2 35
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_max_parathread_inbound_channels_V2_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_CHANNEL_MAX_MESSAGE_SIZE_V2 36
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_channel_max_message_size_V2_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_MAX_PARACHAIN_OUTBOUND_CHANNELS_V2 37
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_max_parachain_outbound_channels_V2_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_MAX_PARATHREAD_OUTBOUND_CHANNELS_V2 38
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_max_parathread_outbound_channels_V2_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_MAX_MESSAGE_NUM_PER_CANDIDATE_V2 39
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_max_message_num_per_candidate_V2_t;

#define PD_CALL_CONFIGURATION_SET_UMP_MAX_INDIVIDUAL_WEIGHT_V2 40
typedef struct {
    pd_Weight_V2_t new_;
} pd_configuration_set_ump_max_individual_weight_V2_t;

#define PD_CALL_CONFIGURATION_SET_PVF_CHECKING_ENABLED_V2 41
typedef struct {
    pd_bool_t new_;
} pd_configuration_set_pvf_checking_enabled_V2_t;

#define PD_CALL_CONFIGURATION_SET_PVF_VOTING_TTL_V2 42
typedef struct {
    pd_SessionIndex_V2_t new_;
} pd_configuration_set_pvf_voting_ttl_V2_t;

#define PD_CALL_CONFIGURATION_SET_MINIMUM_VALIDATION_UPGRADE_DELAY_V2 43
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_minimum_validation_upgrade_delay_V2_t;

#define PD_CALL_CONFIGURATION_SET_BYPASS_CONSISTENCY_CHECK_V2 44
typedef struct {
    pd_bool_t new_;
} pd_configuration_set_bypass_consistency_check_V2_t;

#define PD_CALL_INITIALIZER_FORCE_APPROVE_V2 0
typedef struct {
    pd_BlockNumber_t up_to;
} pd_initializer_force_approve_V2_t;

#define PD_CALL_HRMP_FORCE_PROCESS_HRMP_OPEN_V2 4
typedef struct {
    pd_u32_t channels;
} pd_hrmp_force_process_hrmp_open_V2_t;

#define PD_CALL_HRMP_FORCE_PROCESS_HRMP_CLOSE_V2 5
typedef struct {
    pd_u32_t channels;
} pd_hrmp_force_process_hrmp_close_V2_t;

#define PD_CALL_PARASDISPUTES_FORCE_UNFREEZE_V2 0
typedef struct {
} pd_parasdisputes_force_unfreeze_V2_t;

#define PD_CALL_REGISTRAR_RESERVE_V2 5
typedef struct {
} pd_registrar_reserve_V2_t;

#define PD_CALL_AUCTIONS_NEW_AUCTION_V2 0
typedef struct {
    pd_Compactu32_t duration;
    pd_Compactu32_t lease_period_index;
} pd_auctions_new_auction_V2_t;

#define PD_CALL_AUCTIONS_BID_V2 1
typedef struct {
    pd_Compactu32_t para;
    pd_Compactu32_t auction_index;
    pd_Compactu32_t first_slot;
    pd_Compactu32_t last_slot;
    pd_CompactBalance_t amount;
} pd_auctions_bid_V2_t;

#define PD_CALL_AUCTIONS_CANCEL_AUCTION_V2 2
typedef struct {
} pd_auctions_cancel_auction_V2_t;

#endif

typedef union {
    pd_balances_transfer_all_V2_t balances_transfer_all_V2;
    pd_staking_bond_V2_t staking_bond_V2;
    pd_staking_bond_extra_V2_t staking_bond_extra_V2;
    pd_staking_unbond_V2_t staking_unbond_V2;
    pd_staking_withdraw_unbonded_V2_t staking_withdraw_unbonded_V2;
    pd_staking_validate_V2_t staking_validate_V2;
    pd_staking_nominate_V2_t staking_nominate_V2;
    pd_staking_chill_V2_t staking_chill_V2;
    pd_staking_set_payee_V2_t staking_set_payee_V2;
    pd_staking_set_controller_V2_t staking_set_controller_V2;
    pd_staking_payout_stakers_V2_t staking_payout_stakers_V2;
    pd_staking_rebond_V2_t staking_rebond_V2;
    pd_session_set_keys_V2_t session_set_keys_V2;
    pd_session_purge_keys_V2_t session_purge_keys_V2;
    pd_utility_batch_V2_t utility_batch_V2;
    pd_utility_as_derivative_V2_t utility_as_derivative_V2;
    pd_utility_batch_all_V2_t utility_batch_all_V2;
#ifdef SUBSTRATE_PARSER_FULL
    pd_timestamp_set_V2_t timestamp_set_V2;
    pd_indices_claim_V2_t indices_claim_V2;
    pd_indices_free_V2_t indices_free_V2;
    pd_indices_force_transfer_V2_t indices_force_transfer_V2;
    pd_indices_freeze_V2_t indices_freeze_V2;
    pd_balances_force_unreserve_V2_t balances_force_unreserve_V2;
    pd_staking_set_validator_count_V2_t staking_set_validator_count_V2;
    pd_staking_increase_validator_count_V2_t staking_increase_validator_count_V2;
     pd_staking_scale_validator_count_V2_t staking_scale_validator_count_V2;
    pd_staking_force_no_eras_V2_t staking_force_no_eras_V2;
    pd_staking_force_new_era_V2_t staking_force_new_era_V2;
    pd_staking_set_invulnerables_V2_t staking_set_invulnerables_V2;
    pd_staking_force_unstake_V2_t staking_force_unstake_V2;
    pd_staking_force_new_era_always_V2_t staking_force_new_era_always_V2;
    pd_staking_cancel_deferred_slash_V2_t staking_cancel_deferred_slash_V2;
    pd_staking_set_history_depth_V2_t staking_set_history_depth_V2;
    pd_staking_reap_stash_V2_t staking_reap_stash_V2;
    pd_staking_kick_V2_t staking_kick_V2;
    pd_staking_set_staking_configs_V2_t staking_set_staking_configs_V2;
    pd_staking_chill_other_V2_t staking_chill_other_V2;
    pd_staking_force_apply_min_commission_V2_t staking_force_apply_min_commission_V2;
    pd_grandpa_note_stalled_V2_t grandpa_note_stalled_V2;
    pd_democracy_propose_V2_t democracy_propose_V2;
    pd_democracy_second_V2_t democracy_second_V2;
    pd_democracy_vote_V2_t democracy_vote_V2;
    pd_democracy_emergency_cancel_V2_t democracy_emergency_cancel_V2;
    pd_democracy_external_propose_V2_t democracy_external_propose_V2;
    pd_democracy_external_propose_majority_V2_t democracy_external_propose_majority_V2;
    pd_democracy_external_propose_default_V2_t democracy_external_propose_default_V2;
    pd_democracy_fast_track_V2_t democracy_fast_track_V2;
    pd_democracy_veto_external_V2_t democracy_veto_external_V2;
    pd_democracy_cancel_referendum_V2_t democracy_cancel_referendum_V2;
    pd_democracy_cancel_queued_V2_t democracy_cancel_queued_V2;
    pd_democracy_delegate_V2_t democracy_delegate_V2;
    pd_democracy_undelegate_V2_t democracy_undelegate_V2;
    pd_democracy_clear_public_proposals_V2_t democracy_clear_public_proposals_V2;
    pd_democracy_note_preimage_V2_t democracy_note_preimage_V2;
    pd_democracy_note_preimage_operational_V2_t democracy_note_preimage_operational_V2;
    pd_democracy_note_imminent_preimage_V2_t democracy_note_imminent_preimage_V2;
    pd_democracy_note_imminent_preimage_operational_V2_t democracy_note_imminent_preimage_operational_V2;
    pd_democracy_reap_preimage_V2_t democracy_reap_preimage_V2;
    pd_democracy_unlock_V2_t democracy_unlock_V2;
    pd_democracy_remove_vote_V2_t democracy_remove_vote_V2;
    pd_democracy_remove_other_vote_V2_t democracy_remove_other_vote_V2;
    pd_democracy_enact_proposal_V2_t democracy_enact_proposal_V2;
    pd_democracy_blacklist_V2_t democracy_blacklist_V2;
    pd_democracy_cancel_proposal_V2_t democracy_cancel_proposal_V2;
    pd_council_set_members_V2_t council_set_members_V2;
    pd_council_vote_V2_t council_vote_V2;
    pd_council_close_V2_t council_close_V2;
    pd_council_disapprove_proposal_V2_t council_disapprove_proposal_V2;
    pd_technicalcommittee_vote_V2_t technicalcommittee_vote_V2;
    pd_technicalcommittee_close_V2_t technicalcommittee_close_V2;
    pd_technicalcommittee_disapprove_proposal_V2_t technicalcommittee_disapprove_proposal_V2;
    pd_phragmenelection_remove_voter_V2_t phragmenelection_remove_voter_V2;
    pd_phragmenelection_submit_candidacy_V2_t phragmenelection_submit_candidacy_V2;
    pd_phragmenelection_remove_member_V2_t phragmenelection_remove_member_V2;
    pd_phragmenelection_clean_defunct_voters_V2_t phragmenelection_clean_defunct_voters_V2;
    pd_technicalmembership_add_member_V2_t technicalmembership_add_member_V2;
    pd_technicalmembership_remove_member_V2_t technicalmembership_remove_member_V2;
    pd_technicalmembership_swap_member_V2_t technicalmembership_swap_member_V2;
    pd_technicalmembership_reset_members_V2_t technicalmembership_reset_members_V2;
    pd_technicalmembership_change_key_V2_t technicalmembership_change_key_V2;
    pd_technicalmembership_set_prime_V2_t technicalmembership_set_prime_V2;
    pd_technicalmembership_clear_prime_V2_t technicalmembership_clear_prime_V2;
    pd_treasury_propose_spend_V2_t treasury_propose_spend_V2;
    pd_treasury_reject_proposal_V2_t treasury_reject_proposal_V2;
    pd_treasury_approve_proposal_V2_t treasury_approve_proposal_V2;
    pd_claims_claim_V2_t claims_claim_V2;
    pd_claims_claim_attest_V2_t claims_claim_attest_V2;
    pd_claims_attest_V2_t claims_attest_V2;
    pd_claims_move_claim_V2_t claims_move_claim_V2;
    pd_vesting_vest_V2_t vesting_vest_V2;
    pd_vesting_vest_other_V2_t vesting_vest_other_V2;
    pd_vesting_vested_transfer_V2_t vesting_vested_transfer_V2;
    pd_vesting_force_vested_transfer_V2_t vesting_force_vested_transfer_V2;
    pd_vesting_merge_schedules_V2_t vesting_merge_schedules_V2;
    pd_identity_add_registrar_V2_t identity_add_registrar_V2;
    pd_identity_set_identity_V2_t identity_set_identity_V2;
    pd_identity_set_subs_V2_t identity_set_subs_V2;
    pd_identity_clear_identity_V2_t identity_clear_identity_V2;
    pd_identity_request_judgement_V2_t identity_request_judgement_V2;
    pd_identity_cancel_request_V2_t identity_cancel_request_V2;
    pd_identity_set_fee_V2_t identity_set_fee_V2;
    pd_identity_set_account_id_V2_t identity_set_account_id_V2;
    pd_identity_provide_judgement_V2_t identity_provide_judgement_V2;
    pd_identity_kill_identity_V2_t identity_kill_identity_V2;
    pd_identity_add_sub_V2_t identity_add_sub_V2;
    pd_identity_rename_sub_V2_t identity_rename_sub_V2;
    pd_identity_remove_sub_V2_t identity_remove_sub_V2;
    pd_identity_quit_sub_V2_t identity_quit_sub_V2;
    pd_proxy_add_proxy_V2_t proxy_add_proxy_V2;
    pd_proxy_remove_proxy_V2_t proxy_remove_proxy_V2;
    pd_proxy_remove_proxies_V2_t proxy_remove_proxies_V2;
    pd_proxy_anonymous_V2_t proxy_anonymous_V2;
    pd_proxy_kill_anonymous_V2_t proxy_kill_anonymous_V2;
    pd_proxy_proxy_announced_V2_t proxy_proxy_announced_V2;
    pd_bounties_propose_bounty_V2_t bounties_propose_bounty_V2;
    pd_bounties_approve_bounty_V2_t bounties_approve_bounty_V2;
    pd_bounties_propose_curator_V2_t bounties_propose_curator_V2;
    pd_bounties_unassign_curator_V2_t bounties_unassign_curator_V2;
    pd_bounties_accept_curator_V2_t bounties_accept_curator_V2;
    pd_bounties_award_bounty_V2_t bounties_award_bounty_V2;
    pd_bounties_claim_bounty_V2_t bounties_claim_bounty_V2;
    pd_bounties_close_bounty_V2_t bounties_close_bounty_V2;
    pd_bounties_extend_bounty_expiry_V2_t bounties_extend_bounty_expiry_V2;
    pd_tips_report_awesome_V2_t tips_report_awesome_V2;
    pd_tips_retract_tip_V2_t tips_retract_tip_V2;
    pd_tips_tip_new_V2_t tips_tip_new_V2;
    pd_tips_tip_V2_t tips_tip_V2;
    pd_tips_close_tip_V2_t tips_close_tip_V2;
    pd_tips_slash_tip_V2_t tips_slash_tip_V2;
    pd_electionprovidermultiphase_governance_fallback_V2_t electionprovidermultiphase_governance_fallback_V2;
    pd_bagslist_rebag_V2_t bagslist_rebag_V2;
    pd_bagslist_put_in_front_of_V2_t bagslist_put_in_front_of_V2;
    pd_configuration_set_validation_upgrade_cooldown_V2_t configuration_set_validation_upgrade_cooldown_V2;
    pd_configuration_set_validation_upgrade_delay_V2_t configuration_set_validation_upgrade_delay_V2;
    pd_configuration_set_code_retention_period_V2_t configuration_set_code_retention_period_V2;
    pd_configuration_set_max_code_size_V2_t configuration_set_max_code_size_V2;
    pd_configuration_set_max_pov_size_V2_t configuration_set_max_pov_size_V2;
    pd_configuration_set_max_head_data_size_V2_t configuration_set_max_head_data_size_V2;
    pd_configuration_set_parathread_cores_V2_t configuration_set_parathread_cores_V2;
    pd_configuration_set_parathread_retries_V2_t configuration_set_parathread_retries_V2;
    pd_configuration_set_group_rotation_frequency_V2_t configuration_set_group_rotation_frequency_V2;
    pd_configuration_set_chain_availability_period_V2_t configuration_set_chain_availability_period_V2;
    pd_configuration_set_thread_availability_period_V2_t configuration_set_thread_availability_period_V2;
    pd_configuration_set_scheduling_lookahead_V2_t configuration_set_scheduling_lookahead_V2;
    pd_configuration_set_max_validators_per_core_V2_t configuration_set_max_validators_per_core_V2;
    pd_configuration_set_max_validators_V2_t configuration_set_max_validators_V2;
    pd_configuration_set_dispute_post_conclusion_acceptance_period_V2_t configuration_set_dispute_post_conclusion_acceptance_period_V2;
    pd_configuration_set_dispute_max_spam_slots_V2_t configuration_set_dispute_max_spam_slots_V2;
    pd_configuration_set_dispute_conclusion_by_time_out_period_V2_t configuration_set_dispute_conclusion_by_time_out_period_V2;
    pd_configuration_set_no_show_slots_V2_t configuration_set_no_show_slots_V2;
    pd_configuration_set_n_delay_tranches_V2_t configuration_set_n_delay_tranches_V2;
    pd_configuration_set_zeroth_delay_tranche_width_V2_t configuration_set_zeroth_delay_tranche_width_V2;
    pd_configuration_set_needed_approvals_V2_t configuration_set_needed_approvals_V2;
    pd_configuration_set_relay_vrf_modulo_samples_V2_t configuration_set_relay_vrf_modulo_samples_V2;
    pd_configuration_set_max_upward_queue_count_V2_t configuration_set_max_upward_queue_count_V2;
    pd_configuration_set_max_upward_queue_size_V2_t configuration_set_max_upward_queue_size_V2;
    pd_configuration_set_max_downward_message_size_V2_t configuration_set_max_downward_message_size_V2;
    pd_configuration_set_ump_service_total_weight_V2_t configuration_set_ump_service_total_weight_V2;
    pd_configuration_set_max_upward_message_size_V2_t configuration_set_max_upward_message_size_V2;
    pd_configuration_set_max_upward_message_num_per_candidate_V2_t configuration_set_max_upward_message_num_per_candidate_V2;
    pd_configuration_set_hrmp_open_request_ttl_V2_t configuration_set_hrmp_open_request_ttl_V2;
    pd_configuration_set_hrmp_sender_deposit_V2_t configuration_set_hrmp_sender_deposit_V2;
    pd_configuration_set_hrmp_recipient_deposit_V2_t configuration_set_hrmp_recipient_deposit_V2;
    pd_configuration_set_hrmp_channel_max_capacity_V2_t configuration_set_hrmp_channel_max_capacity_V2;
    pd_configuration_set_hrmp_channel_max_total_size_V2_t configuration_set_hrmp_channel_max_total_size_V2;
    pd_configuration_set_hrmp_max_parachain_inbound_channels_V2_t configuration_set_hrmp_max_parachain_inbound_channels_V2;
    pd_configuration_set_hrmp_max_parathread_inbound_channels_V2_t configuration_set_hrmp_max_parathread_inbound_channels_V2;
    pd_configuration_set_hrmp_channel_max_message_size_V2_t configuration_set_hrmp_channel_max_message_size_V2;
    pd_configuration_set_hrmp_max_parachain_outbound_channels_V2_t configuration_set_hrmp_max_parachain_outbound_channels_V2;
    pd_configuration_set_hrmp_max_parathread_outbound_channels_V2_t configuration_set_hrmp_max_parathread_outbound_channels_V2;
    pd_configuration_set_hrmp_max_message_num_per_candidate_V2_t configuration_set_hrmp_max_message_num_per_candidate_V2;
    pd_configuration_set_ump_max_individual_weight_V2_t configuration_set_ump_max_individual_weight_V2;
    pd_configuration_set_pvf_checking_enabled_V2_t configuration_set_pvf_checking_enabled_V2;
    pd_configuration_set_pvf_voting_ttl_V2_t configuration_set_pvf_voting_ttl_V2;
    pd_configuration_set_minimum_validation_upgrade_delay_V2_t configuration_set_minimum_validation_upgrade_delay_V2;
    pd_configuration_set_bypass_consistency_check_V2_t configuration_set_bypass_consistency_check_V2;
    pd_initializer_force_approve_V2_t initializer_force_approve_V2;
    pd_hrmp_force_process_hrmp_open_V2_t hrmp_force_process_hrmp_open_V2;
    pd_hrmp_force_process_hrmp_close_V2_t hrmp_force_process_hrmp_close_V2;
    pd_parasdisputes_force_unfreeze_V2_t parasdisputes_force_unfreeze_V2;
    pd_registrar_reserve_V2_t registrar_reserve_V2;
    pd_auctions_new_auction_V2_t auctions_new_auction_V2;
    pd_auctions_bid_V2_t auctions_bid_V2;
    pd_auctions_cancel_auction_V2_t auctions_cancel_auction_V2;
#endif
} pd_MethodBasic_V2_t;

#define PD_CALL_BALANCES_TRANSFER_V2 0
typedef struct {
    pd_LookupasStaticLookupSource_V2_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_V2_t;

#define PD_CALL_BALANCES_FORCE_TRANSFER_V2 2
typedef struct {
    pd_LookupasStaticLookupSource_V2_t source;
    pd_LookupasStaticLookupSource_V2_t dest;
    pd_CompactBalance_t amount;
} pd_balances_force_transfer_V2_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V2 3
typedef struct {
    pd_LookupasStaticLookupSource_V2_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_keep_alive_V2_t;

#ifdef SUBSTRATE_PARSER_FULL
#define PD_CALL_SYSTEM_FILL_BLOCK_V2 0
typedef struct {
    pd_Perbill_V2_t ratio;
} pd_system_fill_block_V2_t;

#define PD_CALL_SYSTEM_REMARK_V2 1
typedef struct {
    pd_Vecu8_t remark;
} pd_system_remark_V2_t;

#define PD_CALL_SYSTEM_SET_HEAP_PAGES_V2 2
typedef struct {
    pd_u64_t pages;
} pd_system_set_heap_pages_V2_t;

#define PD_CALL_SYSTEM_SET_CODE_V2 3
typedef struct {
    pd_Vecu8_t code;
} pd_system_set_code_V2_t;

#define PD_CALL_SYSTEM_SET_CODE_WITHOUT_CHECKS_V2 4
typedef struct {
    pd_Vecu8_t code;
} pd_system_set_code_without_checks_V2_t;

#define PD_CALL_SYSTEM_REMARK_WITH_EVENT_V2 8
typedef struct {
    pd_Vecu8_t remark;
} pd_system_remark_with_event_V2_t;

#define PD_CALL_BALANCES_SET_BALANCE_V2 1
typedef struct {
    pd_LookupasStaticLookupSource_V2_t who;
    pd_CompactBalance_t new_free;
    pd_CompactBalance_t new_reserved;
} pd_balances_set_balance_V2_t;

#define PD_CALL_PROXY_PROXY_V2 0
typedef struct {
    pd_AccountId_V2_t real;
    pd_OptionProxyType_V2_t force_proxy_type;
    pd_Call_t call;
} pd_proxy_proxy_V2_t;

#define PD_CALL_MULTISIG_AS_MULTI_THRESHOLD_1_V2 0
typedef struct {
    pd_VecAccountId_V2_t other_signatories;
    pd_Call_t call;
} pd_multisig_as_multi_threshold_1_V2_t;

#define PD_CALL_MULTISIG_AS_MULTI_V2 1
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V2_t other_signatories;
    pd_OptionTimepoint_V2_t maybe_timepoint;
    pd_OpaqueCall_V2_t call;
    pd_bool_t store_call;
    pd_Weight_V2_t max_weight;
} pd_multisig_as_multi_V2_t;

#define PD_CALL_MULTISIG_APPROVE_AS_MULTI_V2 2
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V2_t other_signatories;
    pd_OptionTimepoint_V2_t maybe_timepoint;
    pd_H256_t call_hash;
    pd_Weight_V2_t max_weight;
} pd_multisig_approve_as_multi_V2_t;

#define PD_CALL_MULTISIG_CANCEL_AS_MULTI_V2 3
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V2_t other_signatories;
    pd_Timepoint_V2_t timepoint;
    pd_H256_t call_hash;
} pd_multisig_cancel_as_multi_V2_t;

#endif

typedef union {
    pd_balances_transfer_V2_t balances_transfer_V2;
    pd_balances_force_transfer_V2_t balances_force_transfer_V2;
    pd_balances_transfer_keep_alive_V2_t balances_transfer_keep_alive_V2;
#ifdef SUBSTRATE_PARSER_FULL
    pd_system_fill_block_V2_t system_fill_block_V2;
    pd_system_remark_V2_t system_remark_V2;
    pd_system_set_heap_pages_V2_t system_set_heap_pages_V2;
    pd_system_set_code_V2_t system_set_code_V2;
    pd_system_set_code_without_checks_V2_t system_set_code_without_checks_V2;
    pd_system_remark_with_event_V2_t system_remark_with_event_V2;
    pd_balances_set_balance_V2_t balances_set_balance_V2;
    pd_proxy_proxy_V2_t proxy_proxy_V2;
    pd_multisig_as_multi_threshold_1_V2_t multisig_as_multi_threshold_1_V2;
    pd_multisig_as_multi_V2_t multisig_as_multi_V2;
    pd_multisig_approve_as_multi_V2_t multisig_approve_as_multi_V2;
    pd_multisig_cancel_as_multi_V2_t multisig_cancel_as_multi_V2;
    pd_council_execute_V2_t council_execute_V2;
    pd_council_propose_V2_t council_propose_V2;
#endif
} pd_MethodNested_V2_t;

typedef union {
    pd_MethodBasic_V2_t basic;
    pd_MethodNested_V2_t nested;
} pd_Method_V2_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop