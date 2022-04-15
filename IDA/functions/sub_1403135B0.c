#include "../winhttp.h"

//----- (00000001403135B0) ----------------------------------------------------
void __fastcall sub_1403135B0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdi
	int v5; // eax
	int v6; // esi
	__int64 v7; // rbp
	double v8; // xmm0_8
	double v9; // xmm0_8
	double v10; // xmm0_8
	double v11; // xmm0_8
	double v12; // xmm0_8
	double v13; // xmm0_8
	double v14; // xmm0_8

	if (!*(_QWORD*)(a1 + 1152))
	{
		v2 = sub_14018B280(2048i64, 0);
		v3 = *(_QWORD*)(a1 + 416);
		v4 = 0i64;
		*(_QWORD*)(a1 + 1152) = v2;
		v5 = *(_DWORD*)(v3 + 3784);
		v6 = (v5 & 0x2000) != 0;
		if ((v5 & 0x4000) != 0)
			v6 |= 2u;
		if ((v5 & 0x8000) != 0)
			v6 |= 4u;
		if ((v5 & 0x10000) != 0)
			v6 |= 8u;
		if (*(_WORD*)(v3 + 2432) == 1)
			v6 |= 0x10u;
		if (*(_WORD*)(v3 + 2434) == 1)
			v6 |= 0x20u;
		v7 = 32i64;
		do
		{
			v8 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v4 + *(_QWORD*)(a1 + 1152) + 48) = LODWORD(v8);
			v9 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v4 + *(_QWORD*)(a1 + 1152) + 8) = LODWORD(v9);
			v10 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v4 + *(_QWORD*)(a1 + 1152) + 24) = LODWORD(v10);
			*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 40) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			if ((*(_BYTE*)(*(_QWORD*)(a1 + 416) + 3784i64) & 0x10) != 0
				&& (*(unsigned int(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 64i64))(
					*(_QWORD*)(a1 + 56),
					0i64,
					1i64))
			{
				*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 8) = -*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 8);
				*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 24) = -*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 24);
				*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 40) = -*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 40);
			}
			v11 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v4 + *(_QWORD*)(a1 + 1152)) = LODWORD(v11);
			v12 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v4 + *(_QWORD*)(a1 + 1152) + 16) = LODWORD(v12);
			*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 32) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			if ((*(_BYTE*)(*(_QWORD*)(a1 + 416) + 3784i64) & 0x20) != 0
				&& (*(unsigned int(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 64i64))(
					*(_QWORD*)(a1 + 56),
					0i64,
					1i64))
			{
				*(float*)(v4 + *(_QWORD*)(a1 + 1152)) = -*(float*)(v4 + *(_QWORD*)(a1 + 1152));
				*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 16) = -*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 16);
				*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 32) = -*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 32);
			}
			v13 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v4 + *(_QWORD*)(a1 + 1152) + 4) = LODWORD(v13);
			v14 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v4 + *(_QWORD*)(a1 + 1152) + 20) = LODWORD(v14);
			*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 36) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			if ((*(_BYTE*)(*(_QWORD*)(a1 + 416) + 3784i64) & 0x40) != 0)
			{
				if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 64i64))(
					*(_QWORD*)(a1 + 56),
					0i64,
					1i64))
				{
					*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 4) = -*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 4);
					*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 20) = -*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 20);
					*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 36) = -*(float*)(v4 + *(_QWORD*)(a1 + 1152) + 36);
				}
			}
			*(_DWORD*)(v4 + *(_QWORD*)(a1 + 1152) + 52) = v6 & (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56)
				+ 24i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v4 + *(_QWORD*)(a1 + 1152) + 56) = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 64i64))(
				*(_QWORD*)(a1 + 56),
				*(unsigned int*)(*(_QWORD*)(a1 + 416) + 3696i64),
				*(unsigned int*)(*(_QWORD*)(a1 + 416) + 3700i64));
			v4 += 64i64;
			*(_DWORD*)(v4 + *(_QWORD*)(a1 + 1152) - 4) = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 64i64))(
				*(_QWORD*)(a1 + 56),
				*(unsigned int*)(*(_QWORD*)(a1 + 416) + 2140i64),
				*(unsigned int*)(*(_QWORD*)(a1 + 416) + 2144i64));
			--v7;
		} while (v7);
	}
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

