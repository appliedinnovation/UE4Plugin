////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

// Generated header include
#include "NoesisBlueprintGeneratedClass.generated.h"

UCLASS()
class NOESISRUNTIME_API UNoesisBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
	GENERATED_UCLASS_BODY()

	UPROPERTY()
	class UNoesisXaml* BaseXaml;

	UPROPERTY()
	bool EnablePPAA;

	UPROPERTY()
	ENoesisTessellationQuality TessellationQuality;
};