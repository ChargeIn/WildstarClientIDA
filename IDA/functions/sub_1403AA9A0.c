#include "../winhttp.h"

//----- (00000001403AA9A0) ----------------------------------------------------
__int64 __fastcall sub_1403AA9A0(__int64 a1)
{
	int v1; // eax
	__int64 v3; // rax
	int v4; // eax
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rax
	unsigned int v8; // ebx
	int v9; // ecx
	int v10; // ecx

	v1 = dword_140DC2248;
	if ((dword_140DC2248 & 1) == 0)
	{
		dword_140DC2248 |= 1u;
		v3 = sub_140200220(0x4B8u);
		if (v3)
			v4 = *(_DWORD*)(v3 + 4);
		else
			v4 = 60;
		dword_140DC224C = 60 * v4;
		v1 = dword_140DC2248;
	}
	if ((v1 & 2) == 0)
	{
		dword_140DC2248 = v1 | 2;
		v5 = sub_140200220(0x4B8u);
		if (v5)
			v6 = *(_DWORD*)(v5 + 8);
		else
			v6 = 30;
		dword_140DC2250 = 60 * v6;
		v1 = dword_140DC2248;
	}
	if ((v1 & 4) != 0)
	{
		v8 = dword_140DC2254;
	}
	else
	{
		dword_140DC2248 = v1 | 4;
		v7 = sub_140200220(0x4B8u);
		if (v7)
		{
			v8 = 60 * *(_DWORD*)(v7 + 12);
			dword_140DC2254 = v8;
		}
		else
		{
			v8 = 900;
			dword_140DC2254 = 900;
		}
	}
	v9 = *(_DWORD*)(a1 + 32644);
	if (v9)
	{
		v10 = v9 - 1;
		if (v10)
		{
			if (v10 != 1)
				return 0i64;
		}
		else
		{
			v8 = dword_140DC2250;
		}
	}
	else
	{
		v8 = dword_140DC224C;
	}
	return v8 - (unsigned int)sub_1403B4F80(a1) % v8;
}
// 140DC2248: using guessed type int dword_140DC2248;
// 140DC224C: using guessed type int dword_140DC224C;
// 140DC2250: using guessed type int dword_140DC2250;
// 140DC2254: using guessed type int dword_140DC2254;

