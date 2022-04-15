#include "../winhttp.h"

//----- (00000001403146B0) ----------------------------------------------------
void __fastcall sub_1403146B0(__int64 a1)
{
	int* v2; // rax
	int* v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rcx
	int** v6; // r8
	__int64 v7; // rdx
	int* v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // rcx
	int* v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rcx
	int* v15; // rax
	__int64 v16; // rdi
	__int64 v17; // rcx
	int* v18; // rax
	__int64 v19; // rdi
	__int64 v20; // rcx
	int* v21; // rax
	__int64 v22; // rdi
	__int64 v23; // rcx

	if (!*(_BYTE*)(a1 + 1063))
	{
		sub_14032D650((_QWORD*)a1);
		switch (0x140000000ui64)
		{
		case 0ui64:
			v2 = sub_14018B280(24i64, 0);
			if (v2)
			{
				v3 = v2 + 2;
				*v2 = 1;
				*((_QWORD*)v2 + 1) = 0i64;
				*((_QWORD*)v2 + 2) = 0i64;
			}
			else
			{
				v3 = 0i64;
			}
			v4 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 424) = v3;
			*(_QWORD*)(a1 + 432) = v3;
			v5 = *(_QWORD*)(v4 + 40);
			v6 = (int**)(a1 + 1064);
			v7 = (__int64)v3;
			goto LABEL_28;
		case 2ui64:
			v8 = sub_14018B280(40i64, 0);
			if (v8)
			{
				v9 = (__int64)(v8 + 2);
				*v8 = 2;
				*((_QWORD*)v8 + 1) = 0i64;
				*((_QWORD*)v8 + 2) = 0i64;
				*((_QWORD*)v8 + 3) = 0i64;
				*((_QWORD*)v8 + 4) = 0i64;
			}
			else
			{
				v9 = 0i64;
			}
			v10 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 424) = v9;
			*(_QWORD*)(a1 + 432) = v9;
			*(_QWORD*)(a1 + 440) = v9 + 16;
			sub_140317EC0(*(_QWORD*)(v10 + 56), v9, (int**)(a1 + 1064));
			v11 = *(_QWORD*)(*(_QWORD*)(a1 + 416) + 56i64);
			goto LABEL_11;
		case 3ui64:
			v12 = sub_14018B280(56i64, 0);
			if (v12)
			{
				v13 = (__int64)(v12 + 2);
				*v12 = 3;
				*((_QWORD*)v12 + 1) = 0i64;
				*((_QWORD*)v12 + 2) = 0i64;
				*((_QWORD*)v12 + 3) = 0i64;
				*((_QWORD*)v12 + 4) = 0i64;
				*((_QWORD*)v12 + 5) = 0i64;
				*((_QWORD*)v12 + 6) = 0i64;
			}
			else
			{
				v13 = 0i64;
			}
			v14 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 424) = v13;
			*(_QWORD*)(a1 + 440) = v13 + 16;
			*(_QWORD*)(a1 + 432) = v13;
			*(_QWORD*)(a1 + 448) = v13 + 32;
			sub_140317EC0(*(_QWORD*)(v14 + 64), v13, (int**)(a1 + 1064));
			sub_140317EC0(*(_QWORD*)(*(_QWORD*)(a1 + 416) + 64i64) + 24i64, *(_QWORD*)(a1 + 440), (int**)(a1 + 1064));
			v7 = *(_QWORD*)(a1 + 448);
			v6 = (int**)(a1 + 1064);
			v5 = *(_QWORD*)(*(_QWORD*)(a1 + 416) + 64i64) + 48i64;
			goto LABEL_28;
		case 4ui64:
			v15 = sub_14018B280(72i64, 0);
			if (v15)
			{
				v16 = (__int64)(v15 + 2);
				*v15 = 4;
				*((_QWORD*)v15 + 1) = 0i64;
				*((_QWORD*)v15 + 2) = 0i64;
				*((_QWORD*)v15 + 3) = 0i64;
				*((_QWORD*)v15 + 4) = 0i64;
				*((_QWORD*)v15 + 5) = 0i64;
				*((_QWORD*)v15 + 6) = 0i64;
				*((_QWORD*)v15 + 7) = 0i64;
				*((_QWORD*)v15 + 8) = 0i64;
			}
			else
			{
				v16 = 0i64;
			}
			v17 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 424) = v16;
			*(_QWORD*)(a1 + 440) = v16 + 16;
			*(_QWORD*)(a1 + 432) = v16;
			*(_QWORD*)(a1 + 448) = v16 + 32;
			*(_QWORD*)(a1 + 456) = v16 + 48;
			sub_140317EC0(*(_QWORD*)(v17 + 72), v16, (int**)(a1 + 1064));
			sub_140317EC0(*(_QWORD*)(*(_QWORD*)(a1 + 416) + 72i64) + 24i64, *(_QWORD*)(a1 + 440), (int**)(a1 + 1064));
			sub_140317EC0(*(_QWORD*)(*(_QWORD*)(a1 + 416) + 72i64) + 48i64, *(_QWORD*)(a1 + 448), (int**)(a1 + 1064));
			v7 = *(_QWORD*)(a1 + 456);
			v6 = (int**)(a1 + 1064);
			v5 = *(_QWORD*)(*(_QWORD*)(a1 + 416) + 72i64) + 72i64;
			goto LABEL_28;
		case 5ui64:
			v18 = sub_14018B280(40i64, 0);
			if (v18)
			{
				v19 = (__int64)(v18 + 2);
				*v18 = 2;
				*((_QWORD*)v18 + 1) = 0i64;
				*((_QWORD*)v18 + 2) = 0i64;
				*((_QWORD*)v18 + 3) = 0i64;
				*((_QWORD*)v18 + 4) = 0i64;
			}
			else
			{
				v19 = 0i64;
			}
			v20 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 424) = v19;
			*(_QWORD*)(a1 + 432) = v19;
			*(_QWORD*)(a1 + 440) = v19 + 16;
			sub_140317EC0(*(_QWORD*)(v20 + 80), v19, (int**)(a1 + 1064));
			v11 = *(_QWORD*)(*(_QWORD*)(a1 + 416) + 80i64);
		LABEL_11:
			v7 = *(_QWORD*)(a1 + 440);
			v5 = v11 + 24;
			v6 = (int**)(a1 + 1064);
			goto LABEL_28;
		case 7ui64:
		case 8ui64:
		case 9ui64:
		case 0xAui64:
			v21 = sub_14018B280(104i64, 0);
			if (v21)
			{
				v22 = (__int64)(v21 + 2);
				*v21 = 6;
				sub_1407E4830(v21 + 2, 0i64, 0x60ui64);
			}
			else
			{
				v22 = 0i64;
			}
			v23 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 424) = v22;
			*(_QWORD*)(a1 + 440) = v22 + 16;
			*(_QWORD*)(a1 + 432) = v22;
			*(_QWORD*)(a1 + 448) = v22 + 32;
			*(_QWORD*)(a1 + 456) = v22 + 48;
			*(_QWORD*)(a1 + 464) = v22 + 64;
			*(_QWORD*)(a1 + 472) = v22 + 80;
			sub_140317EC0(*(_QWORD*)(v23 + 96), v22, (int**)(a1 + 1064));
			sub_140317EC0(*(_QWORD*)(*(_QWORD*)(a1 + 416) + 96i64) + 24i64, *(_QWORD*)(a1 + 440), (int**)(a1 + 1064));
			sub_140317EC0(*(_QWORD*)(*(_QWORD*)(a1 + 416) + 96i64) + 48i64, *(_QWORD*)(a1 + 448), (int**)(a1 + 1064));
			sub_140317EC0(*(_QWORD*)(*(_QWORD*)(a1 + 416) + 96i64) + 72i64, *(_QWORD*)(a1 + 456), (int**)(a1 + 1064));
			sub_140317EC0(*(_QWORD*)(*(_QWORD*)(a1 + 416) + 96i64) + 96i64, *(_QWORD*)(a1 + 464), (int**)(a1 + 1064));
			v7 = *(_QWORD*)(a1 + 472);
			v6 = (int**)(a1 + 1064);
			v5 = *(_QWORD*)(*(_QWORD*)(a1 + 416) + 96i64) + 120i64;
		LABEL_28:
			sub_140317EC0(v5, v7, v6);
			break;
		default:
			break;
		}
		sub_140318640(*(_QWORD*)(a1 + 416) + 104i64, a1 + 480, (_QWORD*)(a1 + 1064));
		sub_140318640(*(_QWORD*)(a1 + 416) + 128i64, a1 + 496, (_QWORD*)(a1 + 1064));
		sub_140318740(*(_QWORD*)(a1 + 416) + 152i64, a1 + 512, (_QWORD*)(a1 + 1064));
		sub_140318740(*(_QWORD*)(a1 + 416) + 176i64, a1 + 528, (_QWORD*)(a1 + 1064));
		sub_140318740(*(_QWORD*)(a1 + 416) + 248i64, a1 + 576, (_QWORD*)(a1 + 1064));
		sub_140318740(*(_QWORD*)(a1 + 416) + 272i64, a1 + 592, (_QWORD*)(a1 + 1064));
		sub_140318740(*(_QWORD*)(a1 + 416) + 608i64, a1 + 608, (_QWORD*)(a1 + 1064));
		sub_1403180D0(*(_QWORD*)(a1 + 416) + 296i64, (__m128i*)(a1 + 624), (__m128i**)(a1 + 1064));
		sub_1403180D0(*(_QWORD*)(a1 + 416) + 320i64, (__m128i*)(a1 + 656), (__m128i**)(a1 + 1064));
		sub_140317EC0(*(_QWORD*)(a1 + 416) + 344i64, a1 + 688, (int**)(a1 + 1064));
		sub_140317EC0(*(_QWORD*)(a1 + 416) + 368i64, a1 + 704, (int**)(a1 + 1064));
		sub_140317EC0(*(_QWORD*)(a1 + 416) + 416i64, a1 + 752, (int**)(a1 + 1064));
		sub_140317EC0(*(_QWORD*)(a1 + 416) + 440i64, a1 + 768, (int**)(a1 + 1064));
		sub_140317EC0(*(_QWORD*)(a1 + 416) + 464i64, a1 + 784, (int**)(a1 + 1064));
		sub_140317EC0(*(_QWORD*)(a1 + 416) + 488i64, a1 + 800, (int**)(a1 + 1064));
		sub_140317EC0(*(_QWORD*)(a1 + 416) + 512i64, a1 + 816, (int**)(a1 + 1064));
		sub_140317EC0(*(_QWORD*)(a1 + 416) + 536i64, a1 + 832, (int**)(a1 + 1064));
		sub_140317EC0(*(_QWORD*)(a1 + 416) + 560i64, a1 + 848, (int**)(a1 + 1064));
		sub_140317EC0(*(_QWORD*)(a1 + 416) + 584i64, a1 + 864, (int**)(a1 + 1064));
		*(_BYTE*)(a1 + 1063) = 1;
	}
}

