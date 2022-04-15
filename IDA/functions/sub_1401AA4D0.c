#include "../winhttp.h"

//----- (00000001401AA4D0) ----------------------------------------------------
__int64 __fastcall sub_1401AA4D0(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rcx
	__int64 result; // rax

	v2 = (unsigned int)(*(_DWORD*)(a1 + 116) - 1);
	*(_DWORD*)(a1 + 88) = 2 * *(_DWORD*)(a1 + 68);
	*(_WORD*)(*(_QWORD*)(a1 + 104) + 2 * v2) = 0;
	sub_1407E4830(*(int**)(a1 + 104), 0i64, 2i64 * (unsigned int)(*(_DWORD*)(a1 + 116) - 1));
	v3 = 2i64 * *(int*)(a1 + 172);
	*(_DWORD*)(a1 + 168) = word_140A454A0[8 * *(int*)(a1 + 172) + 1];
	*(_DWORD*)(a1 + 180) = word_140A454A0[4 * v3];
	*(_DWORD*)(a1 + 184) = word_140A454A0[4 * v3 + 2];
	result = word_140A454A0[4 * v3 + 3];
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_DWORD*)(a1 + 132) = 0;
	*(_DWORD*)(a1 + 156) = 0;
	*(_DWORD*)(a1 + 5900) = 0;
	*(_DWORD*)(a1 + 164) = result;
	*(_DWORD*)(a1 + 160) = 2;
	*(_DWORD*)(a1 + 136) = 2;
	*(_DWORD*)(a1 + 112) = 0;
	return result;
}
// 140A454A0: using guessed type unsigned __int16 word_140A454A0[4];

