// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class IMCA_IS_DECTarget : TargetRules
{
	public IMCA_IS_DECTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("IMCA_IS_DEC");
	}
}
