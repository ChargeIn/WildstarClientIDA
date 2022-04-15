//----- (00000001400B6B90) ----------------------------------------------------
__int64 __fastcall sub_1400B6B90(_DWORD* a1, unsigned int a2)
{
	__int64 result; // rax

	a1[5] = a2;
	result = sub_1401FF120(a2);
	if (result)
		return (*(__int64(__fastcall**)(_DWORD*, const wchar_t*, _QWORD))(*(_QWORD*)a1 + 136i64))(
			a1,
			L"faction",
			*(unsigned int*)(result + 12));
	return result;
}
// 140A13D18: using guessed type wchar_t aFaction[8];

