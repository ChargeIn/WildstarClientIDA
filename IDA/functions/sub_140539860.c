//----- (0000000140539860) ----------------------------------------------------
void __fastcall sub_140539860(__int64 a1, float a2)
{
	int v3; // edx
	float v4; // xmm6_4
	unsigned __int64 v5; // rcx
	float v6; // xmm0_4
	float v7; // xmm6_4
	__int64 v8; // rcx
	__int64 v9; // rax
	__int128 v10; // xmm8
	float v11; // xmm6_4
	float v12; // xmm0_4
	int v13; // xmm0_4
	unsigned int v14; // xmm1_4
	int v15; // eax
	float v16; // xmm0_4
	int v17; // eax
	__int64 v18; // [rsp+20h] [rbp-58h] BYREF
	unsigned __int64 v19; // [rsp+28h] [rbp-50h]
	int v20; // [rsp+30h] [rbp-48h]
	int v21; // [rsp+34h] [rbp-44h]
	int v22; // [rsp+38h] [rbp-40h]

	if (a2 > 0.0
		&& (*(_QWORD*)(a1 + 29096) || *(_QWORD*)(a1 + 29088))
		&& (*(_BYTE*)(qword_140C65898 + 31560) & 0x20) != 0
		&& (*(_DWORD*)(qword_140C65678 + 64) & 0x2000) != 0)
	{
		v3 = *(_DWORD*)(a1 + 29852);
		if (v3)
		{
			++* (_QWORD*)(a1 + 29880);
			v5 = 0i64;
			v6 = a2 * 1000.0;
			if ((float)(a2 * 1000.0) >= 9.223372e18)
			{
				v6 = v6 - 9.223372e18;
				if (v6 < 9.223372e18)
					v5 = 0x8000000000000000ui64;
			}
			*(_QWORD*)(a1 + 29872) += v5 + (unsigned int)(int)v6;
			if (v3 == 1)
			{
				v7 = a2 + *(float*)(a1 + 29860);
				*(float*)(a1 + 29860) = v7;
				if (v7 > 120.0)
				{
					*(_DWORD*)(a1 + 29852) = 2;
					*(_DWORD*)(a1 + 29860) = 0;
				}
			}
			else
			{
				v8 = *(_QWORD*)(a1 + 29096);
				v9 = v8;
				if (!v8)
					v9 = *(_QWORD*)(a1 + 29088);
				v10 = *(_OWORD*)(v9 + 32);
				if (!v8)
					v8 = *(_QWORD*)(a1 + 29088);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				if (a2 > *(float*)(a1 + 29904) || !*(_DWORD*)(a1 + 29864))
				{
					*(float*)(a1 + 29904) = a2;
					*(_OWORD*)(a1 + 29888) = v10;
					*(float*)(a1 + 29908) = v6;
				}
				++* (_DWORD*)(a1 + 29864);
				v11 = a2 + *(float*)(a1 + 29860);
				v12 = a2 + *(float*)(a1 + 29856);
				*(float*)(a1 + 29860) = v11;
				*(float*)(a1 + 29856) = v12;
				if (v12 > 30.0)
				{
					v13 = *(_DWORD*)(a1 + 29908);
					v14 = *(_DWORD*)(a1 + 29888);
					v20 = 0;
					v18 = 0i64;
					v19 = 0i64;
					v21 = v13;
					v19 = __PAIR64__(*(_DWORD*)(a1 + 29892), v14);
					v22 = 0;
					v15 = *(_DWORD*)(a1 + 29864);
					v20 = *(_DWORD*)(a1 + 29896);
					v16 = *(float*)(a1 + 29904) * 1000.0;
					v18 = (*(float*)&dword_140C1B438 < 0.0) | (unsigned int)(2 * (int)(float)((float)(v11 * 1000.0) / (float)v15));
					v17 = *(_QWORD*)(a1 + 29872) / *(_QWORD*)(a1 + 29880);
					HIDWORD(v18) = (*(float*)&dword_140C1CF7C < 0.0) | (2 * (int)v16);
					v22 = (*(float*)&dword_140C1E45C < 0.0) | (2 * v17);
					sub_1403F4900(a1, 0x240u, (__int64)&v18);
					*(_QWORD*)(a1 + 29856) = 0i64;
					*(_DWORD*)(a1 + 29864) = 0;
				}
			}
		}
		else
		{
			v4 = a2 + *(float*)(a1 + 29860);
			*(float*)(a1 + 29860) = v4;
			if (v4 > 30.0)
			{
				*(_DWORD*)(a1 + 29852) = 1;
				*(_DWORD*)(a1 + 29860) = 0;
				*(_QWORD*)(a1 + 29880) = 0i64;
				*(_QWORD*)(a1 + 29872) = 0i64;
			}
		}
	}
}
// 140C1B438: using guessed type int dword_140C1B438;
// 140C1CF7C: using guessed type int dword_140C1CF7C;
// 140C1E45C: using guessed type int dword_140C1E45C;
// 140C65678: using guessed type __int64 qword_140C65678;
// 140C65898: using guessed type __int64 qword_140C65898;

