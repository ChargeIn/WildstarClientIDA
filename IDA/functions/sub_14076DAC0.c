//----- (000000014076DAC0) ----------------------------------------------------
__int64 __fastcall sub_14076DAC0(__int64 a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rbp
	unsigned int v8; // esi
	__int64 v9; // rdi
	__int64 v10; // rax
	unsigned int* v11; // rax
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rdx
	_QWORD* v16; // rax
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	__int64 v20; // [rsp+20h] [rbp-48h] BYREF
	__int64 v21; // [rsp+28h] [rbp-40h]
	__int64 v22; // [rsp+40h] [rbp-28h] BYREF
	__int64 v23; // [rsp+48h] [rbp-20h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = v6 + 384;
	v8 = 0;
	v9 = (int)sub_1400F26A0(v6 + 384, 1);
	v10 = sub_14076D520(a1);
	if (v10)
	{
		v11 = *(unsigned int**)(v10 + 16);
		if (v11)
			v8 = *v11;
	}
	v12 = (unsigned int)sub_1400F26A0(v7, 3);
	if ((int)v9 < 10
		&& (v13 = *(_QWORD*)(qword_140C65A40 + 8 * v9)) != 0
		&& (v14 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v13 + 16i64))(v13, v8, v12)) != 0)
	{
		v15 = *(_QWORD*)(v14 + 16);
	}
	else
	{
		v15 = 0i64;
	}
	v16 = sub_14076D660(&v22, v15);
	v17 = (unsigned __int64*)sub_14018F0E0(&v20, (unsigned __int16*)v16[1])[1];
	if (v17)
	{
		v18 = -1i64;
		do
			++v18;
		while (*((_BYTE*)v17 + v18));
		sub_140058710(a1, v17, v18);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v21)
		sub_14018B900(v21, 0);
	if (v23)
		sub_14018B900(v23, 0);
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65A40: using guessed type __int64 qword_140C65A40;

