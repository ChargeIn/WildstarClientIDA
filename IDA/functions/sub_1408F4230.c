//----- (00000001408F4230) ----------------------------------------------------
__int64 __fastcall sub_1408F4230(
	__int64 a1,
	float a2,
	float a3,
	float a4,
	float a5,
	__int64 a6,
	unsigned int a7,
	int a8)
{
	__int64 v8; // rdx
	__int64 v10; // rax
	__int64 v12; // rbx
	float v13; // xmm0_4

	v8 = a7;
	*(_DWORD*)(a1 + 40) = a8;
	if (!a7)
		v8 = 1i64;
	*(_DWORD*)a1 = v8;
	v10 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a6 + 8i64))(a6, 4 * v8);
	*(_QWORD*)(a1 + 8) = v10;
	if (!v10)
		return 52i64;
	v12 = 0i64;
	*(_DWORD*)(a1 + 16) = 0;
	for (*(_DWORD*)(a1 + 20) = *(_DWORD*)(a1 + 28); (unsigned int)v12 < *(_DWORD*)a1; v12 = (unsigned int)(v12 + 1))
	{
		v13 = sub_1408F4040(a1 + 20, a2, a3, a4, a5);
		if (v13 <= *(float*)(a1 + 40))
			v13 = *(float*)(a1 + 40);
		*(float*)(*(_QWORD*)(a1 + 8) + 4 * v12) = v13;
	}
	return 1i64;
}

