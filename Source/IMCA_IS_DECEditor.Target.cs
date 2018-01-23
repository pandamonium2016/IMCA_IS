// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class IMCA_IS_DECEditorTarget : TargetRules
{
	public IMCA_IS_DECEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("IMCA_IS_DEC");
	}
}
