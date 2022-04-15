//----- (00000001405744F0) ----------------------------------------------------
_QWORD* __fastcall sub_1405744F0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v4; // r9
	__int64 v5; // rcx
	__int64 i; // rax
	_DWORD* v7; // r14
	_QWORD* v8; // rsi
	_QWORD* v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rdx
	_QWORD* v12; // rdi
	__int64 v13; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	unsigned int v16; // ebx
	__int64 v17; // rax
	__int64 v19; // [rsp+40h] [rbp+8h]

	v4 = *(_QWORD*)(qword_140C65960 + 16);
	v5 = v4;
	for (i = *(_QWORD*)(v4 + 8); i; i = *(_QWORD*)(i + 16))
		v5 = i;
	if (v5 == v4 || (v19 = v5, *(_DWORD*)(v5 + 32)))
		v19 = *(_QWORD*)(qword_140C65960 + 16);
	if (v19 == v4 || v19 == -40)
		return 0i64;
	v7 = (_DWORD*)sub_14024DB80(a2);
	if (!v7)
		return 0i64;
	while (1)
	{
		v8 = *(_QWORD**)(v19 + 80);
		v9 = v8;
		v10 = v8[1];
		v11 = v10;
		if (v10)
		{
			do
			{
				if (*(_DWORD*)(v11 + 32) < *v7)
				{
					v11 = *(_QWORD*)(v11 + 24);
				}
				else
				{
					v9 = (_QWORD*)v11;
					v11 = *(_QWORD*)(v11 + 16);
				}
			} while (v11);
			do
			{
				if (*v7 >= *(_DWORD*)(v10 + 32))
				{
					v10 = *(_QWORD*)(v10 + 24);
				}
				else
				{
					v8 = (_QWORD*)v10;
					v10 = *(_QWORD*)(v10 + 16);
				}
			} while (v10);
		}
		if (v9 != v8)
			break;
	LABEL_29:
		v16 = v7[2];
		if (qword_140C63840)
		{
			v17 = qword_140C63840(off_140A6E3E8, v16, qword_140C63858);
		}
		else
		{
			if (dword_140C64634 || (int)sub_14024D920() < 0)
				return 0i64;
			v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v16);
		}
		v7 = (_DWORD*)v17;
		if (!v17)
			return 0i64;
	}
	while (1)
	{
		v12 = (_QWORD*)v9[5];
		if ((unsigned int)sub_1405746C0(v12, a3))
			return v12;
		v13 = v9[3];
		if (v13)
		{
			v9 = (_QWORD*)v9[3];
			for (j = *(_QWORD**)(v13 + 16); j; j = (_QWORD*)j[2])
				v9 = j;
		}
		else
		{
			for (k = v9[1]; v9 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
				v9 = (_QWORD*)k;
			if (v9[3] != k)
				v9 = (_QWORD*)k;
		}
		if (v9 == v8)
			goto LABEL_29;
	}
}
// 1405745B0: conditional instruction was optimized away because rcx.8!=0
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C65960: using guessed type __int64 qword_140C65960;

