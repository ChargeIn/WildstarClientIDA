//----- (0000000140664F30) ----------------------------------------------------
__int64 __fastcall sub_140664F30(_QWORD* a1)
{
	__int64* v2; // rax
	__int64 result; // rax
	int v4; // eax
	__int64 v5; // r11
	int v6; // r10d

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = sub_14054F4F0(*v2);
		*(_DWORD*)(v5 + 8) = 3;
		v6 = v4;
		result = 1i64;
		*(double*)v5 = (double)v6 * 0.001;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140664F72: variable 'v5' is possibly undefined

