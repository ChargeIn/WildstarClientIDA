#include "../winhttp.h"

//----- (00000001407DF964) ----------------------------------------------------
__int64 __fastcall sub_1407DF964(
	char* a1,
	_WORD* a2,
	unsigned __int64 a3,
	_WORD* a4,
	unsigned __int64 a5,
	_WORD* a6,
	unsigned __int64 a7,
	_WORD* a8,
	unsigned __int64 a9)
{
	char* v9; // rdi
	int v12; // esi
	unsigned __int64 v13; // r9
	__int64 v14; // rax
	char* v15; // rbx
	__int16 v16; // ax
	char* v17; // rbp
	char* v18; // rsi
	char* v19; // rbx
	unsigned __int64 v20; // r9
	unsigned __int64 v21; // r9
	unsigned __int64 v22; // rbx
	unsigned __int64 v23; // rbx
	_QWORD* v25; // rax

	v9 = a1;
	v12 = 0;
	v13 = a3;
	if (!a1)
		goto LABEL_4;
	if (a2)
	{
		if (!a3)
			goto LABEL_4;
	}
	else if (a3)
	{
	LABEL_4:
		v12 = 1;
		goto LABEL_57;
	}
	if (a4)
	{
		if (!a5)
			goto LABEL_4;
	}
	else if (a5)
	{
		goto LABEL_4;
	}
	if (a6)
	{
		if (!a7)
			goto LABEL_4;
	}
	else if (a7)
	{
		goto LABEL_4;
	}
	if (a8)
	{
		if (!a9)
			goto LABEL_4;
	}
	else if (a9)
	{
		goto LABEL_4;
	}
	v14 = 1i64;
	v15 = a1;
	do
	{
		if (!*(_WORD*)v15)
			break;
		v15 += 2;
		--v14;
	} while (v14);
	if (*(_WORD*)v15 == 58)
	{
		if (a2)
		{
			if (a3 < 3)
				goto LABEL_57;
			sub_1407E6D08((__int64)a2, -1i64, a1, 2i64);
		}
		v9 = v15 + 2;
	}
	else if (a2)
	{
		*a2 = 0;
	}
	v16 = *(_WORD*)v9;
	v17 = 0i64;
	v18 = 0i64;
	v19 = v9;
	if (!*(_WORD*)v9)
		goto LABEL_40;
	do
	{
		if (v16 == 47 || v16 == 92)
		{
			v17 = v19 + 2;
		}
		else if (v16 == 46)
		{
			v18 = v19;
		}
		v19 += 2;
		v16 = *(_WORD*)v19;
	} while (*(_WORD*)v19);
	if (v17)
	{
		if (a4)
		{
			v20 = (v17 - v9) >> 1;
			if (a5 <= v20)
				goto LABEL_56;
			sub_1407E6D08((__int64)a4, -1i64, v9, v20);
		}
		v9 = v17;
	}
	else
	{
	LABEL_40:
		if (a4)
			*a4 = 0;
	}
	if (!v18 || v18 < v9)
	{
		if (a6)
		{
			v23 = (v19 - v9) >> 1;
			if (a7 <= v23)
				goto LABEL_56;
			sub_1407E6D08((__int64)a6, -1i64, v9, v23);
		}
		if (a8)
			*a8 = 0;
		return 0i64;
	}
	if (!a6)
	{
	LABEL_47:
		if (!a8)
			return 0i64;
		v22 = (v19 - v18) >> 1;
		if (a9 > v22)
		{
			sub_1407E6D08((__int64)a8, -1i64, v18, v22);
			return 0i64;
		}
		goto LABEL_56;
	}
	v21 = (v18 - v9) >> 1;
	if (a7 > v21)
	{
		sub_1407E6D08((__int64)a6, -1i64, v9, v21);
		goto LABEL_47;
	}
LABEL_56:
	v12 = 0;
	v13 = a3;
LABEL_57:
	if (a2 && v13)
		*a2 = 0;
	if (a4 && a5)
		*a4 = 0;
	if (a6 && a7)
		*a6 = 0;
	if (a8 && a9)
		*a8 = 0;
	v25 = sub_1407DE1B0();
	if (!v9 || v12)
	{
		*(_DWORD*)v25 = 22;
		sub_1407DC370();
		return 22i64;
	}
	else
	{
		*(_DWORD*)v25 = 34;
		return 34i64;
	}
}

