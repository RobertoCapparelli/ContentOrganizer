#pragma once

#include "IDetailCustomization.h"
#include "Input/Reply.h"
#include "Widgets/Input/SComboButton.h"
#include "ClassViewerModule.h"
#include "ClassViewerFilter.h"

class FFilterNodeCustomization : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance() { return MakeShareable(new FFilterNodeCustomization); }
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
};

class FAllowedAssetTypeFilter : public IClassViewerFilter
{
public:
	FAllowedAssetTypeFilter(const TArray<TSubclassOf<UObject>>& InAllowed)
		: AllowedClasses(InAllowed) {}

	virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef<FClassViewerFilterFuncs> InFilterFuncs) override
	{
		//Check wich class match with asset choise in details 
		for (auto& Allowed : AllowedClasses)
		{
			if (Allowed && InClass == Allowed)
				return true;
		}
		return false;
	}
	virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef<const IUnloadedBlueprintData> InUnloadedClassData, TSharedRef<FClassViewerFilterFuncs> InFilterFuncs) override
	{
		return false;
	}
private:
	TArray<TSubclassOf<UObject>> AllowedClasses;
};