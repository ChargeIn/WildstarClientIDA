#include "../winhttp.h"

//----- (00000001400047C0) ----------------------------------------------------
__int64 __fastcall sub_1400047C0(__int64 a1, unsigned __int16** a2)
{
	unsigned __int64 v2; // rbx
	__int64 v3; // rsi
	unsigned __int16* v4; // r10
	_QWORD* v5; // r14
	__int64 i; // r11
	unsigned __int16* v7; // r9
	int v8; // edx
	__int64 v9; // r8
	int v10; // eax
	_QWORD* v11; // rax
	unsigned __int64 j; // rdi
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rcx
	_QWORD* v16; // rbx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rax

	v2 = *(_QWORD*)(a1 + 64);
	v3 = 0i64;
	if (v2)
	{
		v4 = *a2;
		v5 = (_QWORD*)(a1 + 56);
		for (i = *(_QWORD*)(a1 + 56); ; i += 8i64)
		{
			v7 = *(unsigned __int16**)(***(_QWORD***)i + 56i64);
			if (v7 == v4)
				break;
			if (v7)
			{
				if (v4)
				{
					v8 = *v7;
					v9 = 0i64;
					if (v8 == *v4)
					{
						while ((_WORD)v8)
						{
							v8 = v7[v9 + 1];
							v10 = v4[++v9];
							if (v8 != v10)
								goto LABEL_9;
						}
						break;
					}
				}
			}
		LABEL_9:
			if (++v3 >= v2)
				return 0i64;
		}
		v11 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + 8 * v3);
		for (j = 0i64; j < v11[1]; v11 = *(_QWORD**)(*v5 + 8 * v3))
		{
			v13 = *(_QWORD*)(*v11 + 8 * j);
			if (v13)
			{
				v14 = *(_QWORD*)(v13 + 64);
				if (v14)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
				v15 = *(_QWORD*)(v13 + 56);
				if (v15)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
				sub_14018B900(v13, 0);
			}
			++j;
		}
		*(_QWORD*)(*(_QWORD*)(*v5 + 8 * v3) + 8i64) = 0i64;
		v16 = *(_QWORD**)(*v5 + 8 * v3);
		if (v16)
		{
			if (*v16)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v16 - 16i64) + 8i64))(*v16 - 16i64);
			sub_14018B900((__int64)v16, 0);
		}
		sub_140007270((__int64)v5, v3);
		if (qword_140C65898)
		{
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "AccountPendingItemsUpdate", &unk_1409D138E);
			v17 = *(_QWORD*)(qword_140C65898 + 32736);
			if (v17)
				sub_1400EA3E0(*(_QWORD*)(v17 + 96), "AccountPendingItemsUpdate", &unk_1409D013F);
		}
		v18 = qword_140C66DA8;
		v19 = qword_140C66DA8;
		if (qword_140C66DA8)
		{
			while (*(_DWORD*)(v19 + 368) == 5)
			{
				v19 = *(_QWORD*)(v19 + 176);
				if (!v19)
					return 0i64;
			}
			if (qword_140C66DA8)
			{
				do
				{
					if (*(_DWORD*)(v18 + 368) != 5)
						break;
					v18 = *(_QWORD*)(v18 + 176);
				} while (v18);
			}
			sub_1400EA3E0(*(_QWORD*)(v18 + 72), "AccountItemUpdate", &unk_1409D014B);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

