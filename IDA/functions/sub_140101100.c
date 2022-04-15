//----- (0000000140101100) ----------------------------------------------------
unsigned __int64 __fastcall sub_140101100(__int64 a1)
{
	int v1; // r10d
	unsigned __int64 result; // rax
	float v4; // xmm0_4
	float* v5; // r8
	__int64 v6; // rcx

	v1 = 0;
	*(_DWORD*)(a1 + 112) = 0;
	result = (unsigned __int64)((unsigned __int128)((__int64)(*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56))
		* (__int128)0x6BCA1AF286BCA1Bi64) >> 64) >> 63;
	if ((int)((*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56)) / 304i64) > 0)
	{
		v4 = 0.0;
		v5 = (float*)(*(_QWORD*)(a1 + 56) + 60i64);
		do
		{
			v4 = v4 + *v5;
			++v1;
			v5 += 76;
			*(float*)(a1 + 112) = v4;
			v6 = *(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56);
			result = (unsigned __int64)((unsigned __int128)(v6 * (__int128)0x6BCA1AF286BCA1Bi64) >> 64) >> 63;
		} while (v1 < (int)(v6 / 304));
	}
	return result;
}

