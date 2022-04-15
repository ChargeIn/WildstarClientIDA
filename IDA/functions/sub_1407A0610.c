//----- (00000001407A0610) ----------------------------------------------------
__int64 __fastcall sub_1407A0610(__int64 a1, int a2, int a3, int a4, int a5, __int64* a6)
{
	int v7; // eax
	int v8; // edx
	__int64 v9; // rax
	int v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	int(__fastcall * v13)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v14; // [rsp+38h] [rbp-10h]

	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 24) = 1414420037;
	*(_DWORD*)(a1 + 92) = 24;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_DWORD*)(a1 + 12) = a5;
	v7 = dword_140C636A8;
	*(_DWORD*)a1 = a2;
	v8 = dword_140C6664C;
	*(_DWORD*)(a1 + 16) = v7;
	*(_DWORD*)(a1 + 4) = a3;
	*(_DWORD*)(a1 + 8) = a4;
	v11 = 0;
	v12 = a1;
	v13 = sub_1407A0760;
	v14 = 0i64;
	sub_140195960(a1 + 24, v8, (__int64)&v11, 4);
	if (!*(_QWORD*)(a1 + 96))
	{
		*(_QWORD*)(a1 + 96) = a6;
		*(_QWORD*)(a1 + 104) = *a6;
		*a6 = a1;
		v9 = *(_QWORD*)(a1 + 104);
		if (v9)
			*(_QWORD*)(v9 + 96) = a1 + 104;
	}
	return a1;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C6664C: using guessed type int dword_140C6664C;

