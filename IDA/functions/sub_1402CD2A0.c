//----- (00000001402CD2A0) ----------------------------------------------------
__int64 __fastcall sub_1402CD2A0(__int64* a1)
{
	__int64 v1; // rax
	__int64 v3; // rax
	__int64 v4; // rdx
	unsigned int v5; // r8d
	_DWORD* v6; // r9
	_DWORD* i; // rax
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v9[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v1 + 64))(a1, v9, 1i64);
	v3 = sub_1402D5890(a1[2]);
	v4 = 0i64;
	v5 = *(_DWORD*)(v3 + 56);
	if (!v5)
		return 0i64;
	v6 = *(_DWORD**)(v3 + 64);
	for (i = v6; *i != *((_DWORD*)a1 + 10); i += 10)
	{
		v4 = (unsigned int)(v4 + 1);
		if ((unsigned int)v4 >= v5)
			return 0i64;
	}
	return *(_QWORD*)&v6[10 * v4 + 4];
}
// 1402CD2A0: using guessed type int var_18[6];

