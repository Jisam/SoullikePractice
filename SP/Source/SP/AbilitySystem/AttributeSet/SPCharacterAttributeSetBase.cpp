// Fill out your copyright notice in the Description page of Project Settings.


#include "SP/AbilitySystem/AttributeSet/SPCharacterAttributeSetBase.h"
#include "SPCharacterAttributeSetBase.h"
#include "Net/UnrealNetwork.h"

void USPCharacterAttributeSetBase::OnRep_HP(const FGameplayAttributeData& OldHP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USPCharacterAttributeSetBase, HP, OldHP);
}

void USPCharacterAttributeSetBase::OnRep_HPMax(const FGameplayAttributeData& OldHPMax)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USPCharacterAttributeSetBase, HPMax, OldHPMax);
}

void USPCharacterAttributeSetBase::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USPCharacterAttributeSetBase, Stamina, OldStamina);
}

void USPCharacterAttributeSetBase::OnRep_StaminaMax(const FGameplayAttributeData& OldStaminaMax)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USPCharacterAttributeSetBase, StaminaMax, OldStaminaMax);
}

void USPCharacterAttributeSetBase::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USPCharacterAttributeSetBase, Mana, OldMana);
}

void USPCharacterAttributeSetBase::OnRep_ManaMax(const FGameplayAttributeData& OldManaMax)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USPCharacterAttributeSetBase, ManaMax, OldManaMax);
}

void USPCharacterAttributeSetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(USPCharacterAttributeSetBase, HP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USPCharacterAttributeSetBase, HPMax, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USPCharacterAttributeSetBase, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USPCharacterAttributeSetBase, StaminaMax, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USPCharacterAttributeSetBase, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USPCharacterAttributeSetBase, ManaMax, COND_None, REPNOTIFY_Always);
}
