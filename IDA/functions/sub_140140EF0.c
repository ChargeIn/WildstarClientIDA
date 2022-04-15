//----- (0000000140140EF0) ----------------------------------------------------
float* __fastcall sub_140140EF0(__int64 a1, __int64 a2)
{
	float* result; // rax
	float v5; // xmm0_4
	char v6[40]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+50h] [rbp+8h] BYREF

	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 104i64))(a2, a1 + 688);
	v7 = a2;
	sub_14013FE10(a1 + 776, a2);
	sub_140033260((__int64*)(a1 + 808), &v7);
	sub_140140390(a1);
	result = (float*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)a2 + 16i64))(a2, v6);
	v5 = result[4] - *result;
	if (v5 > *(float*)(a1 + 832))
		*(float*)(a1 + 832) = v5;
	return result;
}
// 140140EF0: using guessed type char var_28[40];

