//----- (00000001402FA9E0) ----------------------------------------------------
float __fastcall sub_1402FA9E0(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v5; // r8
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v7[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 1400))(a1, v7);
	v5 = a1[8];
	if ((unsigned int)v3 >= *(_DWORD*)(v5 + 464)
		|| (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v5 + 472) + 2 * v3) >= *(_DWORD*)(v5 + 448))
	{
		return *(float*)&dword_140C41F68;
	}
	else
	{
		return *(float*)(32i64 * *(unsigned __int16*)(*(_QWORD*)(v5 + 472) + 2 * v3) + *(_QWORD*)(v5 + 456) + 8);
	}
}
// 140C41F68: using guessed type int dword_140C41F68;
// 1402FA9E0: using guessed type int var_18[6];

