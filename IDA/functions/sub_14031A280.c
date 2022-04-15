//----- (000000014031A280) ----------------------------------------------------
void __fastcall sub_14031A280(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rsi
	double v4; // xmm0_8
	double v5; // xmm0_8
	double v6; // xmm0_8
	double v7; // xmm0_8
	double v8; // xmm0_8
	double v9; // xmm0_8

	if (!*(_QWORD*)(a1 + 1432))
	{
		v2 = 0i64;
		*(_QWORD*)(a1 + 1432) = sub_14018B280(1536i64, 0);
		v3 = 32i64;
		do
		{
			v4 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v2 + *(_QWORD*)(a1 + 1432) + 8) = LODWORD(v4);
			v5 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v2 + *(_QWORD*)(a1 + 1432) + 24) = LODWORD(v5);
			*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 40) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			if ((*(_BYTE*)(*(_QWORD*)(a1 + 416) + 3784i64) & 0x10) != 0
				&& (*(unsigned int(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 64i64))(
					*(_QWORD*)(a1 + 56),
					0i64,
					1i64))
			{
				*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 8) = -*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 8);
				*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 24) = -*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 24);
				*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 40) = -*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 40);
			}
			v6 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v2 + *(_QWORD*)(a1 + 1432)) = LODWORD(v6);
			v7 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v2 + *(_QWORD*)(a1 + 1432) + 16) = LODWORD(v7);
			*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 32) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			if ((*(_BYTE*)(*(_QWORD*)(a1 + 416) + 3784i64) & 0x20) != 0
				&& (*(unsigned int(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 64i64))(
					*(_QWORD*)(a1 + 56),
					0i64,
					1i64))
			{
				*(float*)(v2 + *(_QWORD*)(a1 + 1432)) = -*(float*)(v2 + *(_QWORD*)(a1 + 1432));
				*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 16) = -*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 16);
				*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 32) = -*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 32);
			}
			v8 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v2 + *(_QWORD*)(a1 + 1432) + 4) = LODWORD(v8);
			v9 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			*(_DWORD*)(v2 + *(_QWORD*)(a1 + 1432) + 20) = LODWORD(v9);
			*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 36) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			if ((*(_BYTE*)(*(_QWORD*)(a1 + 416) + 3784i64) & 0x40) != 0)
			{
				if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 64i64))(
					*(_QWORD*)(a1 + 56),
					0i64,
					1i64))
				{
					*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 4) = -*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 4);
					*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 20) = -*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 20);
					*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 36) = -*(float*)(v2 + *(_QWORD*)(a1 + 1432) + 36);
				}
			}
			v2 += 48i64;
			--v3;
		} while (v3);
	}
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

