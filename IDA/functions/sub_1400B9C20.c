//----- (00000001400B9C20) ----------------------------------------------------
_WORD* __fastcall sub_1400B9C20(_QWORD* a1, __int64 a2)
{
	_WORD* result; // rax

	if (a1)
	{
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		sub_14001C1B0(a1, *(int**)(a2 + 8), *(_QWORD*)(a2 + 16));
		a1[5] = 0i64;
		a1[6] = 0i64;
		a1[7] = 0i64;
		return sub_14001C1B0(a1 + 4, *(int**)(a2 + 40), *(_QWORD*)(a2 + 48));
	}
	return result;
}

