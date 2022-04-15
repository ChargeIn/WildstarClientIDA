//----- (00000001404CEEA0) ----------------------------------------------------
__int64 __fastcall sub_1404CEEA0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	unsigned int v4; // eax
	unsigned int* v5; // rdx
	__int64 v7; // r9
	__int64 v8; // rcx
	__int64 v9; // rax
	unsigned int v10; // eax
	__int64 v11; // rax
	unsigned int v12; // ebx
	__int64 v13; // rax
	__int64 v14; // r8
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // [rsp+30h] [rbp+8h] BYREF
	__int64 v19; // [rsp+40h] [rbp+18h] BYREF

	v18 = a1;
	v2 = qword_140C65A20;
	if (!qword_140C658F8)
		return 0i64;
	v3 = sub_140448420(a1, a2);
	if (!v3)
		return 0i64;
	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 40i64))(v3);
	v5 = (unsigned int*)sub_14024DB80(v4);
	if (!v5)
		return 0i64;
	v7 = *(_QWORD*)(v2 + 56);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < *v5)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v10 = *(_DWORD*)(v8 + 32), v18 = v8, *v5 < v10))
		v18 = v7;
	v11 = v18;
	if (v18 != v7)
		return *(_QWORD*)(v11 + 40);
	while (1)
	{
		v12 = v5[2];
		if (qword_140C63840)
		{
			v13 = qword_140C63840(off_140A6E3E8, v12, qword_140C63858);
			goto LABEL_19;
		}
		if (dword_140C64634 || (int)sub_14024D920() < 0)
			return 0i64;
		v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v12);
	LABEL_19:
		v5 = (unsigned int*)v13;
		if (!v13)
			return 0i64;
		v14 = *(_QWORD*)(v2 + 56);
		v15 = v14;
		v16 = *(_QWORD*)(v14 + 8);
		while (v16)
		{
			if (*(_DWORD*)(v16 + 32) < *v5)
			{
				v16 = *(_QWORD*)(v16 + 24);
			}
			else
			{
				v15 = v16;
				v16 = *(_QWORD*)(v16 + 16);
			}
		}
		if (v15 == v14 || *v5 < *(_DWORD*)(v15 + 32))
		{
			v19 = *(_QWORD*)(v2 + 56);
			v17 = &v19;
		}
		else
		{
			v18 = v15;
			v17 = &v18;
		}
		v11 = *v17;
		if (v11 != v14)
			return *(_QWORD*)(v11 + 40);
	}
}
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C65A20: using guessed type __int64 qword_140C65A20;

