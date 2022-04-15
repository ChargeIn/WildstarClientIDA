//----- (00000001403E0290) ----------------------------------------------------
__int64 __fastcall sub_1403E0290(int a1, int a2)
{
	int v2; // eax
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rcx
	__int64 v8; // rax
	float v9; // xmm1_4
	__int64 result; // rax

	v2 = dword_140DC2384;
	if ((dword_140DC2384 & 1) != 0)
	{
		v7 = qword_140DC2388;
	}
	else
	{
		dword_140DC2384 |= 1u;
		v5 = sub_140200220(0x46Au);
		if (v5)
			v6 = *(_DWORD*)(v5 + 4);
		else
			v6 = 500;
		v7 = v6;
		v2 = dword_140DC2384;
		qword_140DC2388 = v7;
	}
	if ((v2 & 2) != 0)
	{
		v9 = *(float*)&dword_140DC2390;
	}
	else
	{
		dword_140DC2384 = v2 | 2;
		v8 = sub_140200220(0x46Au);
		if (v8)
		{
			v9 = *(float*)(v8 + 24);
			v7 = qword_140DC2388;
			dword_140DC2390 = LODWORD(v9);
		}
		else
		{
			v9 = 0.02;
			v7 = qword_140DC2388;
			dword_140DC2390 = 1017370378;
		}
	}
	result = (unsigned int)(int)(float)((float)(a1 * a2) * v9);
	if (result < v7)
		return v7;
	return result;
}
// 140DC2384: using guessed type int dword_140DC2384;
// 140DC2388: using guessed type __int64 qword_140DC2388;
// 140DC2390: using guessed type int dword_140DC2390;

