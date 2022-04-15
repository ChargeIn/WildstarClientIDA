//----- (00000001402CD600) ----------------------------------------------------
__int128* __fastcall sub_1402CD600(__int64* a1, __int128* a2, unsigned __int64 a3)
{
	__int64 v3; // rax
	__int64 v7; // rbp
	bool v8; // zf
	__int64 v9; // rdx
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // rbp
	__int64 v12; // rcx
	__int64 v13; // rax
	unsigned __int64 v14; // rdi
	__int128 v15; // xmm0
	__int128* result; // rax
	int v17[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v17[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v3 + 64))(a1, v17, 3i64);
	v7 = a1[3];
	v8 = *(_DWORD*)(v7 + 24) == 3;
	v17[0] = -1;
	if (!v8)
		sub_1402C9AE0(v7, (__int64)v17, 3);
	v9 = *(_QWORD*)(v7 + 64);
	v10 = a1[8];
	if (v10 < *(unsigned int*)(v9 + 112)
		&& (v11 = *(unsigned int*)(*(_QWORD*)(v9 + 120) + 40 * v10 + 24), a3 >= v11)
		&& (v12 = a1[4]) != 0
		&& (v13 = sub_1402D5890(v12), v14 = a3 - v11, v14 < *(unsigned int*)(v13 + 8)))
	{
		v15 = *(_OWORD*)((v14 << 7) + *(_QWORD*)(v13 + 16) + 32);
	}
	else
	{
		v15 = xmmword_140C777F0;
	}
	result = a2;
	*a2 = v15;
	return result;
}
// 140C777F0: using guessed type __int128 xmmword_140C777F0;

