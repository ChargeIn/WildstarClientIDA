//----- (00000001402CDB20) ----------------------------------------------------
_BOOL8 __fastcall sub_1402CDB20(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v5; // rax
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v7[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v2 + 64))(a1, v7, 5i64);
	v5 = (*(__int64(__fastcall**)(__int64*))(*a1 + 24))(a1);
	return *(_DWORD*)(v5 + 176) > (unsigned int)v3 && *(_WORD*)(*(_QWORD*)(v5 + 184) + 2 * v3) != 0xFFFF;
}
// 1402CDB20: using guessed type int var_18[6];

