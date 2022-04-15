//----- (000000014076D340) ----------------------------------------------------
__int64 __fastcall sub_14076D340(_QWORD* a1, _QWORD* a2)
{
	_DWORD* v2; // r8
	_DWORD* v3; // r9
	__int64 result; // rax
	unsigned int v5; // edx

	v2 = (_DWORD*)*a1;
	v3 = (_DWORD*)*a2;
	result = (unsigned int)(*(_DWORD*)*a1 - *(_DWORD*)*a2);
	if (!(_DWORD)result)
	{
		v5 = (v2[1] != 0) - (v3[1] != 0);
		if (v5)
			return v5;
		v5 = (*((_QWORD*)v2 + 2) != 0i64) - (*((_QWORD*)v3 + 2) != 0i64);
		if (v5)
		{
			return v5;
		}
		else
		{
			LOBYTE(result) = *((_QWORD*)v2 + 3) != 0i64;
			return (unsigned int)result - (*((_QWORD*)v3 + 3) != 0i64);
		}
	}
	return result;
}

