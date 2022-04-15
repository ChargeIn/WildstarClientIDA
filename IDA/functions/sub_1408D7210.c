//----- (00000001408D7210) ----------------------------------------------------
__int64 __fastcall sub_1408D7210(__int64 a1, double a2)
{
	unsigned int i; // esi
	__int64 v4; // rbx
	__int64 result; // rax

	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
	{
		v4 = 360i64 * i;
		sub_1408D8CA0(a1, a2 * 0.01, v4 + *(_QWORD*)(a1 + 8) + 172i64, 45);
		result = sub_1408D8CA0(a1, 1.0 - a2 * 0.01, v4 + *(_QWORD*)(a1 + 8) + 172i64, 46);
	}
	return result;
}

