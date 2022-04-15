//----- (0000000140333430) ----------------------------------------------------
int __fastcall sub_140333430(__int64 a1, unsigned int a2, char a3)
{
	LONGLONG v6; // rdi
	int result; // eax
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

	if (!dword_140C796CC)
	{
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			sub_1401C4FB0(0);
		else
			dword_140C796CC = 1;
	}
	QueryPerformanceCounter(&PerformanceCount);
	v6 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	if ((a3 & 2) != 0)
	{
		sub_140332DD0((_QWORD*)a1);
		sub_140332F60(a1);
	}
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 48) + 56i64))(*(_QWORD*)(a1 + 48), a2);
	if ((a3 & 1) != 0)
		sub_1403331C0((_QWORD*)a1);
	result = QueryPerformanceCounter(&PerformanceCount);
	if (!dword_140C796CC)
	{
		result = dword_140C636A8 - dword_140C785B0;
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			return sub_1401C5100(L"H Network_Poll", 0, PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - v6, 1);
		else
			dword_140C796CC = 1;
	}
	return result;
}
// 140AF1C28: using guessed type wchar_t aHNetworkPoll[15];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C796CC: using guessed type int dword_140C796CC;

