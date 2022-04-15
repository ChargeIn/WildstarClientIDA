//----- (00000001408AF3B0) ----------------------------------------------------
__int64 __fastcall sub_1408AF3B0(__int64 a1)
{
	int* v2; // rcx
	__int64 result; // rax

	v2 = *(int**)(a1 + 16);
	if (v2)
		sub_1407E4830(v2, 0i64, (unsigned int)(4 * *(_DWORD*)a1));
	result = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 4) = 0;
	return result;
}

