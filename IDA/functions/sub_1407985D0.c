//----- (00000001407985D0) ----------------------------------------------------
__int64 __fastcall sub_1407985D0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	__int64 v4; // rcx
	const char* v5; // r9
	const char* v6; // rax
	int v7; // eax
	_DWORD* v8; // rcx
	int v9; // esi
	__int64* v10; // rcx
	_QWORD* v11; // rax
	int v12; // r11d
	__int64 v13; // r10
	__int64* v14; // rcx
	int v15; // edi
	_QWORD* v16; // rax
	__int64 v17; // r10

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
	v7 = sub_1400585E0((__int64)a1, 1);
	v8 = (_DWORD*)(a1[3] + 16i64);
	v9 = v7;
	if ((unsigned __int64)v8 < a1[2] && v8 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
		v7 = sub_140056D60(a1, 2u);
	if (v7 < 1 || v7 > v9)
		return 0i64;
	v10 = (__int64*)dword_140A12138;
	if (a1[3] < a1[2])
		v10 = (__int64*)a1[3];
	v11 = sub_14005C3C0(*v10, v7);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	a1[2] += 16i64;
	if (v12 < v9)
	{
		do
		{
			v14 = (__int64*)dword_140A12138;
			v15 = v12 + 1;
			if (a1[3] < a1[2])
				v14 = (__int64*)a1[3];
			v16 = sub_14005C3C0(*v14, v12 + 1);
			*(_QWORD*)v17 = *v16;
			*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
			a1[2] += 16i64;
			sub_140058B30((__int64)a1, 1);
			v12 = v15;
		} while (v15 < v9);
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	sub_140058B30((__int64)a1, 1);
	return 1i64;
}
// 1407986B5: variable 'v13' is possibly undefined
// 1407986C7: variable 'v12' is possibly undefined
// 1407986F9: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

