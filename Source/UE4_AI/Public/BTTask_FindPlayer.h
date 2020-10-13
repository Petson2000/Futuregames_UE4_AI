// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindPlayer.generated.h"

/**
 * 
 */
UCLASS()
class UE4_AI_API UBTTask_FindPlayer : public UBTTaskNode
{
	GENERATED_BODY()

		UBTTask_FindPlayer();

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);

};
