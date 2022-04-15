//----- (0000000140279560) ----------------------------------------------------
__int64 __fastcall sub_140279560(__int64 a1)
{
	__int64 result; // rax
	int* v3; // rcx
	int v4; // xmm1_4
	__int64 v5; // rcx
	int v6[6]; // [rsp+20h] [rbp-28h] BYREF

	if ((*(_BYTE*)(a1 + 7176) & 8) != 0)
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD**)(a1 + 6352) + 264i64))(
			*(_QWORD*)(a1 + 6352),
			4i64,
			*(_QWORD*)(a1 + 8592) + 104i64,
			*(_QWORD*)(*(_QWORD*)(a1 + 8600) + 32i64));
		*(_DWORD*)(a1 + 7176) |= 0x10u;
	}
	if ((*(_BYTE*)(a1 + 7176) & 0x10) != 0)
	{
		v3 = (int*)(*(_QWORD*)(a1 + 8592) + 144i64);
		*(float*)v6 = (float)*v3 + 0.5;
		*(float*)&v6[1] = (float)v3[1] + 0.5;
		*(float*)&v6[2] = (float)v3[2];
		*(float*)&v6[3] = (float)v3[3];
		v6[4] = v3[4];
		v4 = v3[5];
		v5 = *(_QWORD*)(a1 + 6352);
		v6[5] = v4;
		result = (*(__int64(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)v5 + 352i64))(v5, 1i64, v6);
		*(_DWORD*)(a1 + 7176) |= 0x80u;
	}
	*(_DWORD*)(a1 + 7176) &= 0xFFFFFFE7;
	return result;
}

