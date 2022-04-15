//----- (00000001400B9D00) ----------------------------------------------------
_BOOL8 __fastcall sub_1400B9D00(__int64* a1)
{
	__int64 v1; // rcx
	_BOOL8 result; // rax

	result = 1;
	if (*((_DWORD*)a1 + 3))
	{
		v1 = *a1;
		if (!v1 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v1 + 24i64))(v1))
			return 0;
	}
	return result;
}

