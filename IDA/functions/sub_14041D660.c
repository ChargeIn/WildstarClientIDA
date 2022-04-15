#include "../winhttp.h"

//----- (000000014041D660) ----------------------------------------------------
float __fastcall sub_14041D660(__int64 a1, float a2)
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
	v2 = dword_140C8AB08;
	if ((dword_140C8AB08 & 1) == 0)
	{
		v2 = dword_140C8AB08 | 1;
		dword_140C8AAF4 = 0;
		dword_140C8AB08 |= 1u;
	}
	if ((v2 & 2) == 0)
	{
		dword_140C8AB08 = v2 | 2;
		goto LABEL_6;
	}
	if (!dword_140C8AAFC)
	{
	LABEL_6:
		dword_140C8AAFC = 1;
		v3 = sub_140200220(0x4EDu);
		if (v3)
		{
			v4 = *(float*)(v3 + 28);
			dword_140C8AAF8 = LODWORD(v4);
		}
		else
		{
			v4 = 0.0;
			dword_140C8AAF8 = 0;
		}
		goto LABEL_10;
	}
	v4 = *(float*)&dword_140C8AAF8;
LABEL_10:
	if (dword_140C8AAF4)
	{
		v6 = *(float*)&dword_140C8AAF0;
	}
	else
	{
		dword_140C8AAF4 = 1;
		v5 = sub_140200220(0x4EDu);
		if (v5)
		{
			v6 = *(float*)(v5 + 24);
			dword_140C8AAF0 = LODWORD(v6);
		}
		else
		{
			v6 = 0.0;
			dword_140C8AAF0 = 0;
		}
	}
	v7 = (__int64*)&v10;
	LODWORD(v9) = 0;
	v10 = (float)((float)(v4 - v6) * a2) + v6;
	if (v10 <= 0.0)
		v7 = &v9;
	return *(float*)v7;
}
// 140C8AAF0: using guessed type int dword_140C8AAF0;
// 140C8AAF4: using guessed type int dword_140C8AAF4;
// 140C8AAF8: using guessed type int dword_140C8AAF8;
// 140C8AAFC: using guessed type int dword_140C8AAFC;
// 140C8AB08: using guessed type int dword_140C8AB08;

