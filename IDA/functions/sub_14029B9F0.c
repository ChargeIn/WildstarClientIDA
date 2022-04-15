#include "../winhttp.h"

//----- (000000014029B9F0) ----------------------------------------------------
__int64 __fastcall sub_14029B9F0(__int64 a1, __m128i* a2)
{
	const __m128i* v4; // rax
	__int64 v5; // rbx
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rbx
	unsigned int v10; // edi
	__int64 v11; // rdx
	int v12; // eax
	void(__fastcall * *v13)(_QWORD); // rax
	void(__fastcall * **v14)(_QWORD); // rcx
	int v15; // eax
	unsigned int v16; // ebx
	__int64 v17; // rbx
	unsigned __int64 v18; // r14
	int** v19; // rsi
	int* v20; // rax
	int* v21; // rcx
	__int64 v22; // rcx
	__int64* v23; // rcx
	__int64 v24; // rax
	int v25; // [rsp+30h] [rbp-30h] BYREF
	int v26; // [rsp+34h] [rbp-2Ch]
	__int64 v27; // [rsp+38h] [rbp-28h]
	__int64(__fastcall * v28)(__int64); // [rsp+40h] [rbp-20h]
	__int64 v29; // [rsp+48h] [rbp-18h]
	int v30; // [rsp+50h] [rbp-10h]
	void(__fastcall * **v31)(_QWORD); // [rsp+90h] [rbp+30h] BYREF
	__int64 v32; // [rsp+A0h] [rbp+40h] BYREF

	*(_DWORD*)(a1 + 88) = -2147483638;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 48) = sub_14018E9C0(a2->m128i_i32);
	v4 = sub_1407DD8D8(a2, 0x2Eu);
	v5 = (__int64)v4;
	if (!v4)
		return sub_14029C120(a1, -2147467259);
	if ((unsigned int)sub_14018E2C0((__int64)v4, L".tex"))
	{
		if ((unsigned int)sub_14018E2C0(v5, L".tga"))
		{
			if ((unsigned int)sub_14018E2C0(v5, L".dds"))
			{
				if ((unsigned int)sub_14018E2C0(v5, L".png"))
				{
					if ((unsigned int)sub_14018E2C0(v5, L".bmp"))
					{
						if ((unsigned int)sub_14018E2C0(v5, L".jpg") && (unsigned int)sub_14018E2C0(v5, L".jpeg"))
							return sub_14029C120(a1, -2147467259);
						*(_DWORD*)(a1 + 56) = 5;
					}
					else
					{
						*(_DWORD*)(a1 + 56) = 4;
					}
				}
				else
				{
					*(_DWORD*)(a1 + 56) = 3;
				}
			}
			else
			{
				*(_DWORD*)(a1 + 56) = 2;
			}
		}
		else
		{
			*(_DWORD*)(a1 + 56) = 1;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 56) = 0;
	}
	if (!*(_DWORD*)(a1 + 56))
	{
		v32 = 0i64;
		v8 = sub_1401B5B50(*(__int64*)&qword_140C63788, a2, 1i64, 3, &v32);
		v9 = v32;
		if (v8 < 0)
			goto LABEL_19;
		if ((unsigned __int64)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v32 + 24i64))(v32) < 0x70)
		{
			v10 = sub_14029C120(a1, -2147467259);
			goto LABEL_27;
		}
		v8 = sub_1401C5690(112i64, (int**)(a1 + 64), 0);
		if (v8 < 0)
		{
		LABEL_19:
			v10 = sub_14029C120(a1, v8);
		LABEL_27:
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			return v10;
		}
		v11 = *(_QWORD*)(a1 + 64);
		v31 = 0i64;
		v12 = (*(__int64(__fastcall**)(__int64, __int64, void(__fastcall****)(_QWORD), _QWORD))(*(_QWORD*)v9 + 88i64))(
			v9,
			v11,
			&v31,
			0i64);
		if (v12 < 0
			|| (v28 = sub_14029BF30,
				v25 = 12,
				v26 = 2,
				v27 = a1,
				v29 = 0i64,
				v30 = 1,
				v12 = sub_14019DCA0((__int64)&v25, 0, v31, (int**)(a1 + 80)),
				v12 < 0))
		{
			v10 = sub_14029C120(a1, v12);
			if (v31)
				(*v31)[1](v31);
			goto LABEL_27;
		}
		if (v31)
			(*v31)[1](v31);
		v13 = *(void(__fastcall***)(_QWORD))v9;
		v14 = (void(__fastcall***)(_QWORD))v9;
		goto LABEL_40;
	}
	v31 = 0i64;
	v15 = sub_1401B6DE0(v7, a2, (int**)(a1 + 64), (__int64)&v31, 0i64);
	if (v15 >= 0)
	{
		v28 = sub_14029C040;
		v25 = 12;
		v26 = 2;
		v27 = a1;
		v29 = 0i64;
		v30 = 1;
		v15 = sub_14019DCA0((__int64)&v25, 0, v31, (int**)(a1 + 80));
		if (v15 >= 0)
		{
			v14 = v31;
			if (!v31)
			{
			LABEL_41:
				v17 = *(_QWORD*)(a1 + 16) + 6160i64;
				if (*(_QWORD*)v17 == *(_QWORD*)(*(_QWORD*)(a1 + 16) + 6168i64))
					sub_1400290D0(v17);
				v18 = (*(__int64(__fastcall**)(__int64))(v17 + 24))(a1 + 48);
				v19 = (int**)(*(_QWORD*)(v17 + 16) + 8 * (v18 % *(_QWORD*)(v17 + 8)));
				v20 = sub_14018B280(32i64, 0);
				if (v20)
				{
					v21 = *v19;
					*(_QWORD*)v20 = v18;
					*((_QWORD*)v20 + 1) = v21;
					v22 = *(_QWORD*)(a1 + 48);
					*((_QWORD*)v20 + 3) = a1;
					*((_QWORD*)v20 + 2) = v22;
				}
				else
				{
					v20 = 0i64;
				}
				*v19 = v20;
				++* (_QWORD*)v17;
				v23 = (__int64*)(*(_QWORD*)(a1 + 16) + 6152i64);
				if (!*(_QWORD*)(a1 + 144))
				{
					*(_QWORD*)(a1 + 144) = v23;
					*(_QWORD*)(a1 + 152) = *v23;
					*v23 = a1;
					v24 = *(_QWORD*)(a1 + 152);
					if (v24)
						*(_QWORD*)(v24 + 144) = a1 + 152;
				}
				return 0i64;
			}
			v13 = *v31;
		LABEL_40:
			v13[1](v14);
			goto LABEL_41;
		}
	}
	v16 = sub_14029C120(a1, v15);
	if (v31)
		(*v31)[1](v31);
	return v16;
}
// 14029BC76: variable 'v7' is possibly undefined
// 140AEAD58: using guessed type wchar_t aJpeg_0[6];
// 140AEAD68: using guessed type wchar_t aJpg_1[5];
// 140AEAD78: using guessed type wchar_t aBmp_2[5];
// 140AEAD88: using guessed type wchar_t aPng_2[5];
// 140AEAD98: using guessed type wchar_t aDds_1[5];
// 140AEADA8: using guessed type wchar_t aTga_2[5];
// 140AEADB8: using guessed type wchar_t aTex_7[5];

