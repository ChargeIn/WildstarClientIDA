//----- (00000001402A11E0) ----------------------------------------------------
__int64 __fastcall sub_1402A11E0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	_QWORD* v5; // r9
	__int64 v6; // rax
	__int64 v7; // rdx
	int v8[10]; // [rsp+20h] [rbp-28h] BYREF

	v2 = a2;
	if (!*(_QWORD*)(a1 + 112))
		return 0i64;
	if (*(_QWORD*)(a1 + 168) <= (unsigned __int64)a2)
		sub_140275820((__int64*)(a1 + 160), a2 + 1);
	v5 = (_QWORD*)(*(_QWORD*)(a1 + 160) + 8 * v2);
	if (!*v5)
	{
		v6 = *(int*)(a1 + 48);
		v7 = *(_QWORD*)(a1 + 112);
		v8[1] = 4;
		v8[2] = v2;
		v8[0] = dword_140AE7F90[v6];
		(*(void(__fastcall**)(_QWORD, __int64, int*, _QWORD*))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64) + 72i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
			v7,
			v8,
			v5);
	}
	return *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8 * v2);
}
// 140AE7F90: using guessed type _DWORD dword_140AE7F90[28];

