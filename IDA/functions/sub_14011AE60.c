//----- (000000014011AE60) ----------------------------------------------------
__int64 sub_14011AE60()
{
	HWND v0; // rcx
	struct $C811A85A3CBAF233E045382DA27E29BF pfwi; // [rsp+20h] [rbp-28h] BYREF

	pfwi.cbSize = 32;
	v0 = *(HWND*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 16i64))(qword_140C65670) + 24);
	*(_QWORD*)&pfwi.dwFlags = 14i64;
	pfwi.hwnd = v0;
	pfwi.dwTimeout = 0;
	FlashWindowEx(&pfwi);
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

