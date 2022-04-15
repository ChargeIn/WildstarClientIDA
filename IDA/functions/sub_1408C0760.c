//----- (00000001408C0760) ----------------------------------------------------
__int64 __fastcall sub_1408C0760(__int64 a1)
{
	int v2; // edx
	unsigned int v3; // esi
	int v4; // ecx
	__int64 v5; // rcx
	int v6; // ebx
	double v7; // xmm0_8
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v11; // rcx
	int v12; // edx
	__int64(__fastcall * v13)(__int64, __int64); // rax
	__int64 v14; // rax
	__int64 v15; // rax

	if (*(_QWORD*)(a1 + 64))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 16i64))(*(_QWORD*)(a1 + 24));
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	if (*(_QWORD*)(a1 + 56))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 16i64))(*(_QWORD*)(a1 + 24));
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	v2 = *(_DWORD*)(a1 + 40);
	v3 = 0;
	v4 = v2 & 0x3FFFF;
	if ((v2 & 0x3FFFF) != 0)
	{
		do
		{
			++v3;
			v4 &= v4 - 1;
		} while (v4);
	}
	v5 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 44) = v3;
	if (!*(_BYTE*)(v5 + 32) && (v2 & 8) != 0)
		*(_DWORD*)(a1 + 44) = v3 - 1;
	if (*(_BYTE*)(v5 + 33))
		*(_DWORD*)(a1 + 48) = 1;
	else
		*(_DWORD*)(a1 + 48) = *(_DWORD*)(a1 + 44);
	v6 = (int)(float)((float)*(int*)(a1 + 36) * *(float*)(v5 + 28));
	HIDWORD(v7) = 0;
	*(_DWORD*)(a1 + 52) = v6;
	*(float*)&v7 = -2.2 / (float)((float)v6 * 0.5);
	*(float*)&v7 = sub_1408FC7F0(v7);
	v8 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 88) = LODWORD(v7);
	v9 = (*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v8 + 8i64))(
		v8,
		4 * v3 * (unsigned __int64)(unsigned int)v6);
	*(_QWORD*)(a1 + 64) = v9;
	if (!v9)
		return 52i64;
	v11 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 72) = 0;
	if (!*(_BYTE*)(v11 + 33) || (v12 = *(_DWORD*)(a1 + 40), (v12 & 0x3FFFF) == 4))
		v13 = sub_1408C0900;
	else
		v13 = (v12 & 8) == 0 || *(_BYTE*)(v11 + 32)
		? sub_1408C0F60
		: (__int64(__fastcall*)(__int64, __int64))sub_1408C1680;
	*(_QWORD*)(a1 + 8) = v13;
	v14 = *(unsigned int*)(a1 + 48);
	if ((_DWORD)v14)
	{
		v15 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 8i64))(*(_QWORD*)(a1 + 24), 12 * v14);
		*(_QWORD*)(a1 + 56) = v15;
		if (!v15)
			return 52i64;
	}
	*(_BYTE*)(*(_QWORD*)(a1 + 16) + 34i64) = 0;
	return 1i64;
}

