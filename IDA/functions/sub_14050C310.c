//----- (000000014050C310) ----------------------------------------------------
__int64 __fastcall sub_14050C310(_QWORD* a1)
{
	int v1; // edi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // rax
	_DWORD* v6; // rax
	int v7; // eax
	int v8; // eax
	_DWORD* v9; // rcx
	bool v10; // zf
	__int64 result; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	v6 = (_DWORD*)a1[3];
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || (int)v6[2] <= 0)
	{
		v7 = 7;
		goto LABEL_11;
	}
	v7 = sub_140056D60(a1, 1u);
	if (v7 < 9)
	{
	LABEL_11:
		v8 = *(_DWORD*)(qword_140C65898 + 4i64 * v7 + 4288);
		goto LABEL_12;
	}
	v8 = 0;
LABEL_12:
	v9 = (_DWORD*)a1[2];
	v10 = v8 == 0;
	result = 1i64;
	LOBYTE(v1) = !v10;
	v9[2] = 1;
	*v9 = v1;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

