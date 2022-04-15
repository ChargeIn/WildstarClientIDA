//----- (00000001404E7A00) ----------------------------------------------------
__int64 __fastcall sub_1404E7A00(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned int v3; // edi
	_DWORD* v4; // rax
	__int64 v5; // rax
	__int64 v6; // rcx
	__int16* v7; // rax
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v3 = 40;
	else
		v3 = sub_140056D60(a1, 1u);
	v4 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
		sub_140056D60(a1, 2u);
	v5 = sub_14022F2C0(v3);
	if (v5)
	{
		v7 = sub_14034BDD0(v6, *(_DWORD*)(v5 + 4));
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, (unsigned __int16*)v7)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			sub_140058710((__int64)a1, v8, v9);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v12)
			sub_14018B900(v12, 0);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 1404E7A84: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

