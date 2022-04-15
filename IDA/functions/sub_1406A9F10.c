#include "../winhttp.h"

//----- (00000001406A9F10) ----------------------------------------------------
__int64 __fastcall sub_1406A9F10(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	int v7; // r11d
	__int64 v8; // rax
	__int64 v9; // rax
	int v10; // eax
	int v11; // r11d
	__int64 v12; // rax

	v2 = sub_1406A93C0(a1);
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = qword_140C65898;
	v5 = *(_QWORD*)(qword_140C65898 + 29272);
	if (!v5 || *(_DWORD*)(v5 + 20) != 7)
	{
		if (*(_DWORD*)(v2 + 48) == 5)
		{
			if ((dword_140DC4B20 & 2) != 0)
			{
				if (dword_140DC4B34)
				{
					v7 = dword_140DC4B30;
					goto LABEL_29;
				}
			}
			else
			{
				dword_140DC4B20 |= 2u;
			}
			dword_140DC4B34 = 1;
			v8 = sub_140200220(0x449u);
			if (v8)
			{
				v7 = *(_DWORD*)(v8 + 8);
				dword_140DC4B30 = v7;
			}
			else
			{
				v7 = 0;
				dword_140DC4B30 = 0;
			}
			goto LABEL_29;
		}
		if ((dword_140DC4B20 & 4) != 0)
		{
			if (dword_140DC4B3C)
			{
				v7 = dword_140DC4B38;
				goto LABEL_27;
			}
		}
		else
		{
			dword_140DC4B20 |= 4u;
		}
		dword_140DC4B3C = 1;
		v9 = sub_140200220(0x449u);
		v4 = qword_140C65898;
		if (v9)
		{
			v7 = *(_DWORD*)(v9 + 4);
			dword_140DC4B38 = v7;
		}
		else
		{
			v7 = 0;
			dword_140DC4B38 = 0;
		}
	LABEL_27:
		if (v4)
		{
			v10 = sub_1403ABFE0(v4 + 7160, 31, 0);
			v7 = v10 + v11;
		}
		goto LABEL_29;
	}
	if ((dword_140DC4B20 & 1) == 0)
	{
		dword_140DC4B20 |= 1u;
		goto LABEL_8;
	}
	if (!dword_140DC4B2C)
	{
	LABEL_8:
		dword_140DC4B2C = 1;
		v6 = sub_140200220(0x40Bu);
		if (v6)
		{
			v7 = *(_DWORD*)(v6 + 8);
			dword_140DC4B28 = v7;
		}
		else
		{
			v7 = 0;
			dword_140DC4B28 = 0;
		}
		goto LABEL_29;
	}
	v7 = dword_140DC4B28;
LABEL_29:
	v12 = a1[2];
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = (double)v7;
	a1[2] += 16i64;
	return 1i64;
}
// 1406AA08C: variable 'v11' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4B20: using guessed type int dword_140DC4B20;
// 140DC4B28: using guessed type int dword_140DC4B28;
// 140DC4B2C: using guessed type int dword_140DC4B2C;
// 140DC4B30: using guessed type int dword_140DC4B30;
// 140DC4B34: using guessed type int dword_140DC4B34;
// 140DC4B38: using guessed type int dword_140DC4B38;
// 140DC4B3C: using guessed type int dword_140DC4B3C;

