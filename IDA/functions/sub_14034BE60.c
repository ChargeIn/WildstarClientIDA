//----- (000000014034BE60) ----------------------------------------------------
_QWORD* __fastcall sub_14034BE60(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
	_BYTE* v8; // rbx
	int v9; // eax
	unsigned __int64 v10; // r15
	_BYTE* v11; // rax

	if (qword_140C7AAC8)
	{
		v8 = 0i64;
		v9 = sub_1407DFFF8(a3, qword_140C7AAC8, a4);
		v10 = v9;
		if (v9 != -1)
		{
			v11 = (_BYTE*)sub_14018D140(0i64, v9);
			*(_WORD*)&v11[2 * v10] = 0;
			v8 = v11;
			sub_1407E0030(v11, (int)v10 + 1, v10, a3, qword_140C7AAC8, a4);
		}
		*a2 = v8;
		return a2;
	}
	else
	{
		sub_14018D5E0(a2, a3, a4);
		return a2;
	}
}
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;

