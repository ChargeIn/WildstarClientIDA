//----- (00000001400DE6C0) ----------------------------------------------------
__int64 __fastcall sub_1400DE6C0(_QWORD* a1)
{
	__int64 result; // rax
	float v3; // xmm0_4
	__int64 v4; // rcx

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v3 = *(float*)(result + 616);
		v4 = a1[2];
		result = 1i64;
		*(_DWORD*)(v4 + 8) = 3;
		*(double*)v4 = v3;
		a1[2] += 16i64;
	}
	return result;
}

