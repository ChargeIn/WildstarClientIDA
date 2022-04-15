//----- (00000001406F9B60) ----------------------------------------------------
__int64 __fastcall sub_1406F9B60(__int64 a1)
{
	double v2; // xmm0_8
	__int64 v3; // rax

	v2 = (double)(int)sub_1406F4660();
	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

