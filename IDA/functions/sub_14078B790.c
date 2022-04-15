//----- (000000014078B790) ----------------------------------------------------
__int64 __fastcall sub_14078B790(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v2; // rdi
	unsigned __int64 v3; // r8
	int v4; // eax
	__int64 v5; // rdx
	__int64 result; // rax

	v1 = (_DWORD*)a1[3];
	v2 = dword_140A12138;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2] == -1)
		sub_140056570(a1, 1u, aValueExpected);
	v3 = a1[2];
	if (a1[3] < v3)
		v2 = (_DWORD*)a1[3];
	v4 = v2[2];
	if (v4 == 5)
	{
		v5 = *(_QWORD*)(*(_QWORD*)v2 + 16i64);
	}
	else if (v4 == 7)
	{
		v5 = *(_QWORD*)(*(_QWORD*)v2 + 16i64);
	}
	else
	{
		v5 = *(_QWORD*)(a1[4] + 8i64 * (int)v2[2] + 224);
	}
	result = 1i64;
	if (v5)
	{
		*(_QWORD*)v3 = v5;
		*(_DWORD*)(v3 + 8) = 5;
	}
	else
	{
		*(_DWORD*)(v3 + 8) = 0;
	}
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

