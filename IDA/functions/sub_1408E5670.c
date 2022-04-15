//----- (00000001408E5670) ----------------------------------------------------
__int64 __fastcall sub_1408E5670(__int64 a1, __int64 a2, __int64* a3, _DWORD* a4, _DWORD* a5)
{
	_DWORD* v5; // rdi
	_DWORD* v9; // r14
	int v10; // ecx
	bool v11; // zf
	int v12; // eax
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 result; // rax
	__int64 v16; // [rsp+50h] [rbp+8h] BYREF

	v5 = (_DWORD*)(a1 + 160);
	*(_QWORD*)(a1 + 488) = a2;
	*(_QWORD*)(a1 + 480) = a4;
	sub_1408E7100(a4, (_DWORD*)(a1 + 160));
	v9 = a5;
	*(_DWORD*)(a1 + 208) = *v5;
	*(_DWORD*)(a1 + 212) = v5[1];
	*(_DWORD*)(a1 + 216) = v5[2];
	*(_DWORD*)(a1 + 220) = v5[3];
	*(_DWORD*)(a1 + 224) = v5[4];
	*(_DWORD*)(a1 + 228) = v5[5];
	*(_DWORD*)(a1 + 232) = v5[6];
	*(_DWORD*)(a1 + 236) = v5[7];
	*(_DWORD*)(a1 + 240) = v5[8];
	*(_DWORD*)(a1 + 244) = v5[9];
	*(_DWORD*)(a1 + 248) = v5[10];
	*(_DWORD*)(a1 + 252) = v5[11];
	v10 = v9[1] & 0x3FFFF;
	v11 = *(_DWORD*)(a1 + 204) == 1;
	*(_DWORD*)(a1 + 460) = v10;
	if (v11)
	{
		*(_DWORD*)(a1 + 464) = v10;
	}
	else
	{
		*(_DWORD*)(a1 + 464) = 3;
		if (((v10 - 4) & 0xFFFFFFF3) == 0)
		{
			v12 = *(_DWORD*)(a1 + 464);
			if (v10 != 16)
				v12 = 4;
			*(_DWORD*)(a1 + 464) = v12;
		}
	}
	*(_DWORD*)(a1 + 468) = *v9;
	*(_BYTE*)(a1 + 478) = (*(__int64(__fastcall**)(__int64*))(*a3 + 144))(a3);
	v16 = *(_QWORD*)v9;
	v13 = *a3;
	HIDWORD(v16) ^= (*(_DWORD*)(a1 + 464) ^ HIDWORD(v16)) & 0x3FFFF;
	v14 = (*(__int64(__fastcall**)(__int64*))(v13 + 48))(a3);
	result = sub_1408E71E0(a1 + 16, a2, a3, &v16, v14);
	if ((_DWORD)result == 1)
	{
		*(_DWORD*)(a1 + 456) = (int)(float)((float)((float)(*(float*)(a1 + 164) + *(float*)v5) * 0.001)
			* (float)*(int*)(a1 + 468))
			+ *(_DWORD*)(a1 + 96) * *(_DWORD*)(a1 + 124);
		result = sub_1408E69E0(a1);
		if ((_DWORD)result == 1)
		{
			result = sub_1408E6940(a1);
			if ((_DWORD)result == 1)
			{
				*(_DWORD*)(a1 + 472) = 0;
				*(_WORD*)(a1 + 476) = 0;
				if (*(_DWORD*)(a1 + 108) > 1u && (((v9[1] & 0x3FFFF) - 3) & 0xFFFFFFF3) == 0)
					*(_BYTE*)(a1 + 473) = 1;
				return 1i64;
			}
		}
	}
	return result;
}

