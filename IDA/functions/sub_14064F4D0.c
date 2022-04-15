//----- (000000014064F4D0) ----------------------------------------------------
__int64 __fastcall sub_14064F4D0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	float v5; // xmm0_4

	v2 = sub_1406499E0(a1);
	v3 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		v5 = 1.0 - *(float*)(v2 + 2564);
		*(_DWORD*)(v3 + 8) = 3;
		*(double*)v3 = (float)(v5 * 100.0);
	}
	else
	{
		*(_DWORD*)(v3 + 8) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

