//----- (000000014092BF90) ----------------------------------------------------
__int64 __fastcall sub_14092BF90(unsigned int* a1)
{
	_QWORD* v2; // rax

	v2 = sub_14092D610((__int64)a1, 7i64);
	if (!v2)
		return *a1;
	*(_BYTE*)v2 = 6;
	*((_QWORD*)a1 + 11) += 6i64;
	*(_DWORD*)((char*)v2 + 1) = 610569544;
	*(_WORD*)((char*)v2 + 5) = -25592;
	a1[27] = 1;
	return 0i64;
}

