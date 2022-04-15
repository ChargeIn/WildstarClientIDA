//----- (00000001407C1250) ----------------------------------------------------
__int64 __fastcall sub_1407C1250(__int64* a1, unsigned int a2, _DWORD* a3)
{
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v7; // rax
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v4 = a2;
	v9[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 64))(a1, v9);
	v7 = a1[5];
	if (!v7 || (unsigned int)v4 >= *(_DWORD*)(v7 + 72))
		return 0i64;
	if (a3)
		*a3 = *(_DWORD*)(*(_QWORD*)(v7 + 80) + 4 * v4);
	return 1i64;
}
// 1407C1250: using guessed type int var_18[6];

