//----- (00000001402F90A0) ----------------------------------------------------
__int64 __fastcall sub_1402F90A0(__int64* a1, unsigned int a2)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rbx
	unsigned __int64 v5; // rcx
	__int64 v6; // rax
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v8[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, _QWORD))(v2 + 16))(a1, v8, 0i64);
	if (v3 < a1[112]
		&& (v5 = *(_QWORD*)(a1[111] + 8 * v3), v5 < a1[110])
		&& (v6 = *(_QWORD*)(*(_QWORD*)(a1[109] + 8 * v5) + 8i64)) != 0)
	{
		return *(unsigned int*)(v6 + 44);
	}
	else
	{
		return 1i64;
	}
}
// 1402F90A0: using guessed type int var_18[6];

