//----- (00000001407A01C0) ----------------------------------------------------
__int64 __fastcall sub_1407A01C0(__int64 a1, int a2, int a3, int a4, int a5, __int64* a6)
{
	bool v7; // zf
	int v8; // eax
	__int64 v9; // rax
	int v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	int(__fastcall * v13)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v14; // [rsp+38h] [rbp-10h]

	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_DWORD*)(a1 + 16) = 1414420037;
	*(_DWORD*)(a1 + 84) = 24;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_DWORD*)(a1 + 8) = a3;
	*(_DWORD*)(a1 + 12) = a4;
	*(_DWORD*)(a1 + 4) = a2;
	v11 = 0;
	v12 = a1;
	v13 = sub_1407A0390;
	v14 = 0i64;
	sub_140195960(a1 + 16, a5, (__int64)&v11, 4);
	v7 = *(_QWORD*)(a1 + 128) == 0i64;
	v8 = dword_140C636A8;
	*(_DWORD*)(a1 + 88) = a5;
	*(_DWORD*)a1 = v8;
	if (v7)
	{
		*(_QWORD*)(a1 + 128) = a6;
		*(_QWORD*)(a1 + 136) = *a6;
		*a6 = a1;
		v9 = *(_QWORD*)(a1 + 136);
		if (v9)
			*(_QWORD*)(v9 + 128) = a1 + 136;
	}
	return a1;
}
// 140C636A8: using guessed type int dword_140C636A8;

