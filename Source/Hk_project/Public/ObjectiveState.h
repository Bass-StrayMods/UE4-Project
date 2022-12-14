#pragma once
#include "CoreMinimal.h"
#include "EObjective.h"
#include "EObjectiveStatus.h"
#include "ObjectiveState.generated.h"

USTRUCT(BlueprintType)
struct FObjectiveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjective ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveStatus status;
    
    HK_PROJECT_API FObjectiveState();
};

