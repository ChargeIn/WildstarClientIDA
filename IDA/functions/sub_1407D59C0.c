//----- (00000001407D59C0) ----------------------------------------------------
double __fastcall sub_1407D59C0(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	double result; // xmm0_8

	v2 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 24) + 280i64))(
		*(_QWORD*)(a1 + 24),
		*(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 800i64) + 4i64 * *(int*)(a1 + 312)));
	v3 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 24) + 280i64))(
		*(_QWORD*)(a1 + 24),
		*(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 800i64) + 4i64 * *(int*)(a1 + 316)));
	if (!v2 || !v3)
		return 0.0;
	*(_QWORD*)&result = *(unsigned int*)(v3 + 4);
	*(float*)&result = (float)((float)(*(float*)&result - *(float*)(v2 + 4)) * *(float*)(a1 + 320))
		+ *(float*)(v2 + 4);
	return result;
}

