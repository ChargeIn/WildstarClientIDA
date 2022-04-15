//----- (000000014019EB40) ----------------------------------------------------
__int64 __fastcall sub_14019EB40(__int64 a1)
{
	int v2; // eax
	int v3; // edx
	int v4; // eax
	__int64 result; // rax
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	v2 = dword_140C3FE20;
	if (*(_DWORD*)qword_140C63750 < dword_140C3FE20)
		v2 = *(_DWORD*)qword_140C63750;
	if (*(_QWORD*)(a1 + 48) != *((_DWORD*)&off_140C3FE10 + v2 + 8))
	{
		sub_14004EED0((__int64*)(a1 + 40), 0i64);
		v3 = *(_DWORD*)qword_140C63750;
		v4 = dword_140C3FE20;
		v6 = 0i64;
		if (v3 < dword_140C3FE20)
			v4 = v3;
		sub_14019F340((__int64*)(a1 + 40), *((unsigned int*)&off_140C3FE10 + v4 + 8), &v6);
		*(_DWORD*)(a1 + 32) = 0;
		*(_DWORD*)(a1 + 56) = 0;
		*(_QWORD*)(a1 + 72) = 0i64;
		*(_QWORD*)(a1 + 80) = 0i64;
		*(_QWORD*)(a1 + 88) = 0i64;
		*(_QWORD*)(a1 + 96) = -1i64;
		*(_QWORD*)(a1 + 104) = 0i64;
	}
	*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * ((unsigned __int64)*(unsigned int*)(a1 + 32) % *(_QWORD*)(a1 + 48))) = *(_QWORD*)(a1 + 72);
	result = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) += result;
	++* (_DWORD*)(a1 + 32);
	return result;
}
// 140C3FE10: using guessed type __int64 (__fastcall **off_140C3FE10)();
// 140C3FE20: using guessed type int dword_140C3FE20;
// 140C63750: using guessed type __int64 qword_140C63750;

