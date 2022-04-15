//----- (00000001402B45A0) ----------------------------------------------------
__int64 __fastcall sub_1402B45A0(char* a1, unsigned __int64 a2, __int64 a3, _QWORD* a4, _DWORD* a5)
{
	__int64 result; // rax
	char v7; // dl
	char v8; // al
	_DWORD* v9; // rcx
	bool v10; // zf
	__int64 v11; // rax
	__int64 v12; // rax
	unsigned __int8 v13; // al

	*(_QWORD*)a3 = 0i64;
	*(_QWORD*)(a3 + 8) = 0i64;
	*(_QWORD*)(a3 + 16) = 0i64;
	*(_QWORD*)(a3 + 24) = 0i64;
	*(_QWORD*)(a3 + 32) = 0i64;
	*(_QWORD*)(a3 + 40) = 0i64;
	*(_QWORD*)(a3 + 48) = 0i64;
	if (a2 < 0x12)
		return 2147942413i64;
	if (a1[1] || *(_WORD*)(a1 + 5) || (a1[17] & 0xC0) != 0)
		return 2147942450i64;
	if (!*((_WORD*)a1 + 6) || !*((_WORD*)a1 + 7))
		return 2147942413i64;
	v7 = a1[2];
	switch (v7)
	{
	case 0:
	case 1:
	case 9:
		return 2147942450i64;
	case 2:
	case 10:
		v8 = a1[16];
		v9 = a5;
		switch (v8)
		{
		case 16:
			*(_DWORD*)(a3 + 48) = 86;
			break;
		case 24:
			*(_DWORD*)(a3 + 48) = 28;
			if (!a5)
				goto LABEL_23;
			*a5 |= 1u;
			break;
		case 32:
			*(_DWORD*)(a3 + 48) = 28;
			break;
		}
		if (a5)
		{
			v10 = a1[2] == 10;
		LABEL_21:
			if (v10)
				*v9 |= 8u;
		}
	LABEL_23:
		v11 = *((unsigned __int16*)a1 + 6);
		*(_QWORD*)(a3 + 32) = 1i64;
		*(_QWORD*)(a3 + 24) = 1i64;
		*(_QWORD*)a3 = v11;
		v12 = *((unsigned __int16*)a1 + 7);
		*(_QWORD*)(a3 + 16) = 1i64;
		*(_DWORD*)(a3 + 52) = 3;
		*(_QWORD*)(a3 + 8) = v12;
		if (v9)
		{
			if ((a1[17] & 0x10) != 0)
				*v9 |= 2u;
			if ((a1[17] & 0x20) != 0)
				*v9 |= 4u;
		}
		v13 = *a1;
		*a4 = 18i64;
		if (v13)
			*a4 = v13 + 18i64;
		result = 0i64;
		break;
	case 3:
	case 11:
		if (a1[16] != 8)
			return 2147942450i64;
		v9 = a5;
		*(_DWORD*)(a3 + 48) = 61;
		if (!a5)
			goto LABEL_23;
		v10 = v7 == 11;
		goto LABEL_21;
	default:
		return 2147942413i64;
	}
	return result;
}

