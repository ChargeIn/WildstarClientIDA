//----- (00000001402DEB60) ----------------------------------------------------
__int64 __fastcall sub_1402DEB60(__int64 a1, int a2, unsigned int a3, _DWORD* a4)
{
	char* v4; // r10
	char* v7; // r8
	__int64 v8; // kr00_8
	char* v9; // rax
	unsigned int v10; // ecx

	v4 = *(char**)(a1 + 24);
	if (!v4)
		return 0i64;
	v7 = &v4[12 * *(_QWORD*)(a1 + 16)];
	if (v4 >= v7)
		return 0i64;
	while (1)
	{
		v8 = (v7 - v4) / 12;
		v9 = &v4[12 * (v8 / 2)];
		if (*(_DWORD*)v9 >= a2)
			break;
		v7 = &v4[12 * (v8 / 2)];
	LABEL_11:
		if (v4 >= v7)
			return 0i64;
	}
	if (*(_DWORD*)v9 > a2)
		goto LABEL_10;
	v10 = *((_DWORD*)v9 + 1);
	if (v10 < a3)
	{
		v7 = &v4[12 * (v8 / 2)];
		goto LABEL_11;
	}
	if (v10 > a3)
	{
	LABEL_10:
		v4 = v9 + 12;
		goto LABEL_11;
	}
	if (a4)
		*a4 = *((_DWORD*)v9 + 2);
	return 1i64;
}

