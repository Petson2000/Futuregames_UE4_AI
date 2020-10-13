// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindPlayer.h"

UBTTask_FindPlayer::UBTTask_FindPlayer()
{
	bIgnoreRestartSelf = true;

}

EBTNodeResult UBTTask_FindPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	return EBTNodeResult();
}

