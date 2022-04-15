//----- (00000001407BE810) ----------------------------------------------------
__int64 __fastcall sub_1407BE810(__int64* a1, unsigned __int64 a2)
{
	__int64 v2; // rax
	unsigned int v5; // r8d
	unsigned int v6; // r9d
	__int64 v7; // rax
	__int64 v8; // r10
	__int64 v9; // rbx
	int v10; // r11d
	__int64 v11; // rdx
	unsigned __int64 v12; // rcx
	int v14[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v14[0] = -1;
	if (!(*(unsigned int(__fastcall**)(__int64*, int*))(v2 + 64))(a1, v14))
		return 0i64;
	v5 = *((_DWORD*)a1 + 18);
	v6 = 0;
	if (!v5)
		return 0i64;
	v7 = a1[3];
	v8 = a1[8];
	v9 = a1[7];
	v10 = *(_DWORD*)(v7 + 8);
	while (1)
	{
		v11 = (v5 + v6) >> 1;
		v12 = *(_QWORD*)((unsigned int)(v10 * *(_DWORD*)(v8 + 4 * v11)) + v9);
		if (a2 >= v12)
			break;
		v5 = (v5 + v6) >> 1;
	LABEL_8:
		if (v6 >= v5)
			return 0i64;
	}
	if (a2 > v12)
	{
		v6 = v11 + 1;
		goto LABEL_8;
	}
	return v9 + (unsigned int)(v10 * *(_DWORD*)(v8 + 4 * v11));
}
// 1407BE810: using guessed type int var_18[6];

