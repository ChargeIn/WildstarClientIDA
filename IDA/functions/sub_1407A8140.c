//----- (00000001407A8140) ----------------------------------------------------
__int64 __fastcall sub_1407A8140(_DWORD* a1)
{
	bool v1; // zf
	__int64 result; // rax

	v1 = a1[2]-- == 1;
	result = (unsigned int)a1[2];
	if (v1)
	{
		(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)a1 + 456i64))(a1, 1i64);
		return 0i64;
	}
	return result;
}

