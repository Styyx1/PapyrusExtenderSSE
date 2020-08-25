#pragma once


namespace papyrusObjectReference
{
	using VM = RE::BSScript::IVirtualMachine;
	using StackID = RE::VMStackID;
	using Severity = RE::BSScript::ErrorLogger::Severity;

	inline constexpr float PI = 3.1415927f;

	using MAT = RE::MATERIAL_ID;	
	constexpr frozen::map<MAT, frozen::string, 88> materialMap = {
		{ MAT::kNone, "None" },
		{ MAT::kStoneBroken, "StoneBroken" },
		{ MAT::kBlockBlade1Hand, "BlockBlade1Hand" },
		{ MAT::kMeat, "Meat" },
		{ MAT::kCarriageWheel, "CarriageWheel" },
		{ MAT::kMetalLight, "MetalLight" },
		{ MAT::kWoodLight, "WoodLight" },
		{ MAT::kSnow, "Snow" },
		{ MAT::kGravel, "Gravel" },
		{ MAT::kChainMetal, "ChainMetal" },
		{ MAT::kBottle, "Bottle" },
		{ MAT::kWood, "Wood" },
		{ MAT::kAsh, "Ash" },
		{ MAT::kSkin, "Skin" },
		{ MAT::kBlockBlunt, "BlockBlunt" },
		{ MAT::kDLC1DeerSkin, "DLC1DeerSkin" },
		{ MAT::kInsect, "Insect" },
		{ MAT::kBarrel, "Barrel" },
		{ MAT::kCeramicMedium, "CeramicMedium" },
		{ MAT::kBasket, "Basket" },
		{ MAT::kIce, "Ice" },
		{ MAT::kGlassStairs, "GlassStairs" },
		{ MAT::kStoneStairs, "StoneStairs" },
		{ MAT::kWater, "Water" },
		{ MAT::kDraugrSkeleton, "DraugrSkeleton" },
		{ MAT::kBlade1Hand, "Blade1Hand" },
		{ MAT::kBook, "Book" },
		{ MAT::kCarpet, "Carpet" },
		{ MAT::kMetalSolid, "MetalSolid" },
		{ MAT::kAxe1Hand, "Axe1Hand" },
		{ MAT::kBlockBlade2Hand, "BlockBlade2Hand" },
		{ MAT::kOrganicLarge, "OrganicLarge" },
		{ MAT::kAmulet, "Amulet" },
		{ MAT::kWoodStairs, "WoodStairs" },
		{ MAT::kMud, "Mud" },
		{ MAT::kBoulderSmall, "BoulderSmall" },
		{ MAT::kSnowStairs, "SnowStairs" },
		{ MAT::kStoneHeavy, "StoneHeavy" },
		{ MAT::kDragonSkeleton, "DragonSkeleton" },
		{ MAT::kTrap, "Trap" },
		{ MAT::kBowsStaves, "BowsStaves" },
		{ MAT::kAlduin, "Alduin" },
		{ MAT::kBlockBowsStaves, "BlockBowsStaves" },
		{ MAT::kWoodAsStairs, "WoodAsStairs" },
		{ MAT::kSteelGreatSword, "SteelGreatSword" },
		{ MAT::kGrass, "Grass" },
		{ MAT::kBoulderLarge, "BoulderLarge" },
		{ MAT::kStoneAsStairs, "StoneAsStairs" },
		{ MAT::kBlade2Hand, "Blade2Hand" },
		{ MAT::kBottleSmall, "BottleSmall" },
		{ MAT::kBoneActor, "BoneActor" },
		{ MAT::kSand, "Sand" },
		{ MAT::kMetalHeavy, "MetalHeavy" },
		{ MAT::kDLC1SabreCatPelt, "DLC1SabreCatPelt" },
		{ MAT::kIceForm, "IceForm" },
		{ MAT::kDragon, "Dragon" },
		{ MAT::kBlade1HandSmall, "Blade1HandSmall" },
		{ MAT::kSkinSmall, "SkinSmall" },
		{ MAT::kPotsPans, "PotsPans" },
		{ MAT::kSkinSkeleton, "SkinSkeleton" },
		{ MAT::kBlunt1Hand, "Blunt1Hand" },
		{ MAT::kStoneStairsBroken, "StoneStairsBroken" },
		{ MAT::kSkinLarge, "SkinLarge" },
		{ MAT::kOrganic, "Organic" },
		{ MAT::kBone, "Bone" },
		{ MAT::kWoodHeavy, "WoodHeavy" },
		{ MAT::kChain, "Chain" },
		{ MAT::kDirt, "Dirt" },
		{ MAT::kGhost, "Ghost" },
		{ MAT::kSkinMetalLarge, "SkinMetalLarge" },
		{ MAT::kBlockAxe, "BlockAxe" },
		{ MAT::kArmorLight, "ArmorLight" },
		{ MAT::kShieldLight, "ShieldLight" },
		{ MAT::kCoin, "Coin" },
		{ MAT::kBlockBlunt2Hand, "BlockBlunt2Hand" },
		{ MAT::kShieldHeavy, "ShieldHeavy" },
		{ MAT::kArmorHeavy, "ArmorHeavy" },
		{ MAT::kArrow, "Arrow" },
		{ MAT::kGlass, "Glass" },
		{ MAT::kStone, "Stone" },
		{ MAT::kWaterPuddle, "WaterPuddle" },
		{ MAT::kCloth, "Cloth" },
		{ MAT::kSkinMetalSmall, "SkinMetalSmall" },
		{ MAT::kWard, "Ward" },
		{ MAT::kWeb, "Web" },
		{ MAT::kTrailerSteelSword, "TrailerSteelSword" },
		{ MAT::kBlunt2Hand, "Blunt2Hand" },
		{ MAT::kDLC1SwingingBridge, "DLC1SwingingBridge" },
		{ MAT::kBoulderMedium, "BoulderMedium" },
	};


	std::vector<RE::TESForm*> AddAllItemsToArray(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, bool a_noEquipped, bool a_noFavourited, bool a_noQuestItem);

	void AddAllItemsToList(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BGSListForm* a_list, bool a_noEquipped, bool a_noFavourited, bool a_noQuestItem);

	void AddKeywordToRef(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BGSKeyword* a_add);

	std::vector<RE::TESObjectREFR*> FindAllReferencesOfFormType(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_origin, std::uint32_t a_formType, float a_radius);

	std::vector<RE::TESObjectREFR*> FindAllReferencesOfType(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::TESForm* a_formOrList, float a_radius);

	std::vector<RE::TESObjectREFR*> FindAllReferencesWithKeyword(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_origin, RE::TESForm* a_formOrList, float a_radius, bool a_matchAll);

	RE::TESForm* FindFirstItemInList(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BGSListForm* a_list);

	RE::Actor* GetActorCause(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref);

	std::vector<RE::BGSArtObject*> GetAllArtObjects(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref);

	std::vector<RE::TESEffectShader*> GetAllEffectShaders(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref);

	RE::Actor* GetClosestActorFromRef(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, bool a_ignorePlayer);

	float GetEffectShaderDuration(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::TESEffectShader* a_effectShader);

	std::vector<RE::BSFixedString> GetMaterialType(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BSFixedString a_nodeName);

	RE::Actor* GetRandomActorFromRef(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, float a_radius, bool a_ignorePlayer);

	std::uint32_t HasArtObject(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BGSArtObject* a_art, bool a_active);

	std::uint32_t HasEffectShader(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::TESEffectShader* a_effectShader, bool a_active);

	bool IsLoadDoor(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_door);

	bool IsQuestItem(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref);

	bool IsVIP(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref);

	bool HasNiExtraData(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BSFixedString a_name);

	void MoveToNearestNavmeshLocation(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref);

	bool RemoveKeywordFromRef(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BGSKeyword* a_remove);

	void ReplaceKeywordOnRef(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BGSKeyword* a_remove, RE::BGSKeyword* a_add);

	void ScaleObject3D(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BSFixedString a_nodeName, float a_radius);

	void SetEffectShaderDuration(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::TESEffectShader* a_effectShader, float a_time, bool a_absolute);

	void SetMaterialType(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BSFixedString a_newMaterialType, RE::BSFixedString a_oldMaterialType, RE::BSFixedString a_nodeName);

	void SetShaderType(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::TESObjectREFR* a_template, RE::BSFixedString a_filter, std::uint32_t a_shaderType, std::int32_t a_textureType, bool a_noWeapons, bool a_noAlpha);

	void SetupBodyPartGeometry(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_miscItem, RE::Actor* a_actor);

	void StopAllShaders_Impl(RE::TESObjectREFR* a_ref);

	void StopAllShaders(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref);

	void StopAllSkinAlphaShaders_Impl(RE::TESObjectREFR* a_ref);

	void StopArtObject(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BGSArtObject* a_art);

	void ToggleChildNode(VM* a_vm, StackID a_stackID, RE::StaticFunctionTag*, RE::TESObjectREFR* a_ref, RE::BSFixedString a_nodeName, bool a_disable);


	bool RegisterFuncs(VM* a_vm);
}
