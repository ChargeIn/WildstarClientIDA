//----- (0000000140836A10) ----------------------------------------------------
__int64 __fastcall sub_140836A10(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
	__int64* v3; // rbx
	__int64* v6; // rax
	unsigned int v7; // ecx
	unsigned int* v8; // rax
	__int64* v9; // rax
	unsigned int v11; // edi
	__int64 v12; // rcx
	__int64* v13; // rbp
	__int64 v14; // rax
	float v15; // xmm1_4
	__int64 v16; // rcx
	int v17; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(__int64**)(a1 + 4712);
	if (v3)
	{
		while (*((_DWORD*)v3 + 2) != a2)
		{
			v3 = (__int64*)*v3;
			if (!v3)
				goto LABEL_4;
		}
		v11 = *((_DWORD*)v3 + 3);
		v12 = *(_QWORD*)(a1 + 8i64 * (v11 % 0xC1));
		if (!v12)
			goto LABEL_24;
		while (*(_DWORD*)v12 != v11)
		{
			v12 = *(_QWORD*)(v12 + 8);
			if (!v12)
				goto LABEL_24;
		}
		v13 = (__int64*)(v12 + 24);
		v14 = sub_140834F40((__int64*)(v12 + 24), a3);
		if (v14 || a3 && (v14 = sub_140834F40(v13, 0i64)) != 0)
		{
			v15 = *(float*)(v14 + 8);
		}
		else
		{
		LABEL_24:
			v16 = *(_QWORD*)(a1 + 8i64 * (v11 % 0xC1));
			if (v16)
			{
				while (*(_DWORD*)v16 != v11)
				{
					v16 = *(_QWORD*)(v16 + 8);
					if (!v16)
						goto LABEL_27;
				}
				v15 = *(float*)(v16 + 16);
			}
			else
			{
			LABEL_27:
				v15 = 0.0;
			}
		}
		return sub_1408358D0((_DWORD*)v3 + 4, v15, 0, &v17);
	}
	else
	{
	LABEL_4:
		v6 = *(__int64**)(a1 + 8 * ((a2 + a3) % 0xC1) + 1560);
		v7 = 0;
		if (v6)
		{
			while (*((_DWORD*)v6 + 2) != a2 || v6[2] != a3)
			{
				v6 = (__int64*)*v6;
				if (!v6)
					goto LABEL_8;
			}
			v8 = (unsigned int*)(v6 + 3);
		}
		else
		{
		LABEL_8:
			v8 = 0i64;
		}
		if (v8)
			return *v8;
		if (a3)
		{
			v9 = *(__int64**)(a1 + 8 * (a2 % 0xC1ui64) + 1560);
			if (v9)
			{
				while (*((_DWORD*)v9 + 2) != a2 || v9[2])
				{
					v9 = (__int64*)*v9;
					if (!v9)
						return 0i64;
				}
				v8 = (unsigned int*)(v9 + 3);
				if (v8)
					return *v8;
			}
		}
		return v7;
	}
}
// 140836B27: conditional instruction was optimized away because rcx.8!=0
// 140836BAC: conditional instruction was optimized away because rcx.8!=0

