

#pragma once

#import <Foundation/Foundation.h>
#import <Yodo1MasCore/Yodo1Mas.h>

namespace YAUtils
{
#if PLATFORM_IOS
	FString ParseIosError(Yodo1MasError* error)
	{
		return [NSString stringWithFormat:@"%li - %@", (long) error.code, [error localizedDescription]];
	}
#endif
}
