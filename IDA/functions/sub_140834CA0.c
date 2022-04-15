//----- (0000000140834CA0) ----------------------------------------------------
__int64 __fastcall sub_140834CA0(__int64 a1, __int64 a2, unsigned int* a3, int a4)
{
	__int64 v5; // r9
	unsigned int v7; // edi
	_DWORD* v8; // rbx
	int v9; // r10d
	int v10; // r11d
	int v11; // edx
	unsigned int v12; // eax
	__int64 v13; // rdi
	__int64 result; // rax
	_DWORD* v15; // rdx

	v5 = *(_QWORD*)(a1 + 8);
	if (!v5)
		return 0i64;
	v7 = *a3;
	v8 = (_DWORD*)(v5 + 12i64 * *(unsigned __int16*)(a2 + 4));
	v9 = 0;
	v10 = *(unsigned __int16*)(a2 + 6) - 1;
	while (1)
	{
		v11 = v9 + (v10 - v9) / 2;
		v12 = v8[3 * v11];
		if (v12 <= v7)
			break;
		v10 = v11 - 1;
	LABEL_7:
		if (v9 > v10)
			goto LABEL_8;
	}
	if (v12 < v7)
	{
		v9 = v11 + 1;
		goto LABEL_7;
	}
	v15 = &v8[3 * v11];
	if (!v15)
	{
	LABEL_8:
		v13 = a1;
		goto LABEL_9;
	}
	if (a4 == 1)
		return (__int64)v15;
	v13 = a1;
	result = sub_140834CA0(a1, v15, a3 + 1, (unsigned int)(a4 - 1));
	if (result)
		return result;
LABEL_9:
	if (!*v8 && *a3)
	{
		if (a4 == 1)
			return (__int64)v8;
		result = sub_140834CA0(v13, v8, a3 + 1, (unsigned int)(a4 - 1));
		if (result)
			return result;
	}
	return 0i64;
}

