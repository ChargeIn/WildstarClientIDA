//----- (00000001408600D0) ----------------------------------------------------
__int64 __fastcall sub_1408600D0(__int64 a1, __int16 a2, int* a3)
{
	__int64 v3; // r9
	int v4; // xmm0_4
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 88);
	if (!v3)
		return 1i64;
	v4 = *a3;
	if (a2 == 13)
	{
		*(_DWORD*)(v3 + 16) = v4;
		return 1i64;
	}
	result = 1i64;
	if (a2 == 14)
		*(_DWORD*)(v3 + 20) = v4;
	return result;
}

