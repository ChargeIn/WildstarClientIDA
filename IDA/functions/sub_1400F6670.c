//----- (00000001400F6670) ----------------------------------------------------
__int64 __fastcall sub_1400F6670(__int64 a1)
{
	__int64 v1; // rdi
	unsigned __int64 i; // rbx
	__int64 v4; // rax
	_WORD* v5; // rax

	v1 = 0i64;
	for (i = 0i64; i < 0x25; ++i)
	{
		v4 = sub_1401A6B80(a1, off_140C3CD20[i]);
		if (v4)
		{
			v5 = (_WORD*)sub_1401A4F40(v4 + 32);
			if (v5)
			{
				if (*v5 == 48)
					v1 |= 1i64 << i;
			}
		}
	}
	return v1;
}
// 140C3CD20: using guessed type wchar_t *off_140C3CD20[37];

