//----- (0000000140798470) ----------------------------------------------------
__int64 __fastcall sub_140798470(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	__int64 v4; // rcx
	const char* v5; // r9
	const char* v6; // rax
	int v7; // esi
	int v8; // eax
	int v9; // ebp
	__int64* v10; // rcx
	int v11; // ebx
	_QWORD* v12; // rax
	__int64 v13; // r10

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
	v7 = sub_1400585E0((__int64)a1, 1) + 1;
	if ((unsigned int)((__int64)(a1[2] - a1[3]) >> 4) != 2)
	{
		if ((unsigned int)((__int64)(a1[2] - a1[3]) >> 4) != 3)
			sub_140056830(a1, (unsigned __int64*)aWrongNumberOfA_0);
		v8 = sub_140056D60(a1, 2u);
		v9 = v8;
		if (v8 > v7)
			v7 = v8;
		if (v7 > v8)
		{
			do
			{
				v10 = (__int64*)dword_140A12138;
				v11 = v7 - 1;
				if (a1[3] < a1[2])
					v10 = (__int64*)a1[3];
				v12 = sub_14005C3C0(*v10, v7 - 1);
				*(_QWORD*)v13 = *v12;
				*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
				a1[2] += 16i64;
				sub_140058B30((__int64)a1, 1);
				--v7;
			} while (v11 > v9);
		}
	}
	sub_140058B30((__int64)a1, 1);
	return 0i64;
}
// 140798578: variable 'v13' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

