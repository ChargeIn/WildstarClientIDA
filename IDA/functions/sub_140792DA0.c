//----- (0000000140792DA0) ----------------------------------------------------
__int64 __fastcall sub_140792DA0(_QWORD* a1)
{
	__int64 v1; // rax
	unsigned __int64 v3; // rcx
	_DWORD* v4; // rax
	__int64* v5; // rdi
	__int64 v6; // rcx
	const char* v7; // r9
	const char* v8; // rax
	unsigned __int64 v9; // rdx
	_DWORD* v10; // rcx
	int v11; // eax
	_DWORD* v12; // rcx
	_DWORD* v13; // rax
	int v14; // eax
	int v15; // eax
	__int64 v16; // rax
	unsigned __int64 v17; // rdx
	unsigned __int64 i; // r8
	__int64 v19; // rcx
	__int64 v21; // rax
	__int64 v22; // [rsp+20h] [rbp-18h] BYREF
	int v23; // [rsp+28h] [rbp-10h]
	__int64 v24; // [rsp+40h] [rbp+8h] BYREF

	v1 = a1[3];
	v3 = a1[2];
	v4 = (_DWORD*)(v1 + 16);
	v5 = (__int64*)dword_140A12138;
	if ((unsigned __int64)v4 >= v3)
		goto LABEL_8;
	if (v4 == dword_140A12138 || v4[2] != 5)
	{
		if ((unsigned __int64)v4 < v3 && v4 != dword_140A12138)
		{
			v6 = (int)v4[2];
			if ((_DWORD)v6 != -1)
			{
				v7 = off_140A123B0[v6];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v7 = aNoValue;
	LABEL_9:
		v8 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v7);
		sub_140056570(a1, 2u, v8);
	}
	sub_140792BA0(a1, 0);
	v9 = a1[2];
	v10 = dword_140A12138;
	if (a1[3] + 16i64 < v9)
		v10 = (_DWORD*)(a1[3] + 16i64);
	*(_QWORD*)v9 = *(_QWORD*)v10;
	v11 = v10[2];
	v12 = dword_140A12138;
	*(_DWORD*)(v9 + 8) = v11;
	v13 = (_DWORD*)a1[3];
	a1[2] += 16i64;
	if ((unsigned __int64)v13 < a1[2])
		v12 = v13;
	v14 = v12[2];
	if (v14 == 3 || v14 == 4 && sub_14005AC80((char*)(*(_QWORD*)v12 + 32i64), (unsigned __int64*)&v24))
	{
		if (a1[3] < a1[2])
			v5 = (__int64*)a1[3];
		v15 = *((_DWORD*)v5 + 2);
		if (v15 != 3)
		{
			if (v15 != 4 || !sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v24))
				goto LABEL_24;
			v23 = 3;
			v5 = &v22;
			v22 = v24;
		}
		if (*(double*)v5 == 0.0)
		{
		LABEL_24:
			v16 = a1[2];
			*(_QWORD*)v16 = a1;
			*(_DWORD*)(v16 + 8) = 8;
			a1[2] += 16i64;
			v17 = a1[2];
			for (i = v17 - 32; v17 > i; v17 -= 16i64)
			{
				*(_QWORD*)v17 = *(_QWORD*)(v17 - 16);
				*(_DWORD*)(v17 + 8) = *(_DWORD*)(v17 - 8);
			}
			v19 = a1[2];
			*(_QWORD*)i = *(_QWORD*)v19;
			*(_DWORD*)(i + 8) = *(_DWORD*)(v19 + 8);
			sub_140058CF0((__int64)a1, -2);
			return 0i64;
		}
	}
	v21 = a1[2];
	if (*(_DWORD*)(v21 - 24) == 6 && *(_BYTE*)(*(_QWORD*)(v21 - 32) + 10i64)
		|| !(unsigned int)sub_140058CF0((__int64)a1, -2))
	{
		sub_140056830(a1, (unsigned __int64*)aSetfenvCannotC_0);
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

