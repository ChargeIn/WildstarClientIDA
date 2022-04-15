//----- (00000001408CBFF0) ----------------------------------------------------
__int64 __fastcall sub_1408CBFF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD* a5)
{
	_DWORD* v5; // rax
	unsigned __int16 v9; // ax
	_DWORD* v10; // rcx
	float* v11; // rbx
	float v12; // xmm1_4
	float v13; // eax
	int v14; // r9d
	int v15; // xmm1_4
	__int64 result; // rax

	v5 = a5;
	*(_QWORD*)(a1 + 8) = a4;
	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 1004) = *v5;
	*(_BYTE*)(a1 + 1013) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 144i64))(a3);
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 16i64))(a3);
	v10 = *(_DWORD**)(a1 + 8);
	v11 = (float*)(a1 + 864);
	*(_DWORD*)(a1 + 1008) = v9;
	sub_1408CCE70(v10, (_DWORD*)(a1 + 864));
	if (*(_BYTE*)(a1 + 1013))
		*(_DWORD*)(a1 + 912) = 0;
	if (!*(_BYTE*)(a1 + 924))
	{
		*(_DWORD*)(a1 + 868) = 0;
		*(_DWORD*)(a1 + 880) = 0;
	}
	if (!*(_BYTE*)(a1 + 925))
	{
		*(_DWORD*)(a1 + 872) = 0;
		*(_DWORD*)(a1 + 884) = 0;
	}
	v12 = (float)*(int*)(a1 + 1008) / (float)*(int*)(a1 + 1004);
	if (v12 > *v11)
		*v11 = v12;
	if (v12 > *(float*)(a1 + 876))
		*(float*)(a1 + 876) = v12;
	v13 = *v11;
	v14 = *(_DWORD*)(a1 + 1004);
	*(_BYTE*)(a1 + 1012) = 1;
	*(float*)(a1 + 928) = v13;
	*(_DWORD*)(a1 + 932) = *(_DWORD*)(a1 + 868);
	*(_DWORD*)(a1 + 936) = *(_DWORD*)(a1 + 872);
	*(_DWORD*)(a1 + 940) = *(_DWORD*)(a1 + 876);
	*(_DWORD*)(a1 + 944) = *(_DWORD*)(a1 + 880);
	*(_DWORD*)(a1 + 948) = *(_DWORD*)(a1 + 884);
	*(_DWORD*)(a1 + 952) = *(_DWORD*)(a1 + 888);
	*(_DWORD*)(a1 + 956) = *(_DWORD*)(a1 + 892);
	*(_DWORD*)(a1 + 960) = *(_DWORD*)(a1 + 896);
	*(_DWORD*)(a1 + 964) = *(_DWORD*)(a1 + 900);
	*(_DWORD*)(a1 + 968) = *(_DWORD*)(a1 + 904);
	*(_DWORD*)(a1 + 972) = *(_DWORD*)(a1 + 908);
	*(_DWORD*)(a1 + 976) = *(_DWORD*)(a1 + 912);
	*(_DWORD*)(a1 + 980) = *(_DWORD*)(a1 + 916);
	*(_DWORD*)(a1 + 984) = *(_DWORD*)(a1 + 920);
	*(_DWORD*)(a1 + 988) = *(_DWORD*)(a1 + 924);
	v15 = *(_DWORD*)(a1 + 876);
	*(float*)&a5 = *v11;
	HIDWORD(a5) = v15;
	result = sub_1408CCF70((_DWORD*)(a1 + 32), a2, (float*)&a5, v14);
	if ((_DWORD)result == 1)
	{
		*(_BYTE*)(*(_QWORD*)(a1 + 8) + 9i64) &= ~4u;
		result = sub_1408CCF70((_DWORD*)(a1 + 448), a2, (float*)&a5, *(_DWORD*)(a1 + 1004));
		if ((_DWORD)result == 1)
		{
			*(_BYTE*)(*(_QWORD*)(a1 + 8) + 9i64) &= ~0x40u;
			return 1i64;
		}
	}
	return result;
}

