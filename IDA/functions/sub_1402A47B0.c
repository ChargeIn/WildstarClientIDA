//----- (00000001402A47B0) ----------------------------------------------------
__int64 __fastcall sub_1402A47B0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // rsi
	unsigned __int64 v4; // rbp
	__int64* v7; // rbx
	bool v8; // zf
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rcx
	int v13[10]; // [rsp+20h] [rbp-28h] BYREF

	v3 = a3;
	v4 = a2;
	if (!*(_QWORD*)(a1 + 112))
		return 0i64;
	if (*(_QWORD*)(a1 + 160) <= (unsigned __int64)a3)
		sub_1402A5D50((__int64*)(a1 + 152), a3 + 1);
	v7 = (__int64*)(*(_QWORD*)(a1 + 152) + 16 * v3);
	if (v7[1] <= v4)
		sub_140275820(v7, (unsigned int)(v4 + 1));
	v8 = *(_QWORD*)(*v7 + 8 * v4) == 0i64;
	v9 = *v7 + 8 * v4;
	if (v8)
	{
		v10 = *(int*)(a1 + 48);
		v11 = *(_QWORD*)(a1 + 112);
		v13[1] = 8;
		v13[2] = v3;
		v13[3] = v4;
		v13[4] = 1;
		v12 = *(_QWORD*)(a1 + 16);
		v13[0] = dword_140AE7F90[v10];
		(*(void(__fastcall**)(_QWORD, __int64, int*, __int64))(**(_QWORD**)(v12 + 6336) + 72i64))(
			*(_QWORD*)(v12 + 6336),
			v11,
			v13,
			v9);
	}
	return *(_QWORD*)v9;
}
// 140AE7F90: using guessed type _DWORD dword_140AE7F90[28];

