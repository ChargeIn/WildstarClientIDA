//----- (0000000140197A50) ----------------------------------------------------
__int64 __fastcall sub_140197A50(_BYTE* a1, __int64 a2, unsigned __int16* a3, __int64 a4)
{
	unsigned int v4; // ebx
	int v6; // ecx
	unsigned __int64 v7; // rdi
	int v8; // eax
	__int64 result; // rax

	v4 = 0;
	v6 = 0;
	if ((unsigned __int64)(a2 - 1) > 0x7FFFFFFE)
		v6 = -2147024809;
	if (v6 < 0)
	{
		result = (unsigned int)v6;
		if (a2)
			*(_WORD*)a1 = 0;
	}
	else
	{
		v7 = a2 - 1;
		v8 = sub_1407DDA14(a1, a2 - 1, a3, a4);
		if (v8 < 0 || v8 > v7)
		{
			*(_WORD*)&a1[2 * v7] = 0;
			return (unsigned int)-2147024774;
		}
		else if (v8 == v7)
		{
			*(_WORD*)&a1[2 * v7] = 0;
			return 0i64;
		}
		return v4;
	}
	return result;
}

