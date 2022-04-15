//----- (000000014013FE10) ----------------------------------------------------
__int64 __fastcall sub_14013FE10(__int64 a1, __int64 a2)
{
	float* v4; // rax
	__int64 result; // rax
	char v6[4]; // [rsp+20h] [rbp-68h] BYREF
	float v7; // [rsp+24h] [rbp-64h]
	float v8; // [rsp+34h] [rbp-54h]
	char v9[32]; // [rsp+40h] [rbp-48h] BYREF
	__int64 v10; // [rsp+98h] [rbp+10h] BYREF

	v10 = a2;
	sub_140033260((__int64*)(a1 + 8), &v10);
	(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)a2 + 16i64))(a2, v6);
	*(float*)(a1 + 28) = fmaxf(*(float*)(a1 + 28), v8 - v7);
	v4 = (float*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)a2 + 16i64))(a2, v9);
	*(float*)(a1 + 24) = (float)(v4[4] - *v4) + *(float*)(a1 + 24);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 112i64))(a2);
	*(_DWORD*)a1 = result;
	return result;
}
// 14013FE10: using guessed type char var_68[4];
// 14013FE10: using guessed type char var_48[32];

