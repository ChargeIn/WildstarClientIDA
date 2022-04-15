//----- (000000014043D650) ----------------------------------------------------
__int64 __fastcall sub_14043D650(__int64 a1, int a2, int a3, int a4)
{
	__int64 v7; // rax
	__int64 v8; // r10
	BOOL v9; // eax
	_QWORD* v11; // r10
	unsigned int* v12; // r8
	unsigned __int64 v13; // rdx
	__int64 v14; // rax
	_DWORD* i; // rcx
	unsigned __int64 v16; // rdx
	__int64 v17; // rax
	_DWORD* j; // rcx

	v7 = sub_1405A8A40(a1, a2);
	v8 = v7;
	if (!v7)
		return 0i64;
	if (!a4)
	{
		v9 = sub_140552FD0(v7);
		if (v9)
		{
			if (*(_DWORD*)(a1 + 244))
				return 14i64;
		}
		else if (*(_DWORD*)(a1 + 244))
		{
			goto LABEL_9;
		}
		if (v9 && !(unsigned int)sub_14054F3A0(v8))
			return 14i64;
	}
LABEL_9:
	if ((unsigned int)sub_140552F50(v8))
	{
		v12 = (unsigned int*)v11[1];
		if ((v12[3] & 0x10000) == 0)
			return 15i64;
		v13 = v11[18];
		v14 = 0i64;
		if (!v13)
			return 16i64;
		for (i = (_DWORD*)v11[17]; *i != a3; ++i)
		{
			if (++v14 >= v13)
				return 16i64;
		}
		if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, *v12) == 1)
			return 17i64;
	}
	else
	{
		v16 = v11[16];
		v17 = 0i64;
		if (!v16)
			return 19i64;
		for (j = (_DWORD*)v11[15]; *j != a3; ++j)
		{
			if (++v17 >= v16)
				return 19i64;
		}
		if ((*(_BYTE*)(v11[1] + 12i64) & 4) == 0 || (unsigned int)sub_140552550((__int64)v11, -513))
			return 18i64;
	}
	return 0i64;
}
// 14043D6B6: variable 'v8' is possibly undefined
// 14043D6CF: variable 'v11' is possibly undefined
// 140C65B80: using guessed type __int64 qword_140C65B80;

