
using System;
using System.IO;
//using Tools.DotNETCommon;
using UnrealBuildTool;

public class YodoAds : ModuleRules
{
	public YodoAds(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore" 
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
		);

		string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);

		// Additional routine for Android
		if (Target.Platform == UnrealTargetPlatform.Android)
		{
			PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/Android"));
			PrivateDependencyModuleNames.Add("Launch");
			AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "YodoAds_Android_UPL.xml"));
		}
		
		if (Target.Platform == UnrealTargetPlatform.IOS)
		{
			PublicFrameworks.AddRange (
				new string[]
				{
					"Accelerate",
					"AdSupport",
					"AppTrackingTransparency",
					"AudioToolbox",
					"AVKit",
					"MapKit",
					"WebKit",
					"Security",
					"CoreMedia",
					"AVFoundation",
					"CoreTelephony",
					"CoreLocation",
					"SystemConfiguration",
					"MobileCoreServices",
					"JavaScriptCore",
					"MessageUI",
					"CoreImage",
					"ImageIO",
					"CoreText",
					"CoreMotion",
					"CoreServices",
					"SafariServices",
					"StoreKit",
					"CFNetwork",
					"Social",
					"WatchConnectivity",
					"QuartzCore",
					"EventKit",
					"CoreVideo",
					"MediaPlayer",
					"LocalAuthentication",
					"VideoToolbox"
				}
			);
			
			PublicSystemLibraries.Add("c++");
			PublicSystemLibraries.Add("c++abi");
			PublicSystemLibraries.Add("sqlite3");
			PublicSystemLibraries.Add("sqlite3.0");
			PublicSystemLibraries.Add("xml2");
			PublicSystemLibraries.Add("xml2.2");
			PublicSystemLibraries.Add("bz2");
			PublicSystemLibraries.Add("resolv");
			PublicSystemLibraries.Add("iconv");
			PublicSystemLibraries.Add("z");
			string ThirdPartyPath = Path.Combine(ModuleDirectory, "../ThirdParty");
			string LibrariesPath = Path.Combine(ThirdPartyPath, "Libraries");

			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libAmazonAdMarketplaceAdapter.a"));
			//PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libBidMachineAdapter.a"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libBigoAdsAdapter.a"));

			//PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libByteDanceAdapter.a"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libFacebookAdapter.a"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libFyberAdapter.a"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libGoogleAdapter.a"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libGoogleAdManagerAdapter.a"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libInMobiAdapter.a"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libIronSourceAdapter.a"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libMintegralAdapter.a"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libMolocoAdapter.a"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libUnityAdsAdapter.a"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "libVungleAdapter.a"));
			
			//PublicAdditionalFrameworks.Add(new Framework("BUAdSDK", "../ThirdParty/BUAdSDK.embeddedframework.zip"));
			//PublicAdditionalFrameworks.Add(new Framework("CSJMediation", "../ThirdParty/CSJMediation.embeddedframework.zip"));
			//PublicAdditionalFrameworks.Add(new Framework("PAGAdSDK", "../ThirdParty/PAGAdSDK.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("DTBiOSSDK", "../ThirdParty/DTBiOSSDK.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("AppLovinSDK", "../ThirdParty/AppLovinSDK.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("AFNetworking", "../ThirdParty/AFNetworking.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Bidmachine", "../ThirdParty/Bidmachine.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("BigoADS", "../ThirdParty/BigoADS.embeddedframework.zip",null,
      true));

			//PublicAdditionalFrameworks.Add(new Framework("BURelyFoundation_Global", "../ThirdParty/BURelyFoundation_Global.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("FBAudienceNetwork", "../ThirdParty/FBAudienceNetwork.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("IASDKCore", "../ThirdParty/IASDKCore.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("GoogleMobileAds", "../ThirdParty/GoogleMobileAds.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("UserMessagingPlatform", "../ThirdParty/UserMessagingPlatform.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("InMobiSDK", "../ThirdParty/InMobiSDK.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("IronSource", "../ThirdParty/IronSource.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("MTGSDKBidding", "../ThirdParty/MTGSDKBidding.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("MTGSDKBanner", "../ThirdParty/MTGSDKBanner.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("MTGSDKInterstitialVideo", "../ThirdParty/MTGSDKInterstitialVideo.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("MTGSDK", "../ThirdParty/MTGSDK.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("MTGSDKNativeAdvanced", "../ThirdParty/MTGSDKNativeAdvanced.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("MTGSDKNewInterstitial", "../ThirdParty/MTGSDKNewInterstitial.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("MTGSDKReward", "../ThirdParty/MTGSDKReward.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("MTGSDKSplash", "../ThirdParty/MTGSDKSplash.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("MolocoSDK", "../ThirdParty/MolocoSDK.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("OMSDK_Appodeal", "../ThirdParty/OMSDK_Appodeal.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("StackModules", "../ThirdParty/StackModules.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("StackProductPresentation", "../ThirdParty/StackProductPresentation.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("StackRendering", "../ThirdParty/StackRendering.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("KSAdSDK", "../ThirdParty/KSAdSDK.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("WindFoundation", "../ThirdParty/WindFoundation.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("WindMillSDK", "../ThirdParty/WindMillSDK.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("WindSDK", "../ThirdParty/WindSDK.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("UnityAds", "../ThirdParty/UnityAds.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("VungleAdsSDK", "../ThirdParty/VungleAdsSDK.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationAdMob", "../ThirdParty/Yodo1MasMediationAdMob.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("AppLovinAdapter", "../ThirdParty/AppLovinAdapter.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationApplovin", "../ThirdParty/Yodo1MasMediationApplovin.embeddedframework.zip",null,
      true));
			//PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationBidMachine", "../ThirdParty/Yodo1MasMediationBidMachine.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationBigo", "../ThirdParty/Yodo1MasMediationBigo.embeddedframework.zip",null,
      true));

			//PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationCSJ", "../ThirdParty/Yodo1MasMediationCSJ.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("MetaAdapter", "../ThirdParty/MetaAdapter.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationFacebook", "../ThirdParty/Yodo1MasMediationFacebook.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("DTExchangeAdapter", "../ThirdParty/DTExchangeAdapter.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationFyber", "../ThirdParty/Yodo1MasMediationFyber.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("InMobiAdapter", "../ThirdParty/InMobiAdapter.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationInMobi", "../ThirdParty/Yodo1MasMediationInMobi.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("IronSourceAdapter", "../ThirdParty/IronSourceAdapter.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationIronSource", "../ThirdParty/Yodo1MasMediationIronSource.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("MintegralAdapter", "../ThirdParty/MintegralAdapter.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationMintegral", "../ThirdParty/Yodo1MasMediationMintegral.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationMoloco", "../ThirdParty/Yodo1MasMediationMoloco.embeddedframework.zip",null,
      true));

		    //PublicAdditionalFrameworks.Add(new Framework("PangleAdapter", "../ThirdParty/PangleAdapter.embeddedframework.zip"));
			//PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationPangle", "../ThirdParty/Yodo1MasMediationPangle.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationToBid", "../ThirdParty/Yodo1MasMediationToBid.embeddedframework.zip",null,
      true));

			//PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationTradPlus", "../ThirdParty/Yodo1MasMediationTradPlus.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationUnityAds", "../ThirdParty/Yodo1MasMediationUnityAds.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("UnityAdapter", "../ThirdParty/UnityAdapter.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationVungle", "../ThirdParty/Yodo1MasMediationVungle.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationVungle", "../ThirdParty/LiftoffMonetizeAdapter.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationYodo1", "../ThirdParty/Yodo1MasMediationYodo1.embeddedframework.zip",null,
      true));

			//PublicAdditionalFrameworks.Add(new Framework("Yodo1MasMediationYso", "../ThirdParty/Yodo1MasMediationYso.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("Yodo1MasCore", "../ThirdParty/Yodo1MasCore.embeddedframework.zip",null,
      true));
			PublicAdditionalFrameworks.Add(new Framework("YYModel", "../ThirdParty/YYModel.embeddedframework.zip",null,
      true));

			PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/IOS"));
			string HeadersPath = Path.Combine(ModuleDirectory, "../ThirdParty", "Headers");
			

			PublicSystemLibraryPaths.Add("/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/swift/iphoneos");
			//Update the Xcode installation path if necessary

			PublicIncludePaths.Add(Path.Combine(HeadersPath, "AFNetworking"));
			PublicIncludePaths.Add(Path.Combine(HeadersPath, "APM"));
			PublicIncludePaths.Add(Path.Combine(HeadersPath, "Foundation"));
			PublicIncludePaths.Add(Path.Combine(HeadersPath, "Gecko"));
			PublicIncludePaths.Add(Path.Combine(HeadersPath, "Header"));
			PublicIncludePaths.Add(Path.Combine(HeadersPath, "NETWork"));
			PublicIncludePaths.Add(Path.Combine(HeadersPath, "SDWebImage"));
			PublicIncludePaths.Add(Path.Combine(HeadersPath, "YYModel"));
			PublicIncludePaths.Add(Path.Combine(HeadersPath, "ZFPlayer"));
			PublicIncludePaths.Add(Path.Combine(HeadersPath, "Zip"));
			
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "../ThirdParty", "Headers"));



			PrivateDependencyModuleNames.AddRange(new string[] { "Launch" });

			AdditionalPropertiesForReceipt.Add("IOSPlugin", Path.Combine(PluginPath, "YodoAds_IOS_UPL.xml"));
		}
	}
}
