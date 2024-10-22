#pragma once
#include "CoreMinimal.h"
#include "ELoginResult.generated.h"

UENUM(BlueprintType)
enum class ELoginResult : uint8 {
    NotStarted,
    Pending,
    Success,
    Console_LoginFailed,
    Console_AuthFailed,
    Console_MissingAuthAssociation,
    Console_DuplicateAuthAssociation,
    Console_AddedAuthAssociation,
    Console_AuthAssociationFailure,
    Console_NotEntitled,
    Console_EntitlementCheckFailed,
    Console_PrivilegeCheck,
    Console_PatchOrUpdateRequired,
    AuthFailed,
    AuthFailed_RefreshInvalid,
    AuthFailed_InvalidMFA,
    AuthFailed_RequiresMFA,
    AuthFailed_AgeVerificationIncomplete,
    AuthFailed_LoginLockout,
    AuthFailed_InvalidCredentials,
    AuthParentalLock,
    PlatformNotAllowed,
    NotEntitled,
    Banned,
    EULACheckFailed,
    WaitingRoomFailed,
    ServiceUnavailable,
    GenericError,
    RegisterSecondaryPlayerInPrimaryPartyFailed,
    RejoinCheckFailure,
    ConnectionFailed,
    NetworkConnectionUnavailable,
    AlreadyLoggingIn,
    ExternalAuth_AddedAuthAssociation,
    ExternalAuth_ConnectionTimeout,
    ExternalAuth_AuthFailure,
    ExternalAuth_AssociationFailure,
    ExternalAuth_MissingAuthAssociation,
    ExternalAuth_Canceled,
    FailedToCreateParty,
    ProfileQueryFailed,
    QueryKeychainFailed,
    ClientSettingsDownloadFailed,
    PinGrantFailure,
    PinGrantTimeout,
    PinGrantCanceled,
};

