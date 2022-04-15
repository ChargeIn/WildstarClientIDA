//----- (00000001408308E0) ----------------------------------------------------
__int64 __fastcall sub_1408308E0(__int64 a1, __int64 a2, float a3)
{
	_QWORD* v3; // r8
	__int64 v5; // rax

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
	v5 = v3[2];
	*(_DWORD*)(v5 + 136) |= 0x40000000u;
	*(float*)(v5 + 100) = a3;
	return 1i64;
}

