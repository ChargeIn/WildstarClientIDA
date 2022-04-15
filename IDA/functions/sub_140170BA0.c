#include "../winhttp.h"

//----- (0000000140170BA0) ----------------------------------------------------
__int64 __fastcall sub_140170BA0(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rdx
	int* v5; // rcx
	__int64 v6; // r9
	__int64 v7; // rbp
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // r14
	int* v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rdx
	unsigned int v14; // ebp
	__int64 v15; // rbx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rbx
	__int64 v19; // rdx
	__int64 result; // rax
	int v21; // [rsp+20h] [rbp-38h]

	v5 = sub_14018B280(80i64, 0);
	if (v5)
	{
		v6 = a1[202];
		if (!v6)
			v6 = a1[87];
		v7 = sub_14016C870((__int64)v5, v4, *(_DWORD*)(a2 + 64), v6, v21, *(_DWORD*)(a2 + 76), (unsigned int*)(a2 + 84));
	}
	else
	{
		v7 = 0i64;
	}
	v8 = a1[175];
	v9 = sub_14018DB00(a1[174], v8 + 1, 8i64);
	v10 = v9;
	*(_QWORD*)&v9[2 * v8] = v7;
	v11 = (int*)a1[174];
	if (v11 != v9)
	{
		sub_1407DB590(v9, v11, 8i64 * a1[175]);
		v12 = a1[174];
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
		a1[174] = v10;
	}
	a1[175] = v8 + 1;
	v13 = *(_QWORD*)(a2 + 8);
	v14 = v8;
	v15 = *(_QWORD*)(8i64 * (int)v8 + a1[174]);
	if (v13)
	{
		v17 = *(_QWORD*)(v15 + 16);
		v18 = v15 + 16;
		if (v17)
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v17 + 56i64))(v17, v13, -1i64);
		else
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
				qword_140C65680,
				MEMORY[0x60],
				*(_QWORD*)(a2 + 8),
				-1i64,
				v18);
	}
	else
	{
		v16 = *(_QWORD*)(v15 + 16);
		if (v16)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
			*(_QWORD*)(v15 + 16) = 0i64;
		}
	}
	v19 = a1[4];
	if (v19)
		sub_140109710((__int64*)(*(_QWORD*)(a1[174] + 8i64 * (int)v14) + 24i64), v19 + 240, *(__m128i**)(a2 + 40), 0);
	result = v14;
	*(_BYTE*)(*(_QWORD*)(a1[174] + 8i64 * (int)v14) + 1i64) = *(_BYTE*)(a2 + 80);
	*(_DWORD*)(*(_QWORD*)(a1[174] + 8i64 * (int)v14) + 8i64) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(*(_QWORD*)(a1[174] + 8i64 * (int)v14) + 12i64) = *(_DWORD*)(a2 + 72);
	return result;
}
// 140170BF7: variable 'v4' is possibly undefined
// 140170BF7: variable 'v21' is possibly undefined
// 140C65680: using guessed type __int64 qword_140C65680;

