//----- (00000001403CDBF0) ----------------------------------------------------
__int64 __fastcall sub_1403CDBF0(__int64 a1)
{
	int v1; // eax
	__int64 v3; // rax
	int v4; // eax
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rax
	float v8; // xmm1_4
	__int64 v9; // rcx
	__int64 result; // rax
	unsigned int v11; // edx

	v1 = dword_140DC2328;
	if ((dword_140DC2328 & 1) == 0)
	{
		dword_140DC2328 |= 1u;
		v3 = sub_140200220(0x3AEu);
		if (v3)
			v4 = *(_DWORD*)(v3 + 4);
		else
			v4 = 10;
		dword_140DC232C = v4;
		v1 = dword_140DC2328;
	}
	if ((v1 & 2) == 0)
	{
		dword_140DC2328 = v1 | 2;
		v5 = sub_140200220(0x3AEu);
		if (v5)
			v6 = *(_DWORD*)(v5 + 8);
		else
			v6 = 4;
		dword_140DC2330 = v6;
		v1 = dword_140DC2328;
	}
	if ((v1 & 4) != 0)
	{
		v8 = *(float*)&dword_140DC2334;
	}
	else
	{
		dword_140DC2328 = v1 | 4;
		v7 = sub_140200220(0x3AEu);
		if (v7)
		{
			v8 = *(float*)(v7 + 24);
			dword_140DC2334 = LODWORD(v8);
		}
		else
		{
			v8 = 1.0;
			dword_140DC2334 = 1065353216;
		}
	}
	v9 = *(_QWORD*)(a1 + 120);
	result = 0i64;
	if (v9)
		v11 = *(_DWORD*)(v9 + 56);
	else
		v11 = 0;
	if (v11 >= dword_140DC232C)
	{
		if (v9)
			LODWORD(result) = *(_DWORD*)(v9 + 56);
		result = (unsigned int)(dword_140DC2330
			+ *(_DWORD*)(a1 + 28260)
			+ *(_DWORD*)(a1 + 28264)
			+ (int)(float)((float)(result - dword_140DC232C) * v8));
	}
	*(_DWORD*)(a1 + 28256) = result;
	return result;
}
// 140DC2328: using guessed type int dword_140DC2328;
// 140DC232C: using guessed type int dword_140DC232C;
// 140DC2330: using guessed type int dword_140DC2330;
// 140DC2334: using guessed type int dword_140DC2334;

