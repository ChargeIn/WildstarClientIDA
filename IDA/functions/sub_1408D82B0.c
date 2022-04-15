//----- (00000001408D82B0) ----------------------------------------------------
__int64 __fastcall sub_1408D82B0(__int64 a1, double a2)
{
	unsigned int i; // esi
	__int64 v4; // rbx
	__int64 result; // rax

	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
	{
		v4 = 100i64 * i;
		sub_1408D8CA0(a1, a2 * 0.01, v4 + *(_QWORD*)(a1 + 8) + 48i64, 11);
		result = sub_1408D8CA0(a1, 1.0 - a2 * 0.01, v4 + *(_QWORD*)(a1 + 8) + 48i64, 12);
	}
	return result;
}

