//----- (00000001401C9110) ----------------------------------------------------
signed int __fastcall sub_1401C9110(__int64 a1, const WCHAR* a2, const BYTE* lpData)
{
	HKEY v3; // rcx
	signed int result; // eax
	__int64 v5; // rax

	if (!a2 || !lpData)
		return -2147024809;
	v3 = *(HKEY*)(a1 + 16);
	if (!v3)
		return -2147024890;
	v5 = 0i64;
	if (*(_WORD*)lpData)
	{
		do
			++v5;
		while (*(_WORD*)&lpData[2 * v5]);
	}
	result = RegSetValueExW(v3, a2, 0, 1u, lpData, 2 * v5);
	if (!result)
		return 0;
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}

