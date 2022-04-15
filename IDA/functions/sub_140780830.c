#include "../winhttp.h"

//----- (0000000140780830) ----------------------------------------------------
void __fastcall sub_140780830(__int64 a1, int a2, _OWORD* a3, _DWORD* a4, int a5)
{
	__int64 v8; // rsi
	__int64 v9; // rcx
	unsigned __int64 v10; // rdi
	_DWORD* v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // r9
	__int64 v17; // rcx
	__int64 v18; // r8
	__int64 v19; // r9

	v8 = sub_1403D90D0(qword_140C65898, a2);
	if (v8)
	{
		v9 = qword_140C7E688;
		if (!qword_140C7E688)
		{
			qword_140C7E688 = (__int64)sub_14018B280(16768i64, 0);
			sub_1407E4830((int*)qword_140C7E688, 0i64, 0x4180ui64);
			v9 = qword_140C7E688;
		}
		v10 = 0i64;
		v11 = (_DWORD*)v9;
		while (*v11 != a2)
		{
			++v10;
			v11 += 524;
			if (v10 >= 8)
				goto LABEL_9;
		}
		v12 = v9 + 2096 * v10;
		if (v12)
			goto LABEL_10;
	LABEL_9:
		v12 = sub_1407806E0(v9, a2);
		if (!v12)
			return;
	LABEL_10:
		v13 = v12 + 32 * (*(_QWORD*)(v12 + 2080) + 33i64);
		*(_OWORD*)v13 = *(_OWORD*)(v8 + 4576);
		*(_DWORD*)(v13 + 16) = *(_DWORD*)(v8 + 4416);
		*(_DWORD*)(v13 + 20) = *(_DWORD*)(v8 + 4420);
		*(_DWORD*)(v13 + 24) = *(_DWORD*)(v8 + 4424);
		*(float*)(v13 + 28) = (float)(int)sub_14018CDF0() * 0.001;
		v14 = v12 + 32 * (*(_QWORD*)(v12 + 2080) + 1i64);
		*(_OWORD*)v14 = *a3;
		*(_DWORD*)(v14 + 16) = *a4;
		*(_DWORD*)(v14 + 20) = a4[1];
		*(_DWORD*)(v14 + 24) = a4[2];
		*(_DWORD*)(v14 + 28) = a5;
		v15 = *(unsigned int*)(v12 + 16);
		v16 = ((unsigned __int8)*(_QWORD*)(v12 + 2080) + 1) & 0x1F;
		*(_QWORD*)(v12 + 2080) = v16;
		if ((_DWORD)v15)
		{
			v17 = (unsigned int)(v15 - 1);
			if ((_DWORD)v17)
				DebugBreak();
			sub_140780D00(v17, v12);
		}
		else
		{
			v18 = v16;
			if (*(float*)(32 * v16 + v12 + 1084) == 0.0)
			{
				do
					v18 = ((_BYTE)v18 + 1) & 0x1F;
				while (*(float*)(32i64 * (unsigned int)v18 + v12 + 1084) == 0.0);
			}
			v19 = ((_BYTE)v16 - 1) & 0x1F;
			if (v18 != v19)
				sub_140780D90(v15, v12, v18, v19);
		}
	}
}
// 14078098C: variable 'v17' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7E688: using guessed type __int64 qword_140C7E688;

