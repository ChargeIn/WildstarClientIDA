//----- (00000001400322E0) ----------------------------------------------------
__int64 __fastcall sub_1400322E0(__int64 a1, int a2, int a3, unsigned int* a4)
{
	_QWORD* v4; // rbp
	__int64 v5; // rsi
	unsigned int v9; // edi
	__int64 v10; // rax
	__int64 v11; // rdx
	unsigned __int64 v12; // r8
	unsigned __int64 v13; // rcx
	_DWORD* v14; // rax

	v4 = (_QWORD*)qword_140C63600;
	v5 = 0i64;
	if (!*(_QWORD*)(qword_140C63600 + 40))
		return 0i64;
	while (1)
	{
		v9 = *(_DWORD*)(v4[4] + 4 * v5);
		if (qword_140C63840)
		{
			v10 = qword_140C63840(off_140A69758, v9, qword_140C63858);
		}
		else
		{
			if (dword_140C65200)
			{
				v11 = 0i64;
				goto LABEL_10;
			}
			if ((int)sub_1401F0940() < 0)
			{
				v11 = 0i64;
				goto LABEL_10;
			}
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63FD8 + 24i64))(qword_140C63FD8, v9);
		}
		v11 = v10;
	LABEL_10:
		v12 = v4[11];
		v13 = 0i64;
		if (v12)
			break;
	LABEL_17:
		if ((unsigned __int64)++v5 >= v4[5])
			return 0i64;
	}
	v14 = (_DWORD*)v4[10];
	while (*v14 != v9 || v14[1] != a2 || a3 && *(_DWORD*)(v11 + 8) != a3)
	{
		++v13;
		v14 += 4;
		if (v13 >= v12)
			goto LABEL_17;
	}
	*a4 = v9;
	return 1i64;
}
// 140A69758: using guessed type wchar_t *off_140A69758[2];
// 140C63600: using guessed type __int64 qword_140C63600;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63FD8: using guessed type __int64 qword_140C63FD8;
// 140C65200: using guessed type int dword_140C65200;

