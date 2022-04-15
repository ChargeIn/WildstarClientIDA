//----- (00000001402FA0E0) ----------------------------------------------------
__int64 __fastcall sub_1402FA0E0(__int64* a1)
{
	__int64 v1; // rax
	__int64 result; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, _QWORD))(v1 + 16))(a1, v4, 0i64);
	result = a1[142];
	if (result)
		return *(unsigned int*)(result + 88);
	return result;
}
// 1402FA0E0: using guessed type int var_18[6];

