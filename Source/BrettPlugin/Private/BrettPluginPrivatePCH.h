// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "IBrettPlugin.h"

#include "SharedPointer.h"
#include "Slate.h"
#include "UICommandList.h"
#include "AssetEditorToolkit.h"
#include "MultiBoxExtender.h"
#include "Commands.h"
#include "AssetRegistryModule.h"
#include "PackageTools.h"
#include "Editor.h"
#include "EditorStyle.h"
#include "AssetNotifications.h"
#include "Factories/Factory.h"
#include "Factories/MaterialFactoryNew.h"
#include "Factories/TextureFactory.h"
#include "ComponentReregisterContext.h"
#include "Editor/LevelEditor/Public/LevelEditor.h"
#include "Materials/MaterialExpressionTextureSample.h"
#include "Materials/MaterialExpressionTextureSampleParameter2D.h"
#include "Developer/AssetTools/Public/AssetToolsModule.h"
#include "Developer/MeshUtilities/Public/MeshUtilities.h"
#include "Developer/RawMesh/Public/RawMesh.h"
#include "Misc/SecureHash.h"
#include "PhysicsEngine/PhysicsAsset.h"
#include "Landscape/Landscape.h"
#include "Editor/LandscapeEditor/Classes/ActorFactoryLandscape.h"
#include "Animation/SkeletalMeshActor.h"
#include "StaticMeshResources.h"
#include "Developer/TargetPlatform/Public/TargetPlatform.h"
#include "EditorSupportDelegates.h"
#include "Editor/UnrealEd/Public/Kismet2/BlueprintEditorUtils.h"
#include "Editor/UnrealEd/Public/Kismet2/KismetEditorUtilities.h"
#include "K2Node_Timeline.h"
#include "K2Node_CallFunction.h"
#include "K2Node_VariableGet.h"
#include "K2Node_VariableSet.h"
#include "K2Node.h"
#include "Editor/BlueprintGraph/Classes/EdGraphSchema_K2_Actions.h"

DECLARE_LOG_CATEGORY_EXTERN(RosePlugin, Log, All);
