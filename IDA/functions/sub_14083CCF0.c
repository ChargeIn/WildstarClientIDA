//----- (000000014083CCF0) ----------------------------------------------------
void __fastcall sub_14083CCF0(__int64 a1)
{
	__int64 v1; // rdx
	void* v3; // rcx

	v1 = *(_QWORD*)a1;
	if (*(_QWORD*)a1)
	{
		*(_QWORD*)(a1 + 8) = v1;
		sub_140881720(dword_140C10F20, v1);
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)(a1 + 16) = 0;
	}
	v3 = *(void**)(a1 + 64);
	if (v3)
		CloseHandle(v3);
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}
// 140C10F20: using guessed type int dword_140C10F20;

