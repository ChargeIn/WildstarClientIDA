//----- (0000000140420D30) ----------------------------------------------------
__int64 __fastcall sub_140420D30(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a3 += 8i64;
	result = sub_14020FD40(*(_DWORD*)(*a3 - 8i64));
	if (result)
	{
		if ((*(_BYTE*)(result + 12) & 8) == 0)
			return sub_1406B91F0(a2, result);
	}
	return result;
}

