//----- (00000001401CECC0) ----------------------------------------------------
__int64 __fastcall sub_1401CECC0(_QWORD* a1, const WCHAR* a2, __int64 a3)
{
	_QWORD* v3; // rbx
	_WORD* v5; // r15
	__int64 result; // rax
	__int64 v7; // rbp
	unsigned __int64 v8; // rbx
	__int64 v9; // rbp
	WCHAR* v10; // rbx
	WCHAR* v11; // rsi
	__int16 v12; // di
	int* v13; // rax
	_QWORD* v14; // rcx
	bool v15; // zf
	__int64 v16; // rax

	v3 = a1 + 1;
	v5 = a1 + 67;
	a1[66] = sub_1401B5020(*(__int64*)&qword_140C63788, (WCHAR*)a1 + 4, a3, a2);
	result = sub_1401A3210((int*)a1 + 134, 0x104ui64, a1 + 133, a1 + 134, 0, L"%s\\", v3);
	if ((int)result >= 0)
	{
		v7 = *a1;
		v8 = *(_QWORD*)(*(_QWORD*)*a1 + 2120i64);
		if ((unsigned int)sub_14018E3E0((__int64)(a1 + 67), (unsigned __int16*)(*(_QWORD*)*a1 + 1600i64), v8)
			|| *((_WORD*)a1 + v8 + 268) != 92)
		{
			a1[132] = v5;
		}
		else
		{
			a1[132] = (char*)a1 + 2 * v8 + 538;
		}
		v9 = *(_QWORD*)(v7 + 208);
		if (v9)
		{
			while (1)
			{
				v10 = (WCHAR*)(a1 + 67);
				v11 = (WCHAR*)(v9 + 536);
				if (!*v5)
					return 2147500037i64;
				while (*v11)
				{
					v12 = sub_1407DF5F4(*v11);
					if ((unsigned __int16)sub_1407DF5F4(*v10) != v12)
						break;
					++v10;
					++v11;
					if (!*v10)
						return 2147500037i64;
				}
				if (!*v10 || !*v11)
					return 2147500037i64;
				v9 = *(_QWORD*)(v9 + 1176);
				if (!v9)
					goto LABEL_15;
			}
		}
		else
		{
		LABEL_15:
			v13 = sub_14018B280(65520i64, 0);
			v14 = (_QWORD*)(*a1 + 208i64);
			v15 = a1[146] == 0i64;
			a1[135] = v13;
			if (v15)
			{
				a1[146] = v14;
				a1[147] = *v14;
				*v14 = a1;
				v16 = a1[147];
				if (v16)
					*(_QWORD*)(v16 + 1168) = a1 + 147;
			}
			sub_1401CEE70((__int64)a1);
			return 0i64;
		}
	}
	return result;
}
// 140A486C8: using guessed type wchar_t aS_31[4];

