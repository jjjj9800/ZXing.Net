﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ManualResetEvent
struct ManualResetEvent_t2399218676;
// System.IO.Stream
struct Stream_t219029575;
// Mono.Security.Protocol.Tls.Context
struct Context_t4123145639;

#include "mscorlib_System_Object837106420.h"

// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t3519001153  : public Object_t
{
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t219029575 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t4123145639 * ___context_2;
};
struct RecordProtocol_t3519001153_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t2399218676 * ___record_processing_0;
};
