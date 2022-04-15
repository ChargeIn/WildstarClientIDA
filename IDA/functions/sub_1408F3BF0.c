//----- (00000001408F3BF0) ----------------------------------------------------
__int64 __fastcall sub_1408F3BF0(__int64 a1, float** a2)
{
	float* v2; // rdi
	__int64 v4; // rdx
	int v5; // eax
	unsigned int v6; // ebp
	float* v7; // rdi
	int v9; // ebx
	__int64 v10; // rax
	float v12; // xmm0_4
	__int64 v13; // rbx
	double v14; // xmm0_8

	v2 = *a2;
	v4 = *(_QWORD*)(a1 + 224);
	v5 = *(unsigned __int16*)v2;
	v6 = 0;
	v7 = (float*)((char*)v2 + 6);
	*(float*)(a1 + 140) = *(v7 - 1);
	v9 = v5;
	if (v4 && *(_DWORD*)(a1 + 236) != v5)
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 216) + 16i64))(*(_QWORD*)(a1 + 216));
		*(_QWORD*)(a1 + 224) = 0i64;
		*(_DWORD*)(a1 + 236) = 0;
	}
	if (v9)
	{
		*(_DWORD*)(a1 + 236) = v9;
		if (!*(_QWORD*)(a1 + 224))
		{
			v10 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 216) + 8i64))(
				*(_QWORD*)(a1 + 216),
				(unsigned int)(20 * v9));
			*(_QWORD*)(a1 + 224) = v10;
			if (!v10)
			{
				*(_DWORD*)(a1 + 236) = 0;
				return 52i64;
			}
		}
		if (*(_DWORD*)(a1 + 236))
		{
			do
			{
				v12 = *v7;
				v7 += 5;
				v13 = 5i64 * v6;
				*(float*)(*(_QWORD*)(a1 + 224) + 4 * v13) = v12;
				*(float*)(*(_QWORD*)(a1 + 224) + 4 * v13 + 4) = *(v7 - 4);
				*(float*)(*(_QWORD*)(a1 + 224) + 4 * v13 + 8) = *(v7 - 3);
				*(float*)(*(_QWORD*)(a1 + 224) + 4 * v13 + 12) = *(v7 - 2);
				v14 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(v7 - 1) * 0.050000001);
				++v6;
				*(_DWORD*)(*(_QWORD*)(a1 + 224) + 4 * v13 + 16) = LODWORD(v14);
			} while (v6 < *(_DWORD*)(a1 + 236));
		}
	}
	*a2 = v7;
	return 1i64;
}

