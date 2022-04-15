//----- (000000014050CBF0) ----------------------------------------------------
__int64 __fastcall sub_14050CBF0(__int64 a1)
{
	float v2; // xmm6_4
	__int64 v3; // rax
	float v4; // xmm0_4
	__int64 v5; // rdx
	int v6; // ecx
	__int64 result; // rax

	v2 = 0.0;
	if ((dword_140DC3290 & 1) != 0)
	{
		v4 = *(float*)&dword_140DC3294;
	}
	else
	{
		dword_140DC3290 |= 1u;
		v3 = sub_140200220(0x155u);
		if (v3)
		{
			v4 = *(float*)(v3 + 24);
			dword_140DC3294 = LODWORD(v4);
		}
		else
		{
			v4 = 0.0;
			dword_140DC3294 = 0;
		}
	}
	if (v4 > 0.0)
		v2 = 1.0 / v4;
	v5 = *(_QWORD*)(a1 + 16);
	v6 = *(_DWORD*)(qword_140C65898 + 5768);
	*(_DWORD*)(v5 + 8) = 3;
	result = 1i64;
	*(double*)v5 = (double)(int)(float)((float)v6 * (float)(v2 + 1.0));
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3290: using guessed type int dword_140DC3290;
// 140DC3294: using guessed type int dword_140DC3294;

