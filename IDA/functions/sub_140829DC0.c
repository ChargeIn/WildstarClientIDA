//----- (0000000140829DC0) ----------------------------------------------------
__int64 __fastcall sub_140829DC0(_QWORD* a1, int a2)
{
	_DWORD* v2; // rax
	_DWORD* v3; // r8
	unsigned int v6; // edi
	__int64 v8; // rbx

	v2 = (_DWORD*)*a1;
	v3 = (_DWORD*)a1[1];
	v6 = 1;
	if ((_DWORD*)*a1 != v3)
	{
		do
		{
			if (*v2 == a2)
				break;
			v2 += 4;
		} while (v2 != v3);
		if (v2 != v3 && v2 != (_DWORD*)-8i64)
			return 1i64;
	}
	v8 = sub_1408819F0(dword_140C10F20, 40i64);
	if (!v8)
		return 2i64;
	*(_QWORD*)v8 = 0i64;
	*(_QWORD*)(v8 + 8) = 0i64;
	*(_QWORD*)(v8 + 16) = 0i64;
	*(_QWORD*)(v8 + 24) = 0i64;
	*(_DWORD*)(v8 + 32) = 0;
	if (!sub_140846770(a1, a2, v8))
	{
		v6 = 2;
		sub_14082AE40(v8);
		sub_140881720(dword_140C10F20, v8);
	}
	return v6;
}
// 140C10F20: using guessed type int dword_140C10F20;

