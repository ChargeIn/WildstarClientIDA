//----- (000000014049AA10) ----------------------------------------------------
__int64 __fastcall sub_14049AA10(__int64 a1, unsigned int a2)
{
	__int64 v3; // r9
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rsi
	unsigned int v7; // eax
	__int64 v8; // r8
	__int64 v9; // rcx
	__int64 v10; // rbx
	__int64 v11; // rdx
	bool v12; // zf
	__int64 v13; // rdi
	int* v15; // rax
	int v16; // eax
	int v17; // ebp
	_QWORD* v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD v23[2]; // [rsp+20h] [rbp-38h] BYREF
	char v24[16]; // [rsp+30h] [rbp-28h] BYREF
	int v25; // [rsp+68h] [rbp+10h] BYREF
	__int64 v26; // [rsp+70h] [rbp+18h]

	v3 = *(_QWORD*)(qword_140C65998 + 16);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v26 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v26 = v3;
	if (v26 == v3)
		return 2147500037i64;
	v6 = *(_QWORD*)(v26 + 40);
	if (!v6)
		return 2147500037i64;
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 48i64))(v6);
	v8 = *(_QWORD*)(a1 + 16);
	v9 = *(_QWORD*)(v8 + 8);
	v10 = a1 + 8;
	v11 = v8;
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < v7)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v11 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v11 == v8 || (v26 = v11, v7 < *(_DWORD*)(v11 + 32)))
		v26 = v8;
	v12 = v26 == *(_QWORD*)(a1 + 16);
	v13 = 0i64;
	if (!v12)
		v13 = *(_QWORD*)(v26 + 40);
	if (!v13 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v13 + 72i64))(v13))
	{
		if ((*(_BYTE*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 40i64))(v6) + 108) & 1) != 0)
			return 2147500037i64;
		if (!v13)
		{
			v15 = sub_14018B280(32i64, 0);
			v13 = (__int64)v15;
			if (v15)
			{
				*((_QWORD*)v15 + 1) = 0i64;
				*((_QWORD*)v15 + 2) = 0i64;
				*((_QWORD*)v15 + 3) = 0i64;
				*(_QWORD*)v15 = off_140B67610;
			}
			else
			{
				v13 = 0i64;
			}
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 8i64))(v13, v6);
			v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
			v23[1] = v13;
			LODWORD(v23[0]) = v16;
			sub_140055F80(v10, (__int64)v24, v23);
		}
		v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 40i64))(v13) | 0x80000000;
		v18 = *(_QWORD**)(*(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6) + 8) + 16i64);
		while (v18 != *(_QWORD**)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6) + 8))
		{
			v19 = v18[5];
			if ((*(_BYTE*)(*(_QWORD*)(v19 + 8) + 84i64) & 4) != 0)
				v17 |= 1 << *(_DWORD*)(v19 + 24);
			v20 = v18[3];
			if (v20)
			{
				v18 = (_QWORD*)v18[3];
				for (i = *(_QWORD**)(v20 + 16); i; i = (_QWORD*)i[2])
					v18 = i;
			}
			else
			{
				for (j = v18[1]; v18 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v18 = (_QWORD*)j;
				if (v18[3] != j)
					v18 = (_QWORD*)j;
			}
		}
		sub_140499A20(v13, v17);
		v25 = 0;
		v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 48i64))(v6);
		sub_1403F4900(qword_140C65898, 0x103u, (__int64)&v25);
	}
	return 0i64;
}
// 140B67610: using guessed type __int64 (__fastcall *off_140B67610[16])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65998: using guessed type __int64 qword_140C65998;
// 14049AA10: using guessed type char var_28[16];

