//----- (0000000140830840) ----------------------------------------------------
__int64 __fastcall sub_140830840(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	_QWORD* v4; // rax

	v4 = *(_QWORD**)(a1 + 8i64 * ((unsigned int)a2 % 0xC1) + 56);
	if (!v4)
		return 2i64;
	while (v4[1] != a2)
	{
		v4 = (_QWORD*)*v4;
		if (!v4)
			return 2i64;
	}
	if (v4 == (_QWORD*)-16i64)
		return 2i64;
	else
		return sub_14084C250(v4[2], a3, a4);
}

