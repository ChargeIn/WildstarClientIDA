//----- (00000001406EDDD0) ----------------------------------------------------
__int64 __fastcall sub_1406EDDD0(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rcx
	int v4; // edx
	int v5; // edx
	__int64 v6; // rcx
	__int64 result; // rax
	__int64 v8; // rax

	if (qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120) && (v2 = qword_140C65970) != 0)
	{
		v3 = (_DWORD*)a1[3];
		v4 = *(_DWORD*)(qword_140C65970 + 8);
		if ((unsigned __int64)v3 < a1[2] && v3 != dword_140A12138 && (int)v3[2] > 0)
		{
			v4 = sub_140056D60(a1, 1u);
			v2 = qword_140C65970;
		}
		if ((unsigned __int64)v4 >= 4)
			v5 = 0;
		else
			v5 = *(_DWORD*)(v2 + 4i64 * v4 + 32);
		v6 = a1[2];
		result = 1i64;
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (double)v5;
		a1[2] += 16i64;
	}
	else
	{
		v8 = a1[2];
		*(_QWORD*)v8 = 0x3FF0000000000000i64;
		*(_DWORD*)(v8 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

