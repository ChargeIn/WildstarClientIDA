//----- (00000001406FF680) ----------------------------------------------------
__int64 __fastcall sub_1406FF680(__int64 a1)
{
	int v1; // edi
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rbx
	int v7; // esi
	unsigned int v8; // eax
	__int64 v9; // rcx
	unsigned int v10; // r8d
	_DWORD* v11; // rax
	int v12; // ecx
	__int64 v13; // r10
	__int64 v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // rax
	unsigned __int64 v21; // [rsp+20h] [rbp-18h] BYREF
	int v22; // [rsp+28h] [rbp-10h]
	__int64 v23; // [rsp+48h] [rbp+10h]
	__int64 v24; // [rsp+48h] [rbp+10h]

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = 1;
	v8 = sub_1400F26A0(v6 + 384, 1);
	v9 = *(_QWORD*)(v6 + 400);
	v10 = v8;
	v11 = dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(v9 + 24) + 16i64) < *(_QWORD*)(v9 + 16))
		v11 = (_DWORD*)(*(_QWORD*)(v9 + 24) + 16i64);
	v12 = v11[2];
	if (!v12 || v12 == 1 && !*v11)
		v7 = 0;
	v13 = *(_QWORD*)(qword_140C65898 + 32144);
	v14 = *(_QWORD*)(v13 + 72);
	v15 = v14;
	v16 = *(_QWORD*)(v14 + 8);
	while (v16)
	{
		if (*(_DWORD*)(v16 + 32) < v10)
		{
			v16 = *(_QWORD*)(v16 + 24);
		}
		else
		{
			v15 = v16;
			v16 = *(_QWORD*)(v16 + 16);
		}
	}
	if (v15 == v14 || (v23 = v15, v10 < *(_DWORD*)(v15 + 32)))
		v23 = *(_QWORD*)(v13 + 72);
	if (v23 != v14)
	{
		v17 = *(_QWORD*)(v13 + 40);
		v18 = v17;
		v19 = *(_QWORD*)(v17 + 8);
		while (v19)
		{
			if (*(_DWORD*)(v19 + 32) < v10)
			{
				v19 = *(_QWORD*)(v19 + 24);
			}
			else
			{
				v18 = v19;
				v19 = *(_QWORD*)(v19 + 16);
			}
		}
		if (v18 == v17 || (v24 = v18, v10 < *(_DWORD*)(v18 + 32)))
			v24 = *(_QWORD*)(v13 + 40);
		if (v24 != v17 && v24 != -40)
		{
			v21 = 0i64;
			v22 = 0;
			LOBYTE(v1) = v7 == 0;
			v21 = __PAIR64__(v10, *(_DWORD*)(v24 + 44));
			v22 = v1;
			sub_1403F4900(qword_140C65898, 0x15Du, (__int64)&v21);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

