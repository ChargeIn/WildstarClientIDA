#include "../winhttp.h"

//----- (00000001400BA2B0) ----------------------------------------------------
int* __fastcall sub_1400BA2B0(__int64 a1)
{
	int* result; // rax

	sub_1400BD640((__int64*)(a1 + 152), 0i64);
	sub_1400523E0((__int64*)(a1 + 168));
	sub_1400523E0((__int64*)(a1 + 272));
	*(_QWORD*)(a1 + 608) = 0i64;
	*(_DWORD*)(a1 + 560) = 0;
	*(_DWORD*)(a1 + 616) = 0;
	*(_DWORD*)(a1 + 288) = 0;
	sub_1407E4830((int*)(a1 + 304), 0i64, 0xC0ui64);
	result = sub_1407E4830((int*)(a1 + 496), 0i64, 0x28ui64);
	*(_DWORD*)(a1 + 532) = 1065353216;
	*(_QWORD*)(a1 + 292) = 0i64;
	return result;
}

