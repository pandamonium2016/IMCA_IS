// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "IMCA_IS_DECHUD.generated.h"

UCLASS()
class AIMCA_IS_DECHUD : public AHUD
{
	GENERATED_BODY()

public:
	AIMCA_IS_DECHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

