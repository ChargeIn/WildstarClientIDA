//----- (00000001408745C0) ----------------------------------------------------
__int64 __fastcall sub_1408745C0(_BYTE* a1)
{
	unsigned int v2; // eax
	int v3; // ecx
	bool v4; // al

	v2 = (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 112i64))(a1);
	v4 = 0;
	if (v2 <= 0xC)
	{
		v3 = 5121;
		if (_bittest(&v3, v2))
			v4 = 1;
	}
	a1[91] &= ~2u;
	a1[91] |= 2 * v4;
	sub_140851A00((__int64)a1);
	return 1i64;
}

