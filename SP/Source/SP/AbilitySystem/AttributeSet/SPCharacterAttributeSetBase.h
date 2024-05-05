// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "SPCharacterAttributeSetBase.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 *
 */
UCLASS()
class SP_API USPCharacterAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, Category = "HP", ReplicatedUsing = OnRep_HP)
	FGameplayAttributeData HP;
	ATTRIBUTE_ACCESSORS(USPCharacterAttributeSetBase, HP)

	UPROPERTY(BlueprintReadOnly, Category = "HP", ReplicatedUsing = OnRep_HPMax)
	FGameplayAttributeData HPMax;
	ATTRIBUTE_ACCESSORS(USPCharacterAttributeSetBase, HPMax)

	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_Stamina)
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(USPCharacterAttributeSetBase, Stamina)

	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_StaminaMax)
	FGameplayAttributeData StaminaMax;
	ATTRIBUTE_ACCESSORS(USPCharacterAttributeSetBase, StaminaMax)

	UPROPERTY(BlueprintReadOnly, Category = "Mana", ReplicatedUsing = OnRep_Mana)
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(USPCharacterAttributeSetBase, Mana)

	UPROPERTY(BlueprintReadOnly, Category = "Mana", ReplicatedUsing = OnRep_ManaMax)
	FGameplayAttributeData ManaMax;
	ATTRIBUTE_ACCESSORS(USPCharacterAttributeSetBase, ManaMax)

	//Meta Attribute
	UPROPERTY(BlueprintReadOnly, Category = "Damage")
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(USPCharacterAttributeSetBase, Damage)
	
	UFUNCTION() 
	virtual void OnRep_HP(const FGameplayAttributeData& OldHP);
	UFUNCTION()
	virtual void OnRep_HPMax(const FGameplayAttributeData& OldHPMax);
	UFUNCTION()
	virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);
	UFUNCTION()
	virtual void OnRep_StaminaMax(const FGameplayAttributeData& OldStaminaMax);
	UFUNCTION()
	virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);
	UFUNCTION()
	virtual void OnRep_ManaMax(const FGameplayAttributeData& OldManaMax);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
