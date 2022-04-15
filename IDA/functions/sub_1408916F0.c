//----- (00000001408916F0) ----------------------------------------------------
__int64 __fastcall sub_1408916F0(int a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	unsigned int v4; // eax
	int v5; // ecx
	bool v6; // al

	result = sub_1408819F0(dword_140C10F20, 256i64);
	v3 = result;
	if (result)
	{
		sub_1408909C0(result, a1);
		*(_QWORD*)v3 = off_1409A87B0;
		*(_QWORD*)(v3 + 224) = 0i64;
		*(_QWORD*)(v3 + 232) = 0i64;
		*(_DWORD*)(v3 + 240) = 0;
		*(_DWORD*)(v3 + 248) = 0;
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 112i64))(v3);
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
	return result;
}
// 1409A87B0: using guessed type __int64 (__fastcall *off_1409A87B0[4])();
// 140C10F20: using guessed type int dword_140C10F20;

