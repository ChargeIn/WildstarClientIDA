#include "../winhttp.h"

//----- (000000014085ED00) ----------------------------------------------------
__int64 __fastcall sub_14085ED00(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	unsigned int v5; // edi
	__int64 v6; // rcx
	unsigned int v7; // edx
	char v8; // al
	unsigned __int64 v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rsi
	__int64 v12; // rdx
	__int64 v13; // rcx
	__int64 result; // rax
	__int64 v15; // rdx
	int v16; // [rsp+50h] [rbp+8h] BYREF
	int v17; // [rsp+60h] [rbp+18h] BYREF

	v3 = *(_QWORD*)(a1 + 520);
	v5 = 2;
	if (v3)
		sub_1408514B0(v3, a1, 1);
	v6 = *(_QWORD*)(a1 + 528);
	if (v6)
		sub_1408514B0(v6, a1, 2);
	sub_1408514B0((__int64)word_140C10F30, a1, 0);
	v7 = *(_DWORD*)(a1 + 120);
	if (v7)
	{
		v5 = sub_14083C300(qword_140C61B80, v7, a1, (_DWORD*)(a1 + 8));
		if (v5 == 1)
		{
			v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 160) + 464i64))(
				*(_QWORD*)(a1 + 160),
				*(_QWORD*)(a1 + 176));
			*(_BYTE*)(a1 + 383) &= ~1u;
			v9 = *(_QWORD*)(a1 + 176);
			v10 = *(_QWORD*)(a1 + 160);
			*(_BYTE*)(a1 + 383) |= v8 & 1;
			*(_QWORD*)(a1 + 88) = 0i64;
			sub_14084D5F0(v10, (__int64*)(a1 + 88), v9, &v17, &v16, a1 + 448);
			*(_BYTE*)(a1 + 379) &= 0xF0u;
			v11 = *(_QWORD*)(a1 + 88);
			*(_BYTE*)(a1 + 379) |= v17 & 3 | (unsigned __int8)(4 * (v16 & 3));
			if (v11)
			{
				if (!*(_QWORD*)(v11 + 80))
					*(_QWORD*)(v11 + 80) = sub_14083EDE0(
						(LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 9552),
						*(_DWORD*)(v11 + 12));
				v12 = *(_QWORD*)(v11 + 80);
				v13 = *(_QWORD*)(a1 + 88);
				if (v12)
				{
					*(_DWORD*)(v13 + 16) = *(_DWORD*)(v12 + 40);
					*(_DWORD*)(*(_QWORD*)(a1 + 88) + 20i64) = *(_DWORD*)(v12 + 44);
					result = sub_140860120(a1, v12);
					v5 = result;
					if ((_DWORD)result != 1)
						return result;
				}
				else if (*(_DWORD*)(v13 + 12))
				{
					return 2i64;
				}
				sub_14085EB90(a1, a2);
			}
			else
			{
				*(_BYTE*)(a1 + 379) &= 0xFCu;
			}
			v15 = *(_QWORD*)(a1 + 504);
			if (v15)
			{
				if ((unsigned int)sub_14083A4B0(qword_140C61B98, v15, a1) == 2)
				{
					*(_QWORD*)(a1 + 504) = 0i64;
				}
				else
				{
					sub_140867BF0(*(_QWORD*)(a1 + 504), *(_DWORD*)(*(_QWORD*)(a1 + 160) + 24i64));
					sub_140867BE0(*(_QWORD*)(a1 + 504), *(_DWORD*)(a1 + 120));
				}
			}
			sub_1408563B0(*(_QWORD*)(a1 + 168), (__int64*)(a1 + 416), (_DWORD*)(a1 + 424), (unsigned __int64*)(a1 + 40));
		}
	}
	return v5;
}
// 140C10F30: using guessed type _WORD word_140C10F30[12];
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C61B98: using guessed type __int64 qword_140C61B98;

