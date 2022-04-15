//----- (00000001407C12C0) ----------------------------------------------------
__int64 __fastcall sub_1407C12C0(__int64* a1, unsigned __int64 a2, _DWORD* a3)
{
	__int64 v3; // rax
	__int64 v7; // rcx
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v9[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 64))(a1, v9);
	v7 = a1[5];
	if (!v7 || a2 >= *(unsigned int*)(v7 + 72))
		return 0i64;
	if (a3)
		*a3 = *(_DWORD*)(*(_QWORD*)(v7 + 80) + 4 * a2);
	return 1i64;
}
// 1407C12C0: using guessed type int var_18[6];

