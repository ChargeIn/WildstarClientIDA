#include "../winhttp.h"

//----- (00000001408601D0) ----------------------------------------------------
__int64 __fastcall sub_1408601D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rdx
	char v9; // al
	unsigned int v10; // edx
	__int64 v11; // rsi
	int v12; // ecx
	int v13; // ebx
	__int64 v14; // rbx
	__int64 v15; // rdx
	void(__fastcall * **v16)(_QWORD, _QWORD); // rbx
	int v17; // esi
	__int64 v18; // rdx
	__int64 v19; // rcx
	char v20; // bl
	__int64 result; // rax
	__int64 v22; // rcx
	__int64 v23; // rbx
	int v24; // edi

	sub_14085E090(a1, a2, a3, a4);
	v5 = *(_QWORD*)(a1 + 504);
	if (v5)
	{
		if ((*(_DWORD*)(v5 + 40) & 2) != 0)
		{
			v6 = sub_14084EB00(*(_QWORD*)(a1 + 160));
			*(_QWORD*)(v6 + 8) = 0i64;
			*(_DWORD*)v6 = 0;
		}
		sub_14083A6D0((__int64**)qword_140C61B98, *(_QWORD*)(a1 + 504), a1);
		*(_QWORD*)(a1 + 504) = 0i64;
		*(_DWORD*)(a1 + 512) = 0;
	}
	v7 = *(_QWORD*)(a1 + 128);
	if (v7)
		sub_14083B060(qword_140C61B70, v7, a1 + 16);
	v8 = *(_QWORD*)(a1 + 136);
	if (v8)
		sub_14083B060(qword_140C61B70, v8, a1 + 16);
	v9 = *(_BYTE*)(a1 + 381);
	if ((v9 & 1) != 0)
		*(_BYTE*)(a1 + 381) = v9 & 0xFE;
	v10 = *(_DWORD*)(a1 + 120);
	if (v10)
		sub_14083C1C0(qword_140C61B80, v10);
	v11 = *(_QWORD*)(a1 + 176);
	if (v11)
	{
		v12 = *(_DWORD*)(v11 + 136) ^ (*(_DWORD*)(v11 + 136) ^ (*(_DWORD*)(v11 + 136) - 1)) & 0x3FFFFFFF;
		*(_DWORD*)(v11 + 136) = v12;
		if ((v12 & 0x3FFFFFFF) == 0)
		{
			v13 = dword_140C10F20;
			sub_14084BD30(v11);
			sub_140881720(v13, v11);
		}
	}
	v14 = *(_QWORD*)(a1 + 88);
	if (v14)
	{
		if (!*(_QWORD*)(v14 + 80))
			*(_QWORD*)(v14 + 80) = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 9552), *(_DWORD*)(v14 + 12));
		v15 = *(_QWORD*)(v14 + 80);
		if (v15)
			sub_1408604C0(a1, v15);
		v16 = *(void(__fastcall****)(_QWORD, _QWORD))(a1 + 88);
		v17 = dword_140C10F20;
		if (v16)
		{
			(**v16)(*(_QWORD*)(a1 + 88), 0i64);
			sub_140881720(v17, (__int64)v16);
		}
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	v18 = *(_QWORD*)(a1 + 48);
	if (v18)
	{
		*(_QWORD*)(a1 + 56) = v18;
		sub_140881720(dword_140C10F20, v18);
		*(_QWORD*)(a1 + 48) = 0i64;
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_DWORD*)(a1 + 64) = 0;
	}
	sub_14085FE50(*(_QWORD*)(a1 + 160), a1);
	if (*(_QWORD*)(a1 + 416))
	{
		sub_140856790(*(_QWORD*)(a1 + 168));
		*(_QWORD*)(a1 + 416) = 0i64;
	}
	v19 = *(_QWORD*)(a1 + 40);
	if (v19)
	{
		sub_140841FE0(v19, 0);
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	v20 = BYTE1(*(_DWORD*)(*(_QWORD*)(a1 + 168) + 16i64)) & 1;
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 160) + 16i64))(*(_QWORD*)(a1 + 160));
	v22 = *(_QWORD*)(a1 + 496);
	if (v22)
	{
		result = sub_1408707F0(v22);
		*(_QWORD*)(a1 + 496) = 0i64;
	}
	if (v20)
	{
		v23 = *(_QWORD*)(a1 + 168);
		v24 = dword_140C10F20;
		if (v23)
		{
			sub_1408562D0(v23);
			return sub_140881720(v24, v23);
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B70: using guessed type __int64 qword_140C61B70;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C61B98: using guessed type __int64 qword_140C61B98;

