//----- (000000014083E180) ----------------------------------------------------
__int64 __fastcall sub_14083E180(HANDLE* lpThreadParameter)
{
	dword_140C61F78 = GetCurrentThreadId();
	WaitForSingleObject(lpThreadParameter[8], 0xFFFFFFFF);
	while (!*((_BYTE*)lpThreadParameter + 72))
	{
		sub_14083E6E0((__int64)lpThreadParameter);
		WaitForSingleObject(lpThreadParameter[8], 0xFFFFFFFF);
	}
	return 0i64;
}
// 140C61F78: using guessed type int dword_140C61F78;

