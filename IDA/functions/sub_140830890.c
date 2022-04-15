//----- (0000000140830890) ----------------------------------------------------
__int64 __fastcall sub_140830890(__int64 a1, __int64 a2, float a3)
{
	_QWORD* v3; // r8

	v3 = *(_QWORD**)(a1 + 8i64 * ((unsigned int)a2 % 0xC1) + 56);
	if (!v3)
		return 2i64;
	while (v3[1] != a2)
	{
		v3 = (_QWORD*)*v3;
		if (!v3)
			return 2i64;
	}
	if (v3 == (_QWORD*)-16i64)
		return 2i64;
	*(float*)(v3[2] + 96i64) = a3;
	return 1i64;
}

