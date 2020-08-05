// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GhoulsAndGoodiesEditorTarget : TargetRules
{
	public GhoulsAndGoodiesEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("GhoulsAndGoodies");
	}
}
