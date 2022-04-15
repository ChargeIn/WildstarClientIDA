//----- (0000000140177F80) ----------------------------------------------------
__int64 __fastcall sub_140177F80(_QWORD* a1)
{
	_QWORD* v2; // rsi
	int v3; // ebx
	unsigned int v4; // ebp
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rdx
	_QWORD* v8; // rax
	__int64 v9; // rdx
	unsigned __int64 v10; // rcx
	_DWORD* v11; // rdx
	_DWORD* v12; // r8
	BOOL v13; // eax
	__int64 v14; // rcx
	__int64 result; // rax

	v2 = (_QWORD*)sub_140177AC0(a1);
	(*(void(__fastcall**)(_QWORD*))(*v2 + 432i64))(v2);
	v3 = 0;
	v4 = *(_DWORD*)(v2[130] + 1160i64);
	if (!v4)
		return 0i64;
	while (1)
	{
		v5 = v2[130];
		if (*(int*)(v5 + 1144) > 0 && v3 >= 0 && v3 < *(_DWORD*)(v5 + 1160))
		{
			v6 = *(_QWORD*)(*(_QWORD*)(v5 + 1152) + 8i64 * v3);
			v7 = *(int*)(v6 + 24) <= 0 ? 0i64 : **(_QWORD**)(v6 + 16);
			if (v7)
			{
				v8 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), *(_DWORD*)(v7 + 176));
				v9 = a1[2];
				*(_QWORD*)v9 = *v8;
				*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
				a1[2] += 16i64;
				v10 = a1[2];
				v11 = dword_140A12138;
				v12 = (_DWORD*)(v10 - 16);
				if (a1[3] + 16i64 < v10)
					v11 = (_DWORD*)(a1[3] + 16i64);
				v13 = v11 != dword_140A12138
					&& v12 != dword_140A12138
					&& v11[2] == v12[2]
					&& (unsigned int)sub_14005F0D0((__int64)a1, v11, v12);
				a1[2] -= 16i64;
				v14 = a1[2];
				if (v13)
					break;
			}
		}
		if (++v3 >= v4)
			return 0i64;
	}
	*(_DWORD*)(v14 + 8) = 3;
	result = 1i64;
	*(double*)v14 = (double)v3;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

