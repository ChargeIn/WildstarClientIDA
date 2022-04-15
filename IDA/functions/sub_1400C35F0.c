#include "../winhttp.h"

//----- (00000001400C35F0) ----------------------------------------------------
__int64 __fastcall sub_1400C35F0(__int64 a1)
{
	int v2; // esi
	int** v3; // rbx
	int* v4; // rax
	int v5; // xmm0_4
	int* v6; // rax
	__int64 result; // rax

	v2 = 5;
	v3 = (int**)(a1 + 32);
	do
	{
		*(v3 - 1) = 0i64;
		*v3 = 0i64;
		v3[1] = 0i64;
		v4 = sub_14018B280(16i64, 0);
		*(v3 - 1) = v4;
		*v3 = v4;
		v3[1] = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		v5 = dword_140C63664;
		*(v3 - 4) = 0i64;
		*((_DWORD*)v3 - 5) = 1065353216;
		*((_DWORD*)v3 - 6) = v5;
		v3 += 6;
		--v2;
	} while (v2 >= 0);
	*(_QWORD*)(a1 + 312) = 0i64;
	*(_QWORD*)(a1 + 320) = 0i64;
	*(_QWORD*)(a1 + 328) = 0i64;
	v6 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 312) = v6;
	*(_QWORD*)(a1 + 320) = v6;
	*(_QWORD*)(a1 + 328) = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	*(_QWORD*)(a1 + 336) = 0i64;
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_BYTE*)(a1 + 414) &= ~1u;
	*(_BYTE*)(a1 + 412) &= 3u;
	*(_BYTE*)(a1 + 412) |= 0x10u;
	*(_BYTE*)(a1 + 413) = 0;
	*(_DWORD*)(a1 + 296) = 0;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 400) = 1048576000i64;
	*(_DWORD*)(a1 + 408) = 1056964608;
	result = a1;
	*(_DWORD*)(a1 + 384) = 5;
	*(_DWORD*)(a1 + 388) = 5;
	return result;
}
// 140C63664: using guessed type int dword_140C63664;

