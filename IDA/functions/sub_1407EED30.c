//----- (00000001407EED30) ----------------------------------------------------
void __fastcall sub_1407EED30(void* a1, void* a2)
{
	struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

	RtlUnwindEx(a1, a2, 0i64, 0i64, &ContextRecord, 0i64);
}

