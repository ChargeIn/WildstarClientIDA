//----- (000000014018CAE0) ----------------------------------------------------
__int64 __fastcall sub_14018CAE0(unsigned __int64 a1, _QWORD* a2)
{
	unsigned __int64 v3; // rax
	unsigned __int64 v5; // r8
	unsigned __int64 v6; // r10
	unsigned __int64 v7; // rax
	unsigned __int64 v8; // rax
	unsigned __int64 v9; // rcx

	v3 = HIDWORD(a1);
	if (HIDWORD(a1) >= 0x1000)
		return 0i64;
	v5 = qword_140C7F970[v3];
	if (!v5 || a1 < v5)
	{
		if (!v3)
			return 0i64;
		v5 = qword_140C7F970[v3 - 1];
		if (!v5 || a1 >= v5 + 0x100000000i64)
			return 0i64;
	}
	v6 = v5 + 0x100000000i64;
	v7 = v5;
	if (a1 >= v5 + (1i64 << (*(_BYTE*)(v5 + 7) & 0x7F)))
	{
		while (1)
		{
			v7 = v5 + (__int64)(v6 - v5) / 2;
			if (a1 < v7)
				break;
		LABEL_12:
			v5 = v7;
			if (v6 - v7 < 0x10)
				return 0i64;
			if (a1 < v7 + (1i64 << (*(_BYTE*)(v7 + 7) & 0x7F)))
				goto LABEL_14;
		}
		while (1)
		{
			v6 = v7;
			v8 = v7 - v5;
			if (v8 < 0x10)
				return 0i64;
			v7 = v5 + (__int64)v8 / 2;
			if (a1 >= v7)
				goto LABEL_12;
		}
	}
LABEL_14:
	if (*(__int64*)v7 >= 0 || a1 < v5 + 16 || a1 >= v5 + *(unsigned int*)(v7 + 8))
		return 0i64;
	v9 = *(_QWORD*)(v5 + 8);
	if (((v9 >> 44) & 0xF) == 2)
	{
		if (a2)
			*a2 = *(unsigned __int16*)(v5 + 18);
		return a1 & ((1i64 << *(_DWORD*)(v5 + 16)) - 1);
	}
	else
	{
		if (a2)
			*a2 = (unsigned int)v9;
		return v5 + 16;
	}
}
// 140C7F970: using guessed type __int64 qword_140C7F970[4096];

