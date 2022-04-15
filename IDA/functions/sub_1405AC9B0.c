//----- (00000001405AC9B0) ----------------------------------------------------
__int64 __fastcall sub_1405AC9B0(__int64 a1)
{
	unsigned int v2; // ecx
	__int64 v3; // r14
	__int64 v4; // r15
	int v5; // ebx
	__int64 v6; // rax
	__int64 v7; // rsi
	int v8; // ebp
	unsigned __int64 v9; // rdi
	_QWORD* v10; // rbx
	__int64* v11; // rbx
	__int64 v12; // rdi
	__int64(__fastcall * v13)(wchar_t**, _QWORD, __int64); // rax
	__int64 v14; // rbx
	unsigned int v15; // esi
	__int64 v16; // rax
	__int64 v17; // rsi
	unsigned int v18; // ebp
	__int64 v19; // rax
	int v20; // eax
	__int64 v22; // [rsp+20h] [rbp-38h] BYREF
	__int64 v23; // [rsp+28h] [rbp-30h]
	__int64 v24; // [rsp+30h] [rbp-28h]
	__int64 v25; // [rsp+38h] [rbp-20h]
	int v26; // [rsp+60h] [rbp+8h] BYREF

	v2 = *(_DWORD*)(a1 + 184);
	v3 = 0i64;
	v4 = 0i64;
	v5 = 0;
	v24 = 0i64;
	v23 = 0i64;
	v25 = 0i64;
	v6 = sub_140205FA0(v2);
	if (v6)
		v5 = *(_DWORD*)(v6 + 4);
	v7 = qword_140C659F8;
	v8 = *(_DWORD*)(a1 + 188);
	v26 = v5;
	v9 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v26);
	v10 = *(_QWORD**)(*(_QWORD*)(v7 + 48) + 8 * (v9 % *(_QWORD*)(v7 + 40)));
	if (v10)
	{
		while (v9 != *v10 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v7 + 64))(&v26, v10 + 2))
		{
			v10 = (_QWORD*)v10[1];
			if (!v10)
				goto LABEL_11;
		}
		v11 = v10 + 3;
		if (v11 && *(_DWORD*)(*v11 + 20) == v8)
		{
			sub_1404C7CF0(*v11, &v22, 4);
			v3 = v24;
			v4 = v23;
		}
	}
LABEL_11:
	v12 = v4;
	if (v4 != v3)
	{
		v13 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		while (1)
		{
			v14 = *(_QWORD*)v12;
			v15 = *(_DWORD*)(*(_QWORD*)v12 + 108i64);
			if (v13)
			{
				v16 = v13(off_140A6AA60, v15, qword_140C63858);
			}
			else
			{
				if (dword_140C63A64 || (int)sub_140207B00() < 0)
					goto LABEL_31;
				v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63E68 + 24i64))(qword_140C63E68, v15);
			}
			v17 = v16;
			if (!v16)
				goto LABEL_31;
			v13 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			v18 = *(_DWORD*)(v14 + 108);
			if (qword_140C63840)
				break;
			if (!dword_140C63A64)
			{
				if ((int)sub_140207B00() >= 0)
				{
					v19 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63E68 + 24i64))(qword_140C63E68, v18);
					goto LABEL_24;
				}
			LABEL_29:
				v13 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			}
			v12 += 8i64;
			if (v12 == v3)
				goto LABEL_31;
		}
		v19 = qword_140C63840(off_140A6AA60, v18, qword_140C63858);
	LABEL_24:
		if (v19)
		{
			v20 = *(_DWORD*)(v19 + 24);
			if (((v20 & 0x340) == 0 || v20 == *(_DWORD*)(v14 + 116))
				&& (v20 & 0x342) != 0
				&& (*(_BYTE*)(v17 + 24) & 0x40) != 0)
			{
				goto LABEL_32;
			}
		}
		goto LABEL_29;
	}
LABEL_31:
	v14 = 0i64;
LABEL_32:
	if (v4)
		sub_14018B900(v4, 0);
	return v14;
}
// 140A6AA60: using guessed type wchar_t *off_140A6AA60[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A64: using guessed type int dword_140C63A64;
// 140C63E68: using guessed type __int64 qword_140C63E68;
// 140C659F8: using guessed type __int64 qword_140C659F8;

