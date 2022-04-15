//----- (00000001408819F0) ----------------------------------------------------
__int64 __fastcall sub_1408819F0(int a1, __int64 a2)
{
	__int64 v4; // rdi
	unsigned int v5; // eax
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rsi

	if (!a2)
		return 0i64;
	v4 = qword_140C62918 + 112i64 * a1;
	EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 48));
	v5 = *(_DWORD*)(v4 + 96);
	v6 = *(_QWORD*)(v4 + 88);
	if (v5 <= 4)
		v7 = sub_1408825D0(v6, a2);
	else
		v7 = sub_140882630(v6, v5, a2);
	v8 = v7;
	if (v7)
		*(_DWORD*)(v4 + 100) += sub_1408822F0(v7) + 8;
	LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 48));
	return v8;
}
// 140C62918: using guessed type __int64 qword_140C62918;

