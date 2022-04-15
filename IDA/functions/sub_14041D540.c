#include "../winhttp.h"

//----- (000000014041D540) ----------------------------------------------------
float __fastcall sub_14041D540(__int64 a1, float a2)
{
	int v2; // eax
	__int64 v3; // rax
	float v4; // xmm6_4
	__int64 v5; // rax
	float v6; // xmm0_4
	__int64* v7; // rax
	__int64 v9; // [rsp+60h] [rbp+8h] BYREF
	float v10; // [rsp+68h] [rbp+10h] BYREF

	v9 = a1;
	v2 = dword_140C8AB60;
	if ((dword_140C8AB60 & 1) == 0)
	{
		v2 = dword_140C8AB60 | 1;
		dword_140C8AB6C = 0;
		dword_140C8AB60 |= 1u;
	}
	if ((v2 & 2) == 0)
	{
		dword_140C8AB60 = v2 | 2;
		goto LABEL_6;
	}
	if (!dword_140C8AB04)
	{
	LABEL_6:
		dword_140C8AB04 = 1;
		v3 = sub_140200220(0x4ECu);
		if (v3)
		{
			v4 = *(float*)(v3 + 36);
			dword_140C8AB00 = LODWORD(v4);
		}
		else
		{
			v4 = 0.0;
			dword_140C8AB00 = 0;
		}
		goto LABEL_10;
	}
	v4 = *(float*)&dword_140C8AB00;
LABEL_10:
	if (dword_140C8AB6C)
	{
		v6 = *(float*)&dword_140C8AB68;
	}
	else
	{
		dword_140C8AB6C = 1;
		v5 = sub_140200220(0x4ECu);
		if (v5)
		{
			v6 = *(float*)(v5 + 32);
			dword_140C8AB68 = LODWORD(v6);
		}
		else
		{
			v6 = 0.0;
			dword_140C8AB68 = 0;
		}
	}
	v7 = (__int64*)&v10;
	LODWORD(v9) = 0;
	v10 = (float)((float)(v4 - v6) * a2) + v6;
	if (v10 <= 0.0)
		v7 = &v9;
	return *(float*)v7;
}
// 140C8AB00: using guessed type int dword_140C8AB00;
// 140C8AB04: using guessed type int dword_140C8AB04;
// 140C8AB60: using guessed type int dword_140C8AB60;
// 140C8AB68: using guessed type int dword_140C8AB68;
// 140C8AB6C: using guessed type int dword_140C8AB6C;

