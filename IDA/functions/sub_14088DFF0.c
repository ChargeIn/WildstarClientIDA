#include "../winhttp.h"

//----- (000000014088DFF0) ----------------------------------------------------
__int64 __fastcall sub_14088DFF0(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4, __int64 a5, int a6, char a7)
{
	__int64 v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rsi
	__int64 v14; // rcx
	int v15; // ebx
	__int64 v16; // rcx
	int v18; // eax
	unsigned int v19; // edx
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64 v22; // r14
	int v23; // ebx
	char v24; // al
	__int64 v25; // rax
	__int64 v26; // rax
	__int64 v27; // rax
	__int64 v28; // rax
	__int64 v29; // rcx

	v11 = sub_1408819F0(dword_140C10F20, 48i64);
	v12 = v11;
	if (!v11)
		return 2i64;
	*(_QWORD*)(v11 + 8) = 0i64;
	v13 = sub_1408819F0(dword_140C10F20, 32i64);
	if (v13)
	{
		*(_DWORD*)(v12 + 16) = *a4;
		v18 = a4[1];
		*(_QWORD*)(v12 + 24) = a5;
		*(_DWORD*)(v12 + 20) = v18;
		v19 = a4[4] * (dword_140C110B4 / 0x3E8u);
		*(_DWORD*)(v12 + 36) = a6;
		*(_DWORD*)(v12 + 32) = v19;
		if (a3)
		{
			++* (_DWORD*)(a3 + 80);
			*(_QWORD*)(a3 + 112) = a5;
			v20 = *(_QWORD*)(v12 + 8);
			*(_QWORD*)(v12 + 8) = a3;
			if (v20)
				sub_14088B630(v20);
			v21 = sub_14088C260(a3, 0i64);
			v22 = v21;
			if (v21)
			{
				v23 = sub_140891630(v21);
				*(_DWORD*)(v12 + 40) = sub_1408922F0(v22) + v23;
			}
			else
			{
				*(_DWORD*)(v12 + 40) = 0;
			}
		}
		if (!a7 || (v24 = 1, !a4[5]))
			v24 = 0;
		*(_BYTE*)(v12 + 44) = v24;
		v25 = *(_QWORD*)(a1 + 64);
		if (v25)
		{
			*(_QWORD*)v12 = v25;
			*(_QWORD*)(a1 + 64) = v12;
		}
		else
		{
			*(_QWORD*)(a1 + 64) = v12;
			*(_QWORD*)v12 = 0i64;
		}
		*(_DWORD*)(v13 + 8) = 0;
		v26 = sub_1408904A0(a2, 0);
		v27 = sub_14088FAE0((_QWORD*)(a2 + 264), a5 - v26);
		*(_QWORD*)(v13 + 16) = v12;
		*(_QWORD*)v13 = v27;
		v28 = *(_QWORD*)(a2 + 264);
		v29 = *(_QWORD*)(v28 + 16);
		if (v29)
		{
			*(_QWORD*)(v13 + 24) = v29;
			*(_QWORD*)(v28 + 16) = v13;
		}
		else
		{
			*(_QWORD*)(v28 + 16) = v13;
			*(_QWORD*)(v13 + 24) = 0i64;
		}
		return 1i64;
	}
	else
	{
		v14 = *(_QWORD*)(v12 + 8);
		v15 = dword_140C10F20;
		*(_QWORD*)(v12 + 8) = 0i64;
		if (v14)
			sub_14088B630(v14);
		v16 = *(_QWORD*)(v12 + 8);
		if (v16)
		{
			sub_14088B630(v16);
			*(_QWORD*)(v12 + 8) = 0i64;
		}
		sub_140881720(v15, v12);
		return 2i64;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C110B4: using guessed type int dword_140C110B4;

