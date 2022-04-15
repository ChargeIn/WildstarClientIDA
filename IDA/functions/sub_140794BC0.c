//----- (0000000140794BC0) ----------------------------------------------------
__int64 __fastcall sub_140794BC0(_QWORD* a1)
{
	__int64 v2; // rdx
	_DWORD* v3; // rax
	__int64 v4; // rdx
	__int64 result; // rax
	_DWORD* v6; // rcx
	unsigned __int64 v7; // rdx
	unsigned __int64 i; // r8
	__int64 v9; // rcx

	v2 = *(_QWORD*)(a1[5] + 8i64);
	if (*(_BYTE*)(*(_QWORD*)v2 + 11i64))
		v3 = (_DWORD*)(*(_QWORD*)v2 + 40i64);
	else
		v3 = dword_140A12138;
	if (v3[2] == 8)
		v4 = *(_QWORD*)v3;
	else
		v4 = 0i64;
	result = sub_140794950((__int64)a1, v4, (__int64)(a1[2] - a1[3]) >> 4);
	if ((int)result < 0)
	{
		v6 = (_DWORD*)(a1[2] - 16i64);
		if (v6 != dword_140A12138 && (unsigned int)(v6[2] - 3) <= 1)
		{
			sub_140056700(a1, 1);
			v7 = a1[2];
			for (i = v7 - 32; v7 > i; v7 -= 16i64)
			{
				*(_QWORD*)v7 = *(_QWORD*)(v7 - 16);
				*(_DWORD*)(v7 + 8) = *(_DWORD*)(v7 - 8);
			}
			v9 = a1[2];
			*(_QWORD*)i = *(_QWORD*)v9;
			*(_DWORD*)(i + 8) = *(_DWORD*)(v9 + 8);
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			sub_14005F210((__int64)a1, 2, ((__int64)(a1[2] - a1[3]) >> 4) - 1);
			a1[2] -= 16i64;
		}
		sub_14005AB30((__int64)a1);
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

