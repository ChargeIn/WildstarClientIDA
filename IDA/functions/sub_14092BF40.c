//----- (000000014092BF40) ----------------------------------------------------
__int64 __fastcall sub_14092BF40(unsigned int* a1, unsigned int a2)
{
	_QWORD* v4; // rax

	v4 = sub_14092D610((__int64)a1, 7i64);
	if (!v4)
		return *a1;
	*(_BYTE*)v4 = 6;
	*((_QWORD*)a1 + 11) += 6i64;
	*(_DWORD*)((char*)v4 + 1) = 1686980765;
	*(_WORD*)((char*)v4 + 5) = -2012;
	a1[27] = a2;
	return 0i64;
}

