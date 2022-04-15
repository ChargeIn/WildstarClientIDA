#include "../winhttp.h"

//----- (000000014077A5C0) ----------------------------------------------------
void __fastcall sub_14077A5C0(__int64 a1)
{
	unsigned int v1; // r14d
	float v3; // xmm6_4
	int v4; // ebp
	unsigned __int64 v5; // rsi
	__int64 v6; // rdi
	__int64(__fastcall * v7)(wchar_t**, _QWORD, __int64); // r9
	unsigned int v8; // esi
	__int64 v9; // rax
	__int64 v10; // r9
	unsigned int v11; // r8d
	unsigned int v12; // edi
	__int64 v13; // rax
	__int64 v14; // r9
	unsigned int v15; // r8d
	__int64 v17; // rdi
	__int64 v18; // rsi
	float v19; // xmm1_4
	__int128 v20; // [rsp+60h] [rbp-48h] BYREF
	__int128 v21; // [rsp+70h] [rbp-38h] BYREF

	v1 = 0;
	v3 = *(float*)(a1 + 176);
	*(float*)(a1 + 176) = (float)((float)*(int*)(a1 + 164) * *(float*)(a1 + 184)) + v3;
	if (*(_DWORD*)(a1 + 188))
	{
		while (1)
		{
			v4 = 0;
			v5 = 0i64;
			v6 = a1 + 192;
			do
			{
				if (*(_DWORD*)(v6 + 8)
					&& !*(_DWORD*)(v6 + 12)
					&& *(float*)v6 <= *(float*)(a1 + 176)
					&& v3 <= *(float*)(v6 + 4))
				{
					v4 = 1;
					*(_DWORD*)(v6 + 12) = 1;
					*(_DWORD*)(v6 + 16) = 1;
					sub_1407797A0(a1, 1, v5 != 0);
				}
				++v5;
				v6 += 24i64;
			} while (v5 < 2);
			if (v4)
				goto LABEL_38;
			if (*(_QWORD*)(a1 + 48))
				goto LABEL_19;
			v7 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			v8 = *(_DWORD*)(*(_QWORD*)(a1 + 144) + 84i64);
			if (qword_140C63840)
				break;
			if (dword_140C64C04)
				goto LABEL_20;
			if ((int)sub_140248CA0() >= 0)
			{
				v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, v8);
				goto LABEL_16;
			}
		LABEL_19:
			v7 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		LABEL_20:
			if (!*(_QWORD*)(a1 + 56))
			{
				v12 = *(_DWORD*)(*(_QWORD*)(a1 + 144) + 64i64);
				if (v7)
				{
					v13 = v7(off_140A6DFF8, v12, qword_140C63858);
				LABEL_26:
					if (v13)
					{
						v15 = *(_DWORD*)(a1 + 112);
						if (v15)
						{
							v21 = 0i64;
							sub_1405787D0((__int64)&v21, 0, v15, v14, v13, 0i64, 0i64, 0, (_QWORD*)(a1 + 56), &v21, 0);
						}
					}
					goto LABEL_29;
				}
				if (!dword_140C64C04 && (int)sub_140248CA0() >= 0)
				{
					v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, v12);
					goto LABEL_26;
				}
			}
		LABEL_29:
			while (*(_QWORD*)(a1 + 16))
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 32i64))(*(_QWORD*)(a1 + 16));
			while (*(_QWORD*)(a1 + 24))
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24));
			while (*(_QWORD*)(a1 + 32))
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 32i64))(*(_QWORD*)(a1 + 32));
			while (*(_QWORD*)(a1 + 40))
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 32i64))(*(_QWORD*)(a1 + 40));
			sub_140779660(a1, 0i64);
		LABEL_38:
			if ((*(_DWORD*)(a1 + 188))-- == 1)
				goto LABEL_39;
		}
		v9 = qword_140C63840(off_140A6DFF8, v8, qword_140C63858);
	LABEL_16:
		if (v9)
		{
			v11 = *(_DWORD*)(a1 + 108);
			if (v11)
			{
				v20 = 0i64;
				sub_1405787D0((__int64)&v20, 0, v11, v10, v9, 0i64, 0i64, 0, (_QWORD*)(a1 + 48), &v20, 0);
			}
		}
		goto LABEL_19;
	}
LABEL_39:
	v17 = a1 + 204;
	v18 = 2i64;
	do
	{
		if (*(float*)(v17 - 8) < *(float*)(a1 + 176))
			*(_DWORD*)(v17 + 4) = 1;
		if (*(_DWORD*)(v17 - 4))
		{
			if (*(_DWORD*)(v17 + 4))
			{
				if (!*(_DWORD*)v17)
				{
					sub_140779660(a1, 0i64);
					goto LABEL_50;
				}
			}
			else if (!*(_DWORD*)v17)
			{
				goto LABEL_50;
			}
			v19 = *(float*)(v17 + 8);
			if (v19 < 100.0)
				*(float*)(v17 + 8) = (float)*(int*)(a1 + 164) + v19;
		}
	LABEL_50:
		v17 += 24i64;
		--v18;
	} while (v18);
	if (*(float*)(a1 + 176) >= 1.0)
	{
		if ((!*(_DWORD*)(a1 + 200) || *(_DWORD*)(a1 + 204)) && (!*(_DWORD*)(a1 + 224) || *(_DWORD*)(a1 + 228)))
			v1 = 1;
		sub_140779660(a1, v1);
	}
}
// 14077A8B3: conditional instruction was optimized away because eax.4!=0
// 14077A725: variable 'v10' is possibly undefined
// 14077A7C4: variable 'v14' is possibly undefined
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C64C04: using guessed type int dword_140C64C04;

