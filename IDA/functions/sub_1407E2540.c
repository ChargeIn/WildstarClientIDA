//----- (00000001407E2540) ----------------------------------------------------
struct _IMAGE_RUNTIME_FUNCTION_ENTRY* __fastcall sub_1407E2540(PCONTEXT ContextRecord)
{
	DWORD64 Rip; // rdi
	struct _IMAGE_RUNTIME_FUNCTION_ENTRY* result; // rax
	unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF
	unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp+10h] BYREF
	PVOID HandlerData; // [rsp+60h] [rbp+18h] BYREF

	RtlCaptureContext(ContextRecord);
	Rip = ContextRecord->Rip;
	result = RtlLookupFunctionEntry(Rip, &ImageBase, 0i64);
	if (result)
		return (struct _IMAGE_RUNTIME_FUNCTION_ENTRY*)RtlVirtualUnwind(
			0,
			ImageBase,
			Rip,
			result,
			ContextRecord,
			&HandlerData,
			&EstablisherFrame,
			0i64);
	return result;
}

