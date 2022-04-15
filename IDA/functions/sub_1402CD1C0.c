//----- (00000001402CD1C0) ----------------------------------------------------
__int64 __fastcall sub_1402CD1C0(__int64* a1)
{
	__int64 v1; // rax
	__int64 v3; // rdi
	__int64 v4; // rdx
	unsigned __int64 v5; // rcx
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v7[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v1 + 64))(a1, v7, 2i64);
	v3 = a1[3];
	v7[0] = -1;
	if (*(_DWORD*)(v3 + 24) != 3)
		sub_1402C9AE0(v3, (__int64)v7, 3);
	v4 = *(_QWORD*)(v3 + 64);
	v5 = a1[8];
	if (v5 < *(unsigned int*)(v4 + 112))
		return *(unsigned int*)(*(_QWORD*)(v4 + 120) + 40 * v5 + 24);
	else
		return 0i64;
}

