//----- (00000001402CCC40) ----------------------------------------------------
__int64 __fastcall sub_1402CCC40(__int64* a1)
{
	__int64 v1; // rax
	__int64 v3; // rbx
	int v5[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v5[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v1 + 64))(a1, v5, 5i64);
	v3 = a1[3];
	v5[0] = -1;
	if (*(_DWORD*)(v3 + 24) != 3)
		sub_1402C9AE0(v3, (__int64)v5, 3);
	return *(_QWORD*)(v3 + 64) + 320i64;
}

