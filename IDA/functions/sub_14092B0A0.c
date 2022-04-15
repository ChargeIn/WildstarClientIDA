//----- (000000014092B0A0) ----------------------------------------------------
__int64 __fastcall sub_14092B0A0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6, __int64 a7)
{
	int v7; // esi
	int v8; // edi
	unsigned int* v12; // rbx
	char* v13; // rax
	__int64 v14; // rbp
	char* v15; // rax
	_BYTE* v16; // rax
	char* v17; // rax
	_QWORD* v18; // rax
	char* v19; // rax
	char* v20; // rax
	__int64 result; // rax
	char* v22; // rax
	_BYTE* v23; // rax
	char* v24; // rax
	_QWORD* v25; // rax
	char* v26; // rax
	char* v27; // rax
	char* v28; // rax

	v7 = a6;
	v8 = 12;
	if (a2 <= 12)
		v8 = a2;
	v12 = (unsigned int*)a1;
	if (v8 == a4 && (a6 & 0x200) == 0)
		goto LABEL_60;
	if (v8 != a6)
	{
		if ((a4 & 0x200) != 0)
			goto LABEL_9;
		if ((a6 & 0x200) != 0)
		{
			if ((unsigned __int64)(a7 + 128) <= 0xFF)
			{
				v22 = sub_14092D140(a1, 1, v8, 0i64, a4, a5);
				if (!v22)
					return *v12;
				*v22 = 107;
				v23 = sub_14092D610((__int64)v12, 2i64);
				if (!v23)
					return *v12;
				*v23 = 1;
				++* ((_QWORD*)v12 + 11);
				v23[1] = a7;
				goto LABEL_63;
			}
			if ((unsigned __int64)(a7 + 0x80000000i64) <= 0xFFFFFFFF)
			{
				v24 = sub_14092D140(a1, 1, v8, 0i64, a4, a5);
				if (!v24)
					return *v12;
				*v24 = 105;
				v25 = sub_14092D610((__int64)v12, 5i64);
				if (!v25)
					return *v12;
				*(_BYTE*)v25 = 4;
				*((_QWORD*)v12 + 11) += 4i64;
				*(_DWORD*)((char*)v25 + 1) = a7;
				goto LABEL_63;
			}
			if (*(_DWORD*)(a1 + 104) || (unsigned __int64)(a5 + 0x80000000i64) <= 0xFFFFFFFF)
			{
				v27 = sub_14092D140(a1, 1, 512, a5, 13, 0i64);
				if (v27)
				{
					*v27 = -57;
					goto LABEL_51;
				}
			}
			else if (!(unsigned int)sub_14092A980((_QWORD*)a1, 13, a5))
			{
				v26 = sub_14092D140((__int64)v12, 1, 13, 0i64, 13, 0i64);
				if (v26)
				{
					*v26 = -119;
					goto LABEL_51;
				}
			}
			result = *v12;
			if ((_DWORD)result)
				return result;
		LABEL_51:
			if (v8 != a4 && (unsigned int)sub_14092AA10(v12, v8, 0i64, a4, a5))
				return *v12;
		LABEL_32:
			v13 = sub_14092D140((__int64)v12, 2, v8, 0i64, 13, 0i64);
			goto LABEL_61;
		}
		if ((a6 & 0x100) != 0 && ((a6 & 0xF) == v8 || ((a6 >> 4) & 0xF) == v8))
			v8 = 12;
		if ((unsigned int)sub_14092AA10((unsigned int*)a1, v8, 0i64, a4, a5))
			return *v12;
		a1 = (__int64)v12;
	LABEL_60:
		v13 = sub_14092D140(a1, 2, v8, 0i64, a6, a7);
	LABEL_61:
		if (v13)
		{
			*(_WORD*)v13 = -20721;
			goto LABEL_63;
		}
		return *v12;
	}
	if ((a4 & 0x200) == 0)
	{
		v13 = sub_14092D140(a1, 2, v8, 0i64, a4, a5);
		goto LABEL_61;
	}
LABEL_9:
	if ((a6 & 0x200) != 0)
	{
		if ((unsigned int)sub_14092AA10((unsigned int*)a1, v8, 0i64, 512, a7))
			return *v12;
		v7 = v8;
		v14 = 0i64;
	}
	else
	{
		v14 = a7;
	}
	if ((unsigned __int64)(a5 + 128) > 0xFF)
	{
		if ((unsigned __int64)(a5 + 0x80000000i64) <= 0xFFFFFFFF)
		{
			v17 = sub_14092D140((__int64)v12, 1, v8, 0i64, v7, v14);
			if (!v17)
				return *v12;
			*v17 = 105;
			v18 = sub_14092D610((__int64)v12, 5i64);
			if (!v18)
				return *v12;
			*(_BYTE*)v18 = 4;
			*((_QWORD*)v12 + 11) += 4i64;
			*(_DWORD*)((char*)v18 + 1) = a5;
			goto LABEL_63;
		}
		if (v12[26] || (unsigned __int64)(a5 + 0x80000000i64) <= 0xFFFFFFFF)
		{
			v20 = sub_14092D140((__int64)v12, 1, 512, a5, 13, 0i64);
			if (v20)
			{
				*v20 = -57;
				goto LABEL_30;
			}
		}
		else if (!(unsigned int)sub_14092A980(v12, 13, a5))
		{
			v19 = sub_14092D140((__int64)v12, 1, 13, 0i64, 13, 0i64);
			if (v19)
			{
				*v19 = -119;
				goto LABEL_30;
			}
		}
		result = *v12;
		if ((_DWORD)result)
			return result;
	LABEL_30:
		if (v8 != v7 && (unsigned int)sub_14092AA10(v12, v8, 0i64, v7, v14))
			return *v12;
		goto LABEL_32;
	}
	v15 = sub_14092D140((__int64)v12, 1, v8, 0i64, v7, v14);
	if (!v15)
		return *v12;
	*v15 = 107;
	v16 = sub_14092D610((__int64)v12, 2i64);
	if (!v16)
		return *v12;
	*v16 = 1;
	++* ((_QWORD*)v12 + 11);
	v16[1] = a5;
LABEL_63:
	if (v8 != 12 || !a2)
		return 0i64;
	v28 = sub_14092D140((__int64)v12, 1, 12, 0i64, a2, a3);
	if (v28)
	{
		*v28 = -119;
		return 0i64;
	}
	result = *v12;
	if (!(_DWORD)result)
		return 0i64;
	return result;
}

