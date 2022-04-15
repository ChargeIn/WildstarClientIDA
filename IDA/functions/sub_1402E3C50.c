//----- (00000001402E3C50) ----------------------------------------------------
__int64 __fastcall sub_1402E3C50(__int64 a1, int a2, unsigned int a3, __int64* a4)
{
	int* v4; // rax
	char* v5; // r11
	int v8; // ecx
	char* v9; // r8
	char* v10; // r9
	__int64 v11; // kr00_8
	int v12; // eax
	char* v13; // rcx
	unsigned int v14; // eax
	__int64 result; // rax

	v4 = *(int**)(a1 + 56);
	v5 = 0i64;
	if (v4)
		v8 = *v4;
	else
		v8 = 0;
	if (v4)
		v5 = (char*)(v4 + 1);
	v9 = v5;
	v10 = &v5[12 * v8];
	if (v5 >= v10)
	{
	LABEL_15:
		result = 0i64;
		*a4 = (v9 - v5) / 12;
		return result;
	}
	while (1)
	{
		v11 = (v10 - v9) / 12;
		v12 = *(_DWORD*)&v9[12 * (v11 / 2)];
		v13 = &v9[12 * (v11 / 2)];
		if (v12 >= a2)
			break;
		v10 = &v9[12 * (v11 / 2)];
	LABEL_14:
		if (v9 >= v10)
			goto LABEL_15;
	}
	if (v12 > a2)
		goto LABEL_13;
	v14 = *((_DWORD*)v13 + 1);
	if (v14 < a3)
	{
		v10 = &v9[12 * (v11 / 2)];
		goto LABEL_14;
	}
	if (v14 > a3)
	{
	LABEL_13:
		v9 = v13 + 12;
		goto LABEL_14;
	}
	result = 1i64;
	*a4 = (v13 - v5) / 12;
	return result;
}

