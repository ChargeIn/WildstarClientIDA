//----- (00000001407E1500) ----------------------------------------------------
LPVOID __fastcall sub_1407E1500(SIZE_T dwBytes)
{
	SIZE_T v2; // rdi
	__int64 v3; // rdx
	__int64 v4; // rcx
	LPVOID v5; // rsi
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // r8
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // r8

	if (dwBytes > 0xFFFFFFFFFFFFFFE0ui64)
	{
		sub_1407E2E34(dwBytes);
		*(_DWORD*)sub_1407DE1B0(v12, v11, v13) = 12;
		return 0i64;
	}
	else
	{
		v2 = 1i64;
		if (dwBytes)
			v2 = dwBytes;
		while (1)
		{
			if (!hHeap)
			{
				sub_1407E1CF4();
				sub_1407E1D68(30);
				sub_1407DBBB8(0xFFu);
			}
			v5 = HeapAlloc(hHeap, 0, v2);
			if (v5)
				return v5;
			if (!dword_140C6082C)
			{
				*(_DWORD*)sub_1407DE1B0(v4, v3, v6) = 12;
			LABEL_11:
				*(_DWORD*)sub_1407DE1B0(v8, v7, v9) = 12;
				return v5;
			}
			if (!sub_1407E2E34(dwBytes))
				goto LABEL_11;
		}
	}
}
// 1407E1579: variable 'v4' is possibly undefined
// 1407E1579: variable 'v3' is possibly undefined
// 1407E1579: variable 'v6' is possibly undefined
// 1407E1584: variable 'v8' is possibly undefined
// 1407E1584: variable 'v7' is possibly undefined
// 1407E1584: variable 'v9' is possibly undefined
// 1407E1599: variable 'v12' is possibly undefined
// 1407E1599: variable 'v11' is possibly undefined
// 1407E1599: variable 'v13' is possibly undefined
// 1407DE1B0: using guessed type __int64 __fastcall sub_1407DE1B0(_QWORD, _QWORD, _QWORD);
// 140C6082C: using guessed type int dword_140C6082C;

