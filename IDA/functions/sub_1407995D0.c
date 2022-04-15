//----- (00000001407995D0) ----------------------------------------------------
__int64 __fastcall sub_1407995D0(__int64 a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	const char* v4; // rdi
	__int64 v5; // rcx
	const char* v6; // r9
	const char* v7; // rax
	int v8; // esi
	int v9; // edx
	int v10; // edx
	__int64 v11; // rcx
	unsigned __int64 v12; // rax
	unsigned __int64 v13; // rcx
	_DWORD* v14; // rax
	__int64 v15; // rcx
	const char* v16; // rax

	v1 = *(_DWORD**)(a1 + 24);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = aNoValue;
	if ((unsigned __int64)v1 >= v3)
		goto LABEL_8;
	if (v1 == dword_140A12138 || v1[2] != 5)
	{
		if ((unsigned __int64)v1 < v3 && v1 != dword_140A12138)
		{
			v5 = (int)v1[2];
			if ((_DWORD)v5 != -1)
			{
				v6 = off_140A123B0[v5];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v6 = aNoValue;
	LABEL_9:
		v7 = (const char*)sub_140058780(a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v6);
		sub_140056570((_QWORD*)a1, 1u, v7);
	}
	v8 = sub_1400585E0(a1, 1);
	if (((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 24)) >> 4) + 40 > 8000)
		sub_140056830((_QWORD*)a1, (unsigned __int64*)"stack overflow (%s)", (const char*)&unk_140C665F3);
	if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 640)
	{
		v9 = *(_DWORD*)(a1 + 88);
		if (v9 < 40)
			v10 = v9 + 40;
		else
			v10 = 2 * v9;
		sub_140061210(a1, v10);
	}
	v11 = *(_QWORD*)(a1 + 40);
	v12 = *(_QWORD*)(a1 + 16) + 640i64;
	if (*(_QWORD*)(v11 + 16) < v12)
		*(_QWORD*)(v11 + 16) = v12;
	v13 = *(_QWORD*)(a1 + 16);
	v14 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64);
	if ((unsigned __int64)v14 < v13 && v14 != dword_140A12138 && *(int*)(*(_QWORD*)(a1 + 24) + 24i64) > 0)
	{
		if ((unsigned __int64)v14 >= v13)
			goto LABEL_29;
		if (v14 == dword_140A12138 || *(_DWORD*)(*(_QWORD*)(a1 + 24) + 24i64) != 6)
		{
			if ((unsigned __int64)v14 < v13 && v14 != dword_140A12138)
			{
				v15 = *(int*)(*(_QWORD*)(a1 + 24) + 24i64);
				if ((_DWORD)v15 != -1)
					v4 = off_140A123B0[v15];
			}
		LABEL_29:
			v16 = (const char*)sub_140058780(a1, (unsigned __int64*)"%s expected, got %s", aFunction_3, v4);
			sub_140056570((_QWORD*)a1, 2u, v16);
		}
	}
	for (; *(_QWORD*)(a1 + 16) < (unsigned __int64)(*(_QWORD*)(a1 + 24) + 32i64); *(_QWORD*)(a1 + 16) += 16i64)
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 24) + 32i64;
	sub_140798C70((_QWORD*)a1, 1, v8);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

