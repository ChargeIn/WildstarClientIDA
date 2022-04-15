//----- (0000000140881960) ----------------------------------------------------
__int64 __fastcall sub_140881960(int a1, __int64 a2, unsigned int a3)
{
	unsigned __int64 v3; // rbp
	__int64 v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rsi

	v3 = a3;
	if (!a2)
		return 0i64;
	v6 = qword_140C62918 + 112i64 * a1;
	EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 48));
	v7 = sub_140882630(*(_QWORD*)(v6 + 88), v3, a2);
	v8 = v7;
	if (v7)
		*(_DWORD*)(v6 + 100) += sub_1408822F0(v7) + 8;
	LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 48));
	return v8;
}
// 140C62918: using guessed type __int64 qword_140C62918;

