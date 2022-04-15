//----- (00000001408258C0) ----------------------------------------------------
__int64 __fastcall sub_1408258C0(_WORD* a1, __int64 a2, _QWORD* a3, _WORD* a4, __int64 a5)
{
	__int64 v6; // [rsp+0h] [rbp-18h]
	unsigned int v7; // [rsp+8h] [rbp-10h]

	v7 = 0;
	v6 = 0i64;
	while (a2 && a5 && *a4)
	{
		*a1++ = *a4++;
		--a2;
		--a5;
		++v6;
	}
	if (!a2)
	{
		--a1;
		--v6;
		v7 = -2147024774;
	}
	*a1 = 0;
	if (a3)
		*a3 = v6;
	return v7;
}

