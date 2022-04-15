//----- (00000001401D1EF0) ----------------------------------------------------
BOOL __fastcall sub_1401D1EF0(__int64 a1)
{
	void* v2; // rcx
	BOOL result; // eax

	v2 = *(void**)(a1 + 696);
	if (v2 != (void*)-1i64)
	{
		result = CloseHandle(v2);
		*(_QWORD*)(a1 + 696) = -1i64;
	}
	return result;
}

