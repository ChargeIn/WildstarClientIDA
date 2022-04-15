#include "../winhttp.h"

//----- (0000000140842230) ----------------------------------------------------
void __fastcall sub_140842230(__int64 a1, char a2)
{
	int v4; // ebx
	unsigned __int64 v5; // [rsp+20h] [rbp-28h]
	__m128i v6; // [rsp+30h] [rbp-18h] BYREF

	EnterCriticalSection(&stru_140C62878);
	if (a2)
	{
		*(_DWORD*)(a1 + 116) = 0;
	}
	else if (_InterlockedAdd((volatile signed __int32*)(a1 + 116), 0xFFFFFFFF) > 0)
	{
	LABEL_8:
		LeaveCriticalSection(&stru_140C62878);
		return;
	}
	sub_140842C40(qword_140C61B58, a1);
	if (*(int*)(a1 + 112) > 0)
		goto LABEL_8;
	LODWORD(v5) = *(_DWORD*)(a1 + 24);
	v6 = (__m128i)v5;
	sub_140868DC0(qword_140C61B58 + 1776, &v6);
	LeaveCriticalSection(&stru_140C62878);
	sub_1408425E0(a1);
	sub_140842DF0(a1);
	v4 = dword_140C10F20;
	if ((*(_BYTE*)(a1 + 120) & 2) != 0)
	{
		sub_140881720(dword_140C10F20, *(_QWORD*)(a1 + 64));
		*(_BYTE*)(a1 + 120) &= ~2u;
	}
	*(_QWORD*)(a1 + 64) = 0i64;
	sub_140881720(v4, a1);
}
// 1408422A6: variable 'v5' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B58: using guessed type __int64 qword_140C61B58;
// 140842230: using guessed type __m128i var_18;

