//----- (0000000140881720) ----------------------------------------------------
__int64 __fastcall sub_140881720(int a1, __int64 a2)
{
	__int64 v3; // rdi
	int v4; // eax
	__int64 v5; // rcx

	if (a2)
	{
		v3 = qword_140C62918 + 112i64 * a1;
		EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 48));
		v4 = sub_1408822F0(a2);
		v5 = *(_QWORD*)(v3 + 88);
		*(_DWORD*)(v3 + 100) -= v4 + 8;
		sub_140882510(v5, a2);
		LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 48));
	}
	return 1i64;
}
// 140C62918: using guessed type __int64 qword_140C62918;

