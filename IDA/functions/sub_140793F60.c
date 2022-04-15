//----- (0000000140793F60) ----------------------------------------------------
__int64 __fastcall sub_140793F60(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	__int64 v4; // rcx
	const char* v5; // r9
	const char* v6; // rax
	_DWORD* v7; // rax
	int v8; // edi
	_DWORD* v9; // rax
	int v10; // ebp
	int v12; // esi
	__int64* v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // r10
	unsigned __int64 i; // r10
	__int64* v17; // rcx
	_QWORD* v18; // rax
	__int64 v19; // r10

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	if ((unsigned __int64)v1 >= v3)
		goto LABEL_8;
	if (v1 == dword_140A12138 || v1[2] != 5)
	{
		if ((unsigned __int64)v1 < v3 && v1 != dword_140A12138)
		{
			v4 = (int)v1[2];
			if ((_DWORD)v4 != -1)
			{
				v5 = off_140A123B0[v4];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v5 = aNoValue;
	LABEL_9:
		v6 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v5);
		sub_140056570(a1, 1u, v6);
	}
	v7 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v8 = 1;
	else
		v8 = sub_140056D60(a1, 2u);
	v9 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v10 = sub_1400585E0((__int64)a1, 1);
	else
		v10 = sub_140056D60(a1, 3u);
	if (v8 > v10)
		return 0i64;
	v12 = v10 - v8 + 1;
	if (v12 <= 0 || !(unsigned int)sub_140058190((__int64)a1, v12))
		sub_140056830(a1, (unsigned __int64*)aTooManyResults);
	v13 = (__int64*)dword_140A12138;
	if (a1[3] < a1[2])
		v13 = (__int64*)a1[3];
	v14 = sub_14005C3C0(*v13, v8);
	*(_QWORD*)v15 = *v14;
	*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
	a1[2] += 16i64;
	for (i = a1[2]; v8 < v10; i = a1[2])
	{
		++v8;
		v17 = (__int64*)dword_140A12138;
		if (a1[3] < i)
			v17 = (__int64*)a1[3];
		v18 = sub_14005C3C0(*v17, v8);
		*(_QWORD*)v19 = *v18;
		*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
		a1[2] += 16i64;
	}
	return (unsigned int)v12;
}
// 140794096: variable 'v15' is possibly undefined
// 1407940CB: variable 'v19' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

