#include "../winhttp.h"

//----- (0000000140591490) ----------------------------------------------------
__int64 __fastcall sub_140591490(__int64 a1)
{
	int v1; // eax
	int v3; // ecx
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rax
	int v9; // eax
	__int64 result; // rax

	v1 = dword_140C8AF78;
	if ((dword_140C8AF78 & 1) != 0)
	{
		v3 = dword_140C8AF8C;
	}
	else
	{
		v1 = dword_140C8AF78 | 1;
		v3 = 0;
		dword_140C8AF78 |= 1u;
		dword_140C8AF8C = 0;
	}
	if ((v1 & 2) == 0)
	{
		v1 |= 2u;
		dword_140C8AF84 = 0;
		dword_140C8AF78 = v1;
	}
	if ((v1 & 4) == 0)
	{
		v1 |= 4u;
		dword_140C8AF74 = 0;
		dword_140C8AF78 = v1;
	}
	if ((v1 & 8) == 0)
	{
		dword_140C8AF6C = 0;
		dword_140C8AF78 = v1 | 8;
	}
	if (v3)
	{
		v5 = dword_140C8AF88;
	}
	else
	{
		dword_140C8AF8C = 1;
		v4 = sub_140200220(0x52Cu);
		if (v4)
		{
			v5 = *(_DWORD*)(v4 + 4);
			dword_140C8AF88 = v5;
		}
		else
		{
			v5 = 0;
			dword_140C8AF88 = 0;
		}
	}
	*(_DWORD*)a1 = v5;
	*(_QWORD*)(a1 + 4) = 0i64;
	if (dword_140C8AF84)
	{
		v7 = dword_140C8AF80;
	}
	else
	{
		dword_140C8AF84 = 1;
		v6 = sub_140200220(0x52Cu);
		if (v6)
		{
			v7 = *(_DWORD*)(v6 + 8);
			dword_140C8AF80 = v7;
		}
		else
		{
			v7 = 0;
			dword_140C8AF80 = 0;
		}
	}
	*(float*)(a1 + 12) = (float)v7 * 0.0099999998;
	if (dword_140C8AF74)
	{
		v9 = dword_140C8AF70;
	}
	else
	{
		dword_140C8AF74 = 1;
		v8 = sub_140200220(0x52Cu);
		if (v8)
		{
			v9 = *(_DWORD*)(v8 + 12);
			dword_140C8AF70 = v9;
		}
		else
		{
			v9 = 0;
			dword_140C8AF70 = 0;
		}
	}
	*(_DWORD*)(a1 + 16) = v9;
	if (dword_140C8AF6C)
	{
		result = (unsigned int)dword_140C8AF68;
		*(_QWORD*)(a1 + 20) = (unsigned int)dword_140C8AF68;
	}
	else
	{
		dword_140C8AF6C = 1;
		result = sub_140200220(0x52Cu);
		if (result)
		{
			result = *(unsigned int*)(result + 16);
			dword_140C8AF68 = result;
			*(_QWORD*)(a1 + 20) = (unsigned int)result;
		}
		else
		{
			dword_140C8AF68 = 0;
			*(_QWORD*)(a1 + 20) = 0i64;
		}
	}
	return result;
}
// 140C8AF68: using guessed type int dword_140C8AF68;
// 140C8AF6C: using guessed type int dword_140C8AF6C;
// 140C8AF70: using guessed type int dword_140C8AF70;
// 140C8AF74: using guessed type int dword_140C8AF74;
// 140C8AF78: using guessed type int dword_140C8AF78;
// 140C8AF80: using guessed type int dword_140C8AF80;
// 140C8AF84: using guessed type int dword_140C8AF84;
// 140C8AF88: using guessed type int dword_140C8AF88;
// 140C8AF8C: using guessed type int dword_140C8AF8C;

