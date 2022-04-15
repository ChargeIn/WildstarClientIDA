//----- (0000000140574CF0) ----------------------------------------------------
__int64 __fastcall sub_140574CF0(__int64 a1, __int64 a2, float a3)
{
	unsigned int* v3; // rsi
	unsigned int v4; // ebp
	_DWORD* v6; // rax
	unsigned int i; // r8d
	int v9; // eax
	__int64 v11; // r14
	_QWORD* v12; // rbx
	int v13; // edi

	v3 = (unsigned int*)(a2 + 32);
	v4 = 0;
	v6 = (_DWORD*)(a2 + 32);
	for (i = 0; i < 4; ++i)
	{
		if (!*v6)
			break;
		++v6;
	}
	if (!i || a3 < 0.0)
		return 0i64;
	v9 = *(_DWORD*)(a2 + 4) & 0x100;
	if (a3 >= 1.0)
		return *v3;
	if (i == 1)
	{
		if (!v9)
			return *v3;
		return 0i64;
	}
	if (v9)
		return 0i64;
	v11 = i - 1 - (int)(float)((float)(int)(i - 1) * a3);
	if ((unsigned int)v11 >= i)
		return 0i64;
	if (!(_DWORD)v11)
		return *(unsigned int*)(a2 + 4 * v11 + 32);
	while (1)
	{
		v12 = *(_QWORD**)(a1 + 5568);
		v13 = *v3;
		if (v12)
			break;
	LABEL_18:
		++v4;
		++v3;
		if (v4 >= (unsigned int)v11)
			return *(unsigned int*)(a2 + 4 * v11 + 32);
	}
	while ((*(unsigned int(__fastcall**)(_QWORD*))(*v12 + 8i64))(v12) != v13)
	{
		v12 = (_QWORD*)v12[2];
		if (!v12)
			goto LABEL_18;
	}
	return 0i64;
}

