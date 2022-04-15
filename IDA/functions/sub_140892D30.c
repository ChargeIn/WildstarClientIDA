//----- (0000000140892D30) ----------------------------------------------------
__int64 __fastcall sub_140892D30(int a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	unsigned int v4; // eax
	int v5; // ecx
	bool v6; // al

	result = sub_1408819F0(dword_140C10F20, 328i64);
	if (result)
	{
		result = sub_1408928E0(result, a1);
		v3 = result;
		if (result)
		{
			v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 112i64))(result);
			v6 = 0;
			if (v4 <= 0xC)
			{
				v5 = 5121;
				if (_bittest(&v5, v4))
					v6 = 1;
			}
			*(_BYTE*)(v3 + 91) &= ~2u;
			*(_BYTE*)(v3 + 91) |= 2 * v6;
			sub_140851A00(v3);
			return v3;
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

