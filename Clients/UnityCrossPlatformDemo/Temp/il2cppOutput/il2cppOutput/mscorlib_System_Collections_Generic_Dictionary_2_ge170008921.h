﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1417492998;
// System.String[]
struct StringU5BU5D_t2956870243;
// ZXing.Common.CharacterSetECI[]
struct CharacterSetECIU5BU5D_t2412783188;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3292755553;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,ZXing.Common.CharacterSetECI,System.Collections.DictionaryEntry>
struct Transform_1_t537348001;

#include "mscorlib_System_Object837106420.h"

// System.Collections.Generic.Dictionary`2<System.String,ZXing.Common.CharacterSetECI>
struct  Dictionary_2_t170008921  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t1809983122* ___table_0;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t1417492998* ___linkSlots_1;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t2956870243* ___keySlots_2;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	CharacterSetECIU5BU5D_t2412783188* ___valueSlots_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_5;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_6;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_7;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	Object_t* ___hcp_8;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t2995724695 * ___serialization_info_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_10;
};
struct Dictionary_2_t170008921_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t537348001 * ___U3CU3Ef__amU24cacheB_11;
};
