//----- (000000014050BE00) ----------------------------------------------------
__int64 __fastcall sub_14050BE00(_QWORD* a1)
{
	__int64 v2; // r8
	__int64 v3; // rdx
	__int64 v4; // rcx
	int v5; // edi
	int* v6; // rax
	__int64 v7; // rsi
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]

	v2 = (unsigned int)sub_140056D60(a1, 1u);
	v3 = 0i64;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4)
	{
		v3 = *(unsigned int*)(v4 + 60);
		if (!(_DWORD)v3)
			v3 = *(unsigned int*)(v4 + 56);
	}
	v5 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65A10 + 16i64))(
		qword_140C65A10,
		v3,
		v2);
	v6 = sub_14018B280(16i64, 0);
	v7 = (__int64)v6;
	if (v6)
		*(_WORD*)v6 = 0;
	switch (v5)
	{
	case 1:
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, off_140C2C918[0])[1];
		if (!v8)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_12;
		}
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		goto LABEL_11;
	case 2:
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, off_140C2C938[0])[1];
		if (!v8)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_12;
		}
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		goto LABEL_11;
	case 3:
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, off_140C2C9A0[0])[1];
		if (!v8)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_12;
		}
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		goto LABEL_11;
	case 4:
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, off_140C2C940[0])[1];
		if (!v8)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_12;
		}
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		goto LABEL_11;
	case 5:
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, off_140C2C910[0])[1];
		if (!v8)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_12;
		}
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		goto LABEL_11;
	case 6:
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, off_140C2C968[0])[1];
		if (!v8)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_12;
		}
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		goto LABEL_11;
	case 7:
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, off_140C2C960[0])[1];
		if (!v8)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_12;
		}
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		goto LABEL_11;
	case 8:
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, off_140C2C930[0])[1];
		if (!v8)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_12;
		}
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		goto LABEL_11;
	case 9:
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, off_140C2C978[0])[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
		LABEL_11:
			sub_140058710((__int64)a1, v8, v9);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	LABEL_12:
		if (v12)
			sub_14018B900(v12, 0);
	LABEL_55:
		if (v7)
			sub_14018B900(v7, 0);
		return 1i64;
	default:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_55;
	}
}
// 140C2C910: using guessed type wchar_t *off_140C2C910[20];
// 140C2C918: using guessed type wchar_t *off_140C2C918[19];
// 140C2C930: using guessed type wchar_t *off_140C2C930[16];
// 140C2C938: using guessed type wchar_t *off_140C2C938[15];
// 140C2C940: using guessed type wchar_t *off_140C2C940[14];
// 140C2C960: using guessed type wchar_t *off_140C2C960[10];
// 140C2C968: using guessed type wchar_t *off_140C2C968[9];
// 140C2C978: using guessed type wchar_t *off_140C2C978[7];
// 140C2C9A0: using guessed type wchar_t *off_140C2C9A0[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A10: using guessed type __int64 qword_140C65A10;

