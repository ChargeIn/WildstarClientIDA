#include "../winhttp.h"

//----- (000000014005DF40) ----------------------------------------------------
void __fastcall sub_14005DF40(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // r8
	__int64 i; // r9
	char v5; // al
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rsi
	__int64* v10; // r11
	__int64 v11; // rdx
	char v12; // r9
	__int64 v13; // r8
	__int64 v14; // r10
	_QWORD* v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rcx
	__int64 v18; // rax
	_QWORD* v19; // rax

	v1 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(v1 + 216);
	for (i = v1 + 184; v3 != i; v3 = *(_QWORD*)(v3 + 32))
	{
		v5 = *(_BYTE*)(v3 + 9);
		if ((v5 & 4) == 0 && (v5 & 3) == 0)
		{
			v6 = *(_QWORD*)(v3 + 16);
			if (*(int*)(v6 + 8) >= 4 && (*(_BYTE*)(*(_QWORD*)v6 + 9i64) & 3) != 0)
				sub_14005C960(v1, *(_QWORD*)v6);
		}
	}
	sub_14005D2C0(v1);
	v7 = *(_QWORD*)(v1 + 72);
	*(_QWORD*)(v1 + 72) = 0i64;
	*(_QWORD*)(v1 + 56) = v7;
	if ((*(_BYTE*)(a1 + 9) & 3) != 0)
		sub_14005C960(v1, a1);
	sub_14005DD80(v1);
	sub_14005D2C0(v1);
	*(_QWORD*)(v1 + 56) = *(_QWORD*)(v1 + 64);
	*(_QWORD*)(v1 + 64) = 0i64;
	sub_14005D2C0(v1);
	v8 = *(_QWORD*)(a1 + 32);
	v9 = 0i64;
	v10 = *(__int64**)(v8 + 176);
	v11 = *v10;
	while (*v10)
	{
		v12 = *(_BYTE*)(v11 + 9);
		if ((v12 & 3) != 0 && (v12 & 8) == 0)
		{
			v13 = *(_QWORD*)(v11 + 16);
			if (v13 && (*(_BYTE*)(v13 + 10) & 4) == 0)
			{
				v14 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 312i64);
				v15 = (_QWORD*)(*(_QWORD*)(v13 + 32)
					+ 40 * (*(int*)(v14 + 12) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(v13 + 11)) - 1)));
				while (*((_DWORD*)v15 + 6) != 4 || v15[2] != v14)
				{
					v15 = (_QWORD*)v15[4];
					if (!v15)
					{
						v15 = &unk_140A12138;
						break;
					}
				}
				if (*((_DWORD*)v15 + 2))
				{
					v18 = *(_QWORD*)(v11 + 32) + 48i64;
					*(_BYTE*)(v11 + 9) = v12 | 8;
					v9 += v18;
					*v10 = *(_QWORD*)v11;
					v19 = *(_QWORD**)(v8 + 80);
					if (v19)
					{
						*(_QWORD*)v11 = *v19;
						**(_QWORD**)(v8 + 80) = v11;
					}
					else
					{
						*(_QWORD*)v11 = v11;
					}
					*(_QWORD*)(v8 + 80) = v11;
					goto LABEL_24;
				}
				*(_BYTE*)(v13 + 10) |= 4u;
			}
			*(_BYTE*)(v11 + 9) |= 8u;
		}
		v10 = (__int64*)v11;
	LABEL_24:
		v11 = *v10;
	}
	sub_14005CA80(v1);
	v16 = v9 + sub_14005D2C0(v1);
	sub_14005D430(*(_QWORD*)(v1 + 72));
	*(_BYTE*)(v1 + 32) ^= 3u;
	*(_QWORD*)(v1 + 48) = v1 + 40;
	v17 = *(_QWORD*)(v1 + 120);
	*(_DWORD*)(v1 + 36) = 0;
	*(_BYTE*)(v1 + 33) = 2;
	*(_QWORD*)(v1 + 128) = v17 - v16;
}
// 14005DF98: variable 'v3' is possibly undefined
// 14005DF9F: variable 'i' is possibly undefined

