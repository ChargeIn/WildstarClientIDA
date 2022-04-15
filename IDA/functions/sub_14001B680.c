//----- (000000014001B680) ----------------------------------------------------
__int64 __fastcall sub_14001B680(_WORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned int v4; // r10d
	__int64 v5; // rax
	__int64 v6; // r9
	__int16 v7; // r8

	v4 = 0;
	if (a2)
	{
		v5 = 2147483646i64;
		v6 = a4 - (_QWORD)a1;
		while (v5)
		{
			v7 = *(_WORD*)((char*)a1 + v6);
			if (!v7)
				break;
			*a1++ = v7;
			--v5;
			if (!--a2)
			{
				*(a1 - 1) = 0;
				return 2147942522i64;
			}
		}
	}
	else
	{
		--a1;
		v4 = -2147024774;
	}
	*a1 = 0;
	return v4;
}
// 14001B6C8: conditional instruction was optimized away because rdx.8!=0

