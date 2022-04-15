//----- (0000000140794110) ----------------------------------------------------
__int64 __fastcall sub_140794110(_QWORD* a1)
{
	unsigned __int64 v1; // rdx
	_DWORD* v2; // rax
	__int64 v4; // rdi
	_DWORD* v5; // rcx
	_BYTE* v6; // rax
	__int64 v7; // rcx
	__int64 result; // rax
	int v9; // eax
	int v10; // ebx

	v1 = a1[2];
	v2 = (_DWORD*)a1[3];
	v4 = (__int64)(v1 - (_QWORD)v2) >> 4;
	if ((unsigned __int64)v2 >= v1 || v2 == dword_140A12138 || v2[2] != 4)
		goto LABEL_16;
	v5 = dword_140A12138;
	if ((unsigned __int64)v2 < v1)
		v5 = v2;
	if (v5[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v5))
		{
			v6 = 0i64;
			goto LABEL_14;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v5 = dword_140A12138;
		if (a1[3] < a1[2])
			v5 = (_DWORD*)a1[3];
	}
	v6 = (_BYTE*)(*(_QWORD*)v5 + 32i64);
LABEL_14:
	if (*v6 == 35)
	{
		v7 = a1[2];
		*(_DWORD*)(v7 + 8) = 3;
		result = 1i64;
		*(double*)v7 = (double)((int)v4 - 1);
		a1[2] += 16i64;
		return result;
	}
LABEL_16:
	v9 = sub_140056D60(a1, 1u);
	v10 = v9;
	if (v9 >= 0)
	{
		if (v9 > (int)v4)
			v10 = v4;
	}
	else
	{
		v10 = v4 + v9;
	}
	if (v10 < 1)
		sub_140056570(a1, 1u, aIndexOutOfRang);
	return (unsigned int)(v4 - v10);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

