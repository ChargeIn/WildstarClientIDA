#include "../winhttp.h"

//----- (00000001407BCD40) ----------------------------------------------------
__int64 __fastcall sub_1407BCD40(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 v4; // rbp
	int* v5; // rdi
	int* v6; // r8
	__int128* v7; // rax
	int i; // ecx
	__int128 v9; // xmm0
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // r10
	int* v13; // rdx
	__int64 v14; // r9
	int v15; // ecx
	__int128* v16; // rax
	__int128 v17; // xmm0
	__int64 result; // rax

	v2 = qword_140C7F898;
	v4 = qword_140C7F898 + 1;
	v5 = sub_14018DB00(qword_140C7F890, qword_140C7F898 + 1, 64i64);
	v6 = &v5[16 * v2];
	if (v6)
	{
		v7 = (__int128*)a2;
		for (i = 2; i >= 0; --i)
		{
			v9 = *v7++;
			*(__int128*)((char*)v7 + (_QWORD)v6 - a2 - 16) = v9;
		}
		v6[12] = *(_DWORD*)(a2 + 48);
	}
	v10 = qword_140C7F890;
	if ((int*)qword_140C7F890 != v5)
	{
		v11 = qword_140C7F898;
		v12 = 0i64;
		if (qword_140C7F898)
		{
			v13 = v5;
			do
			{
				if (v13)
				{
					v14 = v10 + (char*)v13 - (char*)v5;
					v15 = 2;
					v16 = (__int128*)v14;
					do
					{
						--v15;
						v17 = *v16++;
						*(__int128*)((char*)v16 + (_QWORD)v13 - v14 - 16) = v17;
					} while (v15 >= 0);
					v13[12] = *(_DWORD*)(v14 + 48);
					v11 = qword_140C7F898;
					v10 = qword_140C7F890;
				}
				++v12;
				v13 += 16;
			} while (v12 < v11);
		}
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
		qword_140C7F890 = (__int64)v5;
	}
	result = v2;
	qword_140C7F898 = v4;
	return result;
}
// 140C7F890: using guessed type __int64 qword_140C7F890;
// 140C7F898: using guessed type __int64 qword_140C7F898;

