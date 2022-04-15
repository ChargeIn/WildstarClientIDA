//----- (000000014041D420) ----------------------------------------------------
float __fastcall sub_14041D420(__int64 a1, float a2)
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
	v2 = dword_140C8AB50;
	if ((dword_140C8AB50 & 1) == 0)
	{
		v2 = dword_140C8AB50 | 1;
		dword_140C8AB74 = 0;
		dword_140C8AB50 |= 1u;
	}
	if ((v2 & 2) == 0)
	{
		dword_140C8AB50 = v2 | 2;
		goto LABEL_6;
	}
	if (!dword_140C8AB7C)
	{
	LABEL_6:
		dword_140C8AB7C = 1;
		v3 = sub_140200220(0x4ECu);
		if (v3)
		{
			v4 = *(float*)(v3 + 28);
			dword_140C8AB78 = LODWORD(v4);
		}
		else
		{
			v4 = 0.0;
			dword_140C8AB78 = 0;
		}
		goto LABEL_10;
	}
	v4 = *(float*)&dword_140C8AB78;
LABEL_10:
	if (dword_140C8AB74)
	{
		v6 = *(float*)&dword_140C8AB70;
	}
	else
	{
		dword_140C8AB74 = 1;
		v5 = sub_140200220(0x4ECu);
		if (v5)
		{
			v6 = *(float*)(v5 + 24);
			dword_140C8AB70 = LODWORD(v6);
		}
		else
		{
			v6 = 0.0;
			dword_140C8AB70 = 0;
		}
	}
	v7 = (__int64*)&v10;
	LODWORD(v9) = 0;
	v10 = (float)((float)(v4 - v6) * a2) + v6;
	if (v10 <= 0.0)
		v7 = &v9;
	return *(float*)v7;
}
// 140C8AB50: using guessed type int dword_140C8AB50;
// 140C8AB70: using guessed type int dword_140C8AB70;
// 140C8AB74: using guessed type int dword_140C8AB74;
// 140C8AB78: using guessed type int dword_140C8AB78;
// 140C8AB7C: using guessed type int dword_140C8AB7C;

