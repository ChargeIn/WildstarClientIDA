//----- (00000001402F5EC0) ----------------------------------------------------
__int64 __fastcall sub_1402F5EC0(__int64* a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 result; // rax
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v6[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, _QWORD))(v2 + 24))(a1, v6, 0i64);
	if (a1[142] && (int)sub_140300DD0((__int64)a1, 8u) >= 0)
	{
		*(_QWORD*)a2 = a1[8];
		*(_DWORD*)(a2 + 8) = *(_DWORD*)(a1[142] + 48);
		*(_QWORD*)(a2 + 16) = *(_QWORD*)(a1[142] + 64);
		*(_QWORD*)(a2 + 24) = *(_QWORD*)(a1[7] + 160);
		*(_QWORD*)(a2 + 32) = a1[143];
		*(_QWORD*)(a2 + 40) = a1[103];
		return 0i64;
	}
	else
	{
		*(_QWORD*)a2 = a1[8];
		result = 0i64;
		*(_DWORD*)(a2 + 8) = 0;
		*(_QWORD*)(a2 + 16) = 0i64;
		*(_QWORD*)(a2 + 24) = 0i64;
		*(_QWORD*)(a2 + 32) = 0i64;
		*(_QWORD*)(a2 + 40) = 0i64;
	}
	return result;
}
// 1402F5EC0: using guessed type int var_18[6];

