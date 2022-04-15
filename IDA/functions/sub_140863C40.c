//----- (0000000140863C40) ----------------------------------------------------
__int64 __fastcall sub_140863C40(_DWORD* a1)
{
	double v2; // xmm0_8
	__int64 result; // rax

	if (a1[264] != 1)
	{
		v2 = sub_14085CF60(&qword_140C62458, 0);
		sub_140833A10((__int64)a1, *(float*)&v2);
		a1[196] = a1[195];
		result = (unsigned int)a1[197];
		a1[198] = result;
	}
	return result;
}
// 140C62458: using guessed type __int64 qword_140C62458;

