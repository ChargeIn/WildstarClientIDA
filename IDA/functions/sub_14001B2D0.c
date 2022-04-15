//----- (000000014001B2D0) ----------------------------------------------------
__int64 __fastcall sub_14001B2D0(_WORD* a1, __int64 a2, __int64 a3)
{
	int v3; // r9d
	__int64 result; // rax

	v3 = 0;
	if ((unsigned __int64)(a2 - 1) > 0x7FFFFFFE)
		v3 = -2147024809;
	if (v3 >= 0)
		return sub_14001B680(a1, a2, a3, a3);
	result = (unsigned int)v3;
	if (a2)
		*a1 = 0;
	return result;
}

