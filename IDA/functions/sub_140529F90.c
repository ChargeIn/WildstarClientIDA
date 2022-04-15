//----- (0000000140529F90) ----------------------------------------------------
__int64 __fastcall sub_140529F90(__int64 a1)
{
	__int64 result; // rax
	bool v3; // zf

	result = sub_140529FF0(a1);
	v3 = (_DWORD)result == *(_DWORD*)(a1 + 1332);
	*(_DWORD*)(a1 + 1332) = result;
	if (!v3)
		return sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"ZoneMapPlayerIndicatorUpdated",
			L"b",
			(unsigned int)result);
	return result;
}
// 1409EF904: using guessed type wchar_t aB_24[2];
// 140C65898: using guessed type __int64 qword_140C65898;

