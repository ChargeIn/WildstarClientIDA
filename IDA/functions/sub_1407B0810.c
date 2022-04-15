//----- (00000001407B0810) ----------------------------------------------------
__int64 __fastcall sub_1407B0810(__int64* a1, unsigned __int64 a2, int a3)
{
	unsigned __int64 v3; // rbx
	char v4; // r14
	unsigned __int64 v5; // rbp
	unsigned __int64 v8; // rsi
	__int64 result; // rax
	char v10; // dl

	v3 = a1[1];
	v4 = a2;
	v5 = a2 >> 3;
	if (a2 >> 3 >= v3)
	{
		v8 = v5 + 1;
		if (v5 + 1 > v3)
		{
			sub_140033620((__int64)a1, v5 + 1);
			for (; v3 < v8; *(_BYTE*)(v3 + *a1 - 1) = 0)
				++v3;
		}
	}
	result = *a1;
	v10 = 1 << (v4 & 7);
	if (a3)
		*(_BYTE*)(result + v5) |= v10;
	else
		*(_BYTE*)(result + v5) &= ~v10;
	return result;
}

