//----- (0000000140394920) ----------------------------------------------------
__int64 __fastcall sub_140394920(__int64* a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v5; // rax
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v7[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 40))(a1, v7);
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 1168i64))(a1[2]);
	*(_OWORD*)a2 = *(_OWORD*)(v5 + 32);
	*(_DWORD*)(a2 + 16) = *(_DWORD*)(v5 + 48);
	return a2;
}
// 140394920: using guessed type int var_18[6];

