//----- (0000000140027380) ----------------------------------------------------
__int64 __fastcall sub_140027380(_QWORD* a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rdi
	_DWORD* v4; // rax
	__int64 v5; // rax
	__int64 v6; // rbp
	unsigned __int64 v7; // rbx
	unsigned int* v8; // r14
	unsigned int v9; // ecx
	__int64 v10; // rcx
	__int64 v11; // r9
	__int64 v12; // r8
	__int64 v13; // rbx
	__int64 v14; // rsi
	__int64 v15; // rdi
	__int64 v16; // rcx
	__int64 v17; // r8
	int v18; // eax
	__int64 v19; // r15
	__int64 v20; // rax
	__int64 v21; // rsi
	unsigned int v22; // eax
	__int64 v23; // rcx

	v2 = (int)sub_140056D60(a1, 1u) - 1i64;
	if (v2 >= *(_QWORD*)(qword_140C66DA8 + 272))
		return 0i64;
	v3 = *(_QWORD*)(qword_140C66DA8 + 264) + 816 * v2;
	v4 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && !*(_DWORD*)(a1[3] + 24i64))
		return 0i64;
	v5 = sub_140056AB0(a1, 2u);
	if (!v5)
		return 0i64;
	v6 = *(_QWORD*)(*(_QWORD*)v5 + 16i64);
	if (!v6)
		return 0i64;
	v7 = 0i64;
	v8 = (unsigned int*)(v3 + 100);
	do
	{
		if ((unsigned int)(v7 - 1) > 5)
		{
			if ((_DWORD)v7 != 20)
				goto LABEL_10;
			v9 = 6;
		}
		else
		{
			v9 = v7 - 1;
			if ((unsigned int)(v7 - 1) >= 7)
				goto LABEL_10;
		}
		v18 = *(_DWORD*)(v3 + 716);
		if (_bittest(&v18, v9))
		{
			v19 = v9;
			v20 = sub_1402096E0(*(_DWORD*)(v3 + 4i64 * v9 + 720));
			v21 = v20;
			if (!v20 || !sub_14020BD20(*(_DWORD*)(v20 + 40)))
			{
			LABEL_10:
				v10 = *(_QWORD*)(v6 + 16);
				if (!v10)
					goto LABEL_13;
				v11 = v8[72];
				v12 = *v8;
				goto LABEL_12;
			}
			v22 = sub_140445140(*(_DWORD*)(v21 + 168), *(_DWORD*)(v3 + 4 * v19 + 748), 0);
			v23 = *(_QWORD*)(v6 + 16);
			if (v23)
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v23 + 80i64))(
					v23,
					(unsigned int)v7,
					*(unsigned int*)(v21 + 40),
					v22);
		}
		else
		{
			v10 = *(_QWORD*)(v6 + 16);
			if (v10)
			{
				v11 = 0i64;
				v12 = 0i64;
			LABEL_12:
				(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64))(*(_QWORD*)v10 + 80i64))(
					v10,
					(unsigned int)v7,
					v12,
					v11);
			}
		}
	LABEL_13:
		++v7;
		++v8;
	} while (v7 < 0x48);
	v13 = *(_QWORD*)(v6 + 16);
	v14 = v3 + 776;
	v15 = *(int*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13) + 16);
	v16 = *(int*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13) + 12);
	if ((unsigned int)v16 > 0x10 || (unsigned int)v15 > 2)
		v17 = qword_140C658E8;
	else
		v17 = *(_QWORD*)(32 * v16 + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v15;
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v6 + 16) + 312i64))(*(_QWORD*)(v6 + 16), v14, v17);
	sub_14004EDB0((_QWORD*)(v6 + 4904), v14);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C658E8: using guessed type __int64 qword_140C658E8;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

