// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ProyectilEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectilEnemy() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProyectilEnemy_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProyectilEnemy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AProyectilEnemy::StaticRegisterNativesAProyectilEnemy()
	{
	}
	UClass* Z_Construct_UClass_AProyectilEnemy_NoRegister()
	{
		return AProyectilEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AProyectilEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProyectilEnemyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProyectilEnemyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectilEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProyectilEnemy.h" },
		{ "ModuleRelativePath", "ProyectilEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilEnemy_Statics::NewProp_ProyectilEnemyMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProyectilEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProyectilEnemy_Statics::NewProp_ProyectilEnemyMesh = { "ProyectilEnemyMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectilEnemy, ProyectilEnemyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProyectilEnemy_Statics::NewProp_ProyectilEnemyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemy_Statics::NewProp_ProyectilEnemyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProyectilEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectilEnemy_Statics::NewProp_ProyectilEnemyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectilEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectilEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectilEnemy_Statics::ClassParams = {
		&AProyectilEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProyectilEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectilEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectilEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectilEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectilEnemy, 2518430041);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AProyectilEnemy>()
	{
		return AProyectilEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectilEnemy(Z_Construct_UClass_AProyectilEnemy, &AProyectilEnemy::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AProyectilEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectilEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
