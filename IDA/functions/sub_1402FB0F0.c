//----- (00000001402FB0F0) ----------------------------------------------------
_OWORD* __fastcall sub_1402FB0F0(__int64 a1, _OWORD* a2, int a3, int a4)
{
	__int64 v4; // rax
	__int64 v6; // rdi
	__int64 v9; // r10
	__int64 v10; // rdx
	__int64 v11; // rbp
	__int128 v12; // xmm0
	void* v13; // rax
	_OWORD* result; // rax
	int v15[10]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v16; // [rsp+60h] [rbp+8h] BYREF

	v4 = *(_QWORD*)a1;
	v6 = a3;
	v15[0] = -1;
	(*(void(__fastcall**)(__int64, int*, _QWORD))(v4 + 16))(a1, v15, 0i64);
	if ((_DWORD)v6
		&& (v9 = *(_QWORD*)(a1 + 64), (unsigned int)v6 < *(_DWORD*)(v9 + 624))
		&& (v10 = *(unsigned __int16*)(*(_QWORD*)(v9 + 632) + 2 * v6), (unsigned int)v10 < *(_DWORD*)(v9 + 608))
		&& (v11 = *(_QWORD*)(v9 + 616) + 4 * v10) != 0)
	{
		if (a4 || *(_DWORD*)(a1 + 1400) - *(_DWORD*)(*(_QWORD*)(a1 + 16) + 224i64) < 0)
			sub_140300DD0(a1, 8u);
		v12 = *(_OWORD*)(((unsigned __int64)*(unsigned __int16*)(v11 + 2) << 6) + *(_QWORD*)(a1 + 824) + 48);
	}
	else
	{
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1))
			v13 = (void*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1);
		else
			v13 = &unk_1409E63F4;
		v16 = 0x141DEB910i64;
		sub_1401A3130(6, 0, &v16, (unsigned int)v6, v13);
		v12 = 0i64;
	}
	result = a2;
	*a2 = v12;
	return result;
}
// 1402FB0F0: using guessed type int var_28[10];

