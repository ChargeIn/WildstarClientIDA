#include "../winhttp.h"

//----- (00000001401A7C70) ----------------------------------------------------
__int64 __fastcall sub_1401A7C70(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	_QWORD* v5; // rax
	__int64 v6; // rdx
	char* v8; // rsi
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // rbp
	unsigned __int64 v11; // rdx
	char* v12; // rcx
	__int64 v13; // rdi
	char v14; // r9
	__int16 v15; // r8
	char v16; // r10
	char v17; // r8
	char v18; // r10
	__int64 v19; // rax
	int* v20; // rax
	_WORD* i; // rdx
	_QWORD* v22; // rax
	__int64 v23; // rdx
	__int64 v24; // [rsp+50h] [rbp+8h] BYREF

	sub_1401A59A0(a1);
	*(_DWORD*)(a1 + 92) = 0;
	v4 = *(_QWORD*)(a1 + 104);
	*(_QWORD*)(a1 + 104) = 0i64;
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	sub_14018B900(*(_QWORD*)(a1 + 112), 0);
	*(_QWORD*)(a1 + 112) = 0i64;
	if (a2)
	{
		v8 = (char*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 24i64))(a2);
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v10 = v9;
		if (!v9)
			goto LABEL_48;
		if (v9 >= 3 && *v8 == 239 && v8[1] == 187 && v8[2] == 191)
		{
			v8 += 3;
			*(_BYTE*)(a1 + 88) = 1;
			v10 = v9 - 3;
		}
		else
		{
			*(_BYTE*)(a1 + 88) = 0;
		}
		v11 = v10;
		v12 = v8;
		if (!v8 && v10)
			return sub_1401A81B0(a1, 0x80070057, 0i64);
		v13 = 0i64;
		if (v10)
		{
			while (1)
			{
				v14 = *v12;
				if (*v12 >= 0)
				{
					++v12;
					v15 = v14;
					--v11;
					goto LABEL_30;
				}
				if (v11 > 1 && (v14 & 0xE0) == 0xC0)
				{
					v16 = v12[1];
					if ((v16 & 0xC0) == 0x80)
						break;
				}
				if (v11 > 2 && (v14 & 0xF0) == 0xE0)
				{
					v17 = v12[1];
					if ((v17 & 0xC0) == 0x80)
					{
						v18 = v12[2];
						if ((v18 & 0xC0) == 0x80)
						{
							v12 += 3;
							v15 = v18 & 0x3F | (((unsigned __int16)(v14 << 6) | v17 & 0x3F) << 6);
							v11 -= 3i64;
						LABEL_30:
							++v13;
							if (!v15)
								goto LABEL_34;
							goto LABEL_33;
						}
					}
				}
				++v12;
				--v11;
			LABEL_33:
				if (!v11)
					goto LABEL_34;
			}
			v12 += 2;
			v15 = v16 & 0x3F | ((v14 & 0x1F) << 6);
			v11 -= 2i64;
			goto LABEL_30;
		}
	LABEL_34:
		v19 = 2 * (v13 + 1);
		if (!is_mul_ok(v13 + 1, 2ui64))
			v19 = -1i64;
		v20 = sub_14018B280(v19, 0);
		*(_QWORD*)(a1 + 112) = v20;
		sub_14018EA30(v8, v10, (__int64)v20, v13, 0i64);
		*(_WORD*)(*(_QWORD*)(a1 + 112) + 2 * v13) = 0;
		for (i = *(_WORD**)(a1 + 112); *i == 32 || (unsigned __int16)(*i - 9) <= 4u; ++i)
			;
		if (*i)
		{
			(*(void(__fastcall**)(__int64, _WORD*, _QWORD))(*(_QWORD*)a1 + 128i64))(a1, i, 0i64);
		}
		else
		{
		LABEL_48:
			if (*(int*)(a1 + 92) >= 0)
			{
				*(_DWORD*)(a1 + 92) = -1603862513;
				v22 = sub_14018D540(&v24, (__int64)L"%0.8x", 2691104783i64);
				v23 = *(_QWORD*)(a1 + 104);
				*(_QWORD*)(a1 + 104) = *v22;
				*v22 = v23;
				if (v24)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
			}
		}
		return *(unsigned int*)(a1 + 92);
	}
	if (*(int*)(a1 + 92) >= 0)
	{
		*(_DWORD*)(a1 + 92) = -1603862525;
		v5 = sub_14018D540(&v24, (__int64)L"%0.8x", 2691104771i64);
		v6 = *(_QWORD*)(a1 + 104);
		*(_QWORD*)(a1 + 104) = *v5;
		*v5 = v6;
		if (v24)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
	}
	return *(unsigned int*)(a1 + 92);
}
// 140A45318: using guessed type wchar_t a08x_2[6];

