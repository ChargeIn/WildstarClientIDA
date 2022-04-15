//----- (000000014064E9C0) ----------------------------------------------------
__int64 __fastcall sub_14064E9C0(__int64 a1)
{
	float* v2; // rax
	float v4; // xmm0_4
	__int64 v5; // rax

	v2 = (float*)sub_1406499E0(a1);
	if (v2)
	{
		v4 = sub_140464750(v2, 0);
		v5 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v5 + 8) = 3;
		*(double*)v5 = (float)(v4 * 100.0);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

