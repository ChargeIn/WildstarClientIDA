//----- (0000000140744720) ----------------------------------------------------
__int64 __fastcall sub_140744720(_QWORD* a1)
{
	unsigned int v2; // ebx
	unsigned __int64 v3; // rcx
	_QWORD* v4; // rax
	__int64 v5; // r8
	_DWORD* v6; // r8
	_QWORD* v7; // rax
	_DWORD* v8; // rdx
	bool v9; // al
	__int64 v10; // rdx
	_DWORD* v11; // rax

	v2 = sub_140056D60(a1, 1u) - 1;
	v3 = (unsigned int)sub_140056D60(a1, 2u) - 1;
	v4 = *(_QWORD**)(qword_140C65898 + 27728);
	v5 = v2;
	if (v4 && (unsigned __int64)v2 < v4[12])
	{
		if (v2)
		{
			if ((unsigned __int64)v2 <= v4[13])
				v5 = v2 - 1i64;
			v6 = *(_DWORD**)(v4[11] + 8 * v5);
		}
		else
		{
			v6 = *(_DWORD**)(v4[11] + 8i64 * v4[13]);
		}
	}
	else
	{
		v6 = 0i64;
	}
	v7 = *(_QWORD**)(qword_140C65898 + 27728);
	if (v7 && v3 < v7[12])
	{
		if (v3)
		{
			if (v3 <= v7[13])
				--v3;
			v8 = *(_DWORD**)(v7[11] + 8 * v3);
		}
		else
		{
			v8 = *(_DWORD**)(v7[11] + 8i64 * v7[13]);
		}
	}
	else
	{
		v8 = 0i64;
	}
	if (v6 && v8)
	{
		v9 = v6[52] == v8[52] && v6[53] == v8[53] && v6[54] == v8[54] && v6[56] == v8[56];
		v10 = a1[2];
		*(_DWORD*)(v10 + 8) = 3;
		*(double*)v10 = (double)v9;
	}
	else
	{
		v11 = (_DWORD*)a1[2];
		*v11 = 0;
		v11[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

