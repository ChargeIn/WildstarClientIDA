//----- (0000000140857F40) ----------------------------------------------------
_QWORD* __fastcall sub_140857F40(int a1)
{
	_QWORD* result; // rax
	_BYTE* v3; // rbx
	unsigned int v4; // eax
	int v5; // ecx
	bool v6; // al

	result = (_QWORD*)sub_1408819F0(dword_140C10F20, 208i64);
	v3 = result;
	if (result)
	{
		sub_14086FC30(result, a1);
		*(_QWORD*)v3 = off_1409A3A60;
		sub_1408562A0((__int64)(v3 + 168));
		v4 = (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)v3 + 112i64))(v3);
		v6 = 0;
		if (v4 <= 0xC)
		{
			v5 = 5121;
			if (_bittest(&v5, v4))
				v6 = 1;
		}
		v3[91] &= ~2u;
		v3[91] |= 2 * v6;
		sub_140851A00((__int64)v3);
		return v3;
	}
	return result;
}
// 1409A3A60: using guessed type __int64 (__fastcall *off_1409A3A60[4])();
// 140C10F20: using guessed type int dword_140C10F20;

