//----- (00000001401B3170) ----------------------------------------------------
__int64 __fastcall sub_1401B3170(__int64 a1, float* a2)
{
	float v2; // xmm9_4
	__int64 result; // rax
	double v5; // xmm0_8

	v2 = a2[1];
	if (v2 <= 0.99998999)
	{
		if (v2 >= -0.99998999)
		{
			*(float*)a1 = sub_1408FD190(-*a2, -a2[2]);
			v5 = sub_1408FCF3C(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(fmaxf(-1.0, fminf(v2, 1.0)))));
			*(_DWORD*)(a1 + 8) = 0;
			result = a1;
			*(_DWORD*)(a1 + 4) = LODWORD(v5);
		}
		else
		{
			*(_DWORD*)(a1 + 4) = -1077342245;
			*(_DWORD*)a1 = 0;
			*(_DWORD*)(a1 + 8) = 0;
			return a1;
		}
	}
	else
	{
		*(_QWORD*)(a1 + 4) = 1070141403i64;
		*(_DWORD*)a1 = 0;
		return a1;
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

