//----- (000000014085BA40) ----------------------------------------------------
__int64 __fastcall sub_14085BA40(__int64* a1, __int64 a2)
{
	__int64* v4; // rcx
	__int64 result; // rax

	if (*(__int64**)(a2 + 72) == a1)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 56i64))(a2, 0i64);
		v4 = a1 + 17;
		if ((*(_BYTE*)(a2 + 91) & 2) == 0)
			v4 = a1 + 14;
		sub_140859270(v4, *(_DWORD*)(a2 + 24));
		return (*(__int64(__fastcall**)(__int64*))(*a1 + 16))(a1);
	}
	return result;
}

