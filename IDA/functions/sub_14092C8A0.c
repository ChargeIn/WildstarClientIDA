#include "../winhttp.h"

//----- (000000014092C8A0) ----------------------------------------------------
__int64 __fastcall sub_14092C8A0(
	unsigned int* a1,
	char a2,
	int a3,
	int a4,
	__int64 a5,
	int a6,
	__int64 a7,
	int a8,
	__int64 a9)
{
	__int64 v12; // rax
	__int64 result; // rax
	__int64 v14; // rax
	int v15; // r15d
	char* v16; // rax
	char* v17; // rax
	unsigned int v18; // eax

	if ((a8 & 0x200) != 0)
	{
		v12 = a9;
		if ((a9 & 0x3F) == 0 && (!a1[26] || (a9 & 0x1F) == 0))
		{
			if (a3)
				return sub_140929F50(a1, 11, 9, 8, 13, a4, a5, a6, a7, 512, 0i64);
			else
				return sub_14092AA10(a1, a4, a5, a6, a7);
		}
		return sub_14092BFE0(a1, a2, a4, a5, a6, a7, a8, v12);
	}
	if (!a3)
	{
		v12 = a9;
		return sub_14092BFE0(a1, a2, a4, a5, a6, a7, a8, v12);
	}
	if (a4 > 12)
	{
		v14 = a7;
		v15 = a6;
		if (a6 <= 12)
		{
			v16 = sub_14092D140((__int64)a1, 17, 512, 0i64, a6, 0i64);
			if (v16)
			{
			LABEL_14:
				v16[1] |= 0x38u;
				goto LABEL_15;
			}
		LABEL_28:
			result = *a1;
			if ((_DWORD)result)
				return result;
			goto LABEL_15;
		}
		if ((a6 & 0x200) == 0)
		{
		LABEL_27:
			v16 = sub_14092D140((__int64)a1, 17, 512, 0i64, v15, v14);
			if (v16)
				goto LABEL_14;
			goto LABEL_28;
		}
		v15 = 12;
		if (a1[26])
		{
			v18 = sub_14092A740(a1, 65, 186, a7);
		}
		else if ((unsigned __int64)(a7 + 0x80000000i64) > 0xFFFFFFFF)
		{
			v18 = sub_14092A980(a1, 12, a7);
		}
		else
		{
			v17 = sub_14092D140((__int64)a1, 1, 512, a7, 12, 0i64);
			if (v17)
			{
				*v17 = -57;
			LABEL_26:
				v14 = 0i64;
				goto LABEL_27;
			}
			v18 = *a1;
		}
		if (v18)
			goto LABEL_28;
		goto LABEL_26;
	}
LABEL_15:
	if ((unsigned int)sub_14092BFE0(a1, a2, a4, a5, a6, a7, a8, a9))
		return *a1;
	if (a4 > 12)
		return 0i64;
	return sub_140929C10(a1, a4, a5, 512, 0i64);
}

