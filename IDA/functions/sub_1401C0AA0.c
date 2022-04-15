//----- (00000001401C0AA0) ----------------------------------------------------
__int64 __fastcall sub_1401C0AA0(__int64 a1, __int64 a2, _QWORD* a3, __int64* a4)
{
	LONGLONG v8; // rbx
	__int64 v9; // rdx
	unsigned int v10; // edi
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-18h] BYREF

	if (!dword_140C796CC)
	{
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			sub_1401C4FB0(0);
		else
			dword_140C796CC = 1;
	}
	QueryPerformanceCounter(&PerformanceCount);
	v8 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	v10 = sub_1401C09D0(a1, v9, a2, a3, a4);
	QueryPerformanceCounter(&PerformanceCount);
	if (!dword_140C796CC)
	{
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			sub_1401C5100(L"H CAssetArchive_HTTP", 0, PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - v8, 1);
		else
			dword_140C796CC = 1;
	}
	return v10;
}
// 1401C0B1A: variable 'v9' is possibly undefined
// 140A47650: using guessed type wchar_t aHCassetarchive[21];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C796CC: using guessed type int dword_140C796CC;

