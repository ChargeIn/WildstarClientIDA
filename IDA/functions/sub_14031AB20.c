#include "../winhttp.h"

//----- (000000014031AB20) ----------------------------------------------------
void __fastcall sub_14031AB20(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rcx
	int* v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rcx
	int* v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rcx
	int* v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rcx
	int* v16; // rax
	__int64 v17; // rcx

	if (!*(_BYTE*)(a1 + 1063))
	{
		sub_14032D650((_QWORD*)a1);
		switch (*(_WORD*)(*(_QWORD*)(a1 + 416) + 8i64))
		{
		case 1:
			v16 = sub_14018B280(24i64, 0);
			if (v16)
			{
				v5 = (__int64)(v16 + 2);
				*v16 = 1;
				*((_QWORD*)v16 + 1) = 0i64;
				*((_QWORD*)v16 + 2) = 0i64;
			}
			else
			{
				v5 = 0i64;
			}
			v17 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 424) = v5;
			*(_QWORD*)(a1 + 432) = v5;
			v6 = *(_QWORD*)(v17 + 40);
			break;
		case 3:
			v13 = sub_14018B280(40i64, 0);
			if (v13)
			{
				v14 = (__int64)(v13 + 2);
				*v13 = 2;
				*((_QWORD*)v13 + 1) = 0i64;
				*((_QWORD*)v13 + 2) = 0i64;
				*((_QWORD*)v13 + 3) = 0i64;
				*((_QWORD*)v13 + 4) = 0i64;
			}
			else
			{
				v14 = 0i64;
			}
			v15 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 424) = v14;
			*(_QWORD*)(a1 + 432) = v14;
			*(_QWORD*)(a1 + 440) = v14 + 16;
			sub_140317EC0(*(_QWORD*)(v15 + 56), v14, (int**)(a1 + 1064));
			v5 = *(_QWORD*)(a1 + 440);
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 416) + 56i64) + 24i64;
			break;
		case 4:
			v10 = sub_14018B280(56i64, 0);
			if (v10)
			{
				v11 = (__int64)(v10 + 2);
				*v10 = 3;
				*((_QWORD*)v10 + 1) = 0i64;
				*((_QWORD*)v10 + 2) = 0i64;
				*((_QWORD*)v10 + 3) = 0i64;
				*((_QWORD*)v10 + 4) = 0i64;
				*((_QWORD*)v10 + 5) = 0i64;
				*((_QWORD*)v10 + 6) = 0i64;
			}
			else
			{
				v11 = 0i64;
			}
			v12 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 424) = v11;
			*(_QWORD*)(a1 + 440) = v11 + 16;
			*(_QWORD*)(a1 + 432) = v11;
			*(_QWORD*)(a1 + 448) = v11 + 32;
			sub_140317EC0(*(_QWORD*)(v12 + 64), v11, (int**)(a1 + 1064));
			sub_140317EC0(*(_QWORD*)(*(_QWORD*)(a1 + 416) + 64i64) + 24i64, *(_QWORD*)(a1 + 440), (int**)(a1 + 1064));
			v5 = *(_QWORD*)(a1 + 448);
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 416) + 64i64) + 48i64;
			break;
		case 5:
			v7 = sub_14018B280(72i64, 0);
			if (v7)
			{
				v8 = (__int64)(v7 + 2);
				*v7 = 4;
				*((_QWORD*)v7 + 1) = 0i64;
				*((_QWORD*)v7 + 2) = 0i64;
				*((_QWORD*)v7 + 3) = 0i64;
				*((_QWORD*)v7 + 4) = 0i64;
				*((_QWORD*)v7 + 5) = 0i64;
				*((_QWORD*)v7 + 6) = 0i64;
				*((_QWORD*)v7 + 7) = 0i64;
				*((_QWORD*)v7 + 8) = 0i64;
			}
			else
			{
				v8 = 0i64;
			}
			v9 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 424) = v8;
			*(_QWORD*)(a1 + 440) = v8 + 16;
			*(_QWORD*)(a1 + 432) = v8;
			*(_QWORD*)(a1 + 448) = v8 + 32;
			*(_QWORD*)(a1 + 456) = v8 + 48;
			sub_140317EC0(*(_QWORD*)(v9 + 72), v8, (int**)(a1 + 1064));
			sub_140317EC0(*(_QWORD*)(*(_QWORD*)(a1 + 416) + 72i64) + 24i64, *(_QWORD*)(a1 + 440), (int**)(a1 + 1064));
			sub_140317EC0(*(_QWORD*)(*(_QWORD*)(a1 + 416) + 72i64) + 48i64, *(_QWORD*)(a1 + 448), (int**)(a1 + 1064));
			v5 = *(_QWORD*)(a1 + 456);
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 416) + 72i64) + 72i64;
			break;
		case 6:
			v2 = sub_14018B280(40i64, 0);
			if (v2)
			{
				v3 = (__int64)(v2 + 2);
				*v2 = 2;
				*((_QWORD*)v2 + 1) = 0i64;
				*((_QWORD*)v2 + 2) = 0i64;
				*((_QWORD*)v2 + 3) = 0i64;
				*((_QWORD*)v2 + 4) = 0i64;
			}
			else
			{
				v3 = 0i64;
			}
			v4 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 424) = v3;
			*(_QWORD*)(a1 + 432) = v3;
			*(_QWORD*)(a1 + 440) = v3 + 16;
			sub_140317EC0(*(_QWORD*)(v4 + 80), v3, (int**)(a1 + 1064));
			v5 = *(_QWORD*)(a1 + 440);
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 416) + 80i64) + 24i64;
			break;
		default:
		LABEL_28:
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
			return;
		}
		sub_140317EC0(v6, v5, (int**)(a1 + 1064));
		goto LABEL_28;
	}
}

