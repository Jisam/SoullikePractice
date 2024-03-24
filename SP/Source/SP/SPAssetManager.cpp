// Fill out your copyright notice in the Description page of Project Settings.


#include "SPAssetManager.h"
#include "AbilitySystemGlobals.h"

void USPAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();
}