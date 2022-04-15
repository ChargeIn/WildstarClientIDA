//----- (0000000140861310) ----------------------------------------------------
__int64 __fastcall sub_140861310(_BYTE* a1)
{
	__int64 result; // rax

	if ((a1[32] & 1) != 0)
		return 1i64;
	result = (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 64i64))(a1);
	if ((_DWORD)result == 1)
		a1[32] |= 1u;
	return result;
}

