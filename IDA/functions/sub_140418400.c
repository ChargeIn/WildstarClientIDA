//----- (0000000140418400) ----------------------------------------------------
__int64 __fastcall sub_140418400(_QWORD* a1)
{
	int* v2; // rax
	float v3; // xmm1_4
	__int64 v4; // rdx
	__int64 result; // rax
	__int64 v6; // rax

	v2 = sub_140417C90(a1, 1u);
	if (v2 && (v3 = *((float*)v2 + 5), v3 > 0.0))
	{
		v4 = a1[2];
		result = 1i64;
		*(_DWORD*)(v4 + 8) = 3;
		*(double*)v4 = (double)(int)(float)(v3 * 10.0);
		a1[2] += 16i64;
	}
	else
	{
		v6 = a1[2];
		*(_QWORD*)v6 = 0i64;
		*(_DWORD*)(v6 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

