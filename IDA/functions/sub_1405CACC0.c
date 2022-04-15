#include "../winhttp.h"

//----- (00000001405CACC0) ----------------------------------------------------
__int64 __fastcall sub_1405CACC0(__int64 a1)
{
	__int64 result; // rax

	sub_14001C480(a1, (int*)&word_140B7B704, (int*)&word_140B7B704);
	sub_14001C480(a1 + 32, (int*)&word_140B7B704, (int*)&word_140B7B704);
	sub_14001C480(a1 + 64, (int*)&word_140B7B704, (int*)&word_140B7B704);
	sub_14001C480(a1 + 96, (int*)&word_140B7B704, (int*)&word_140B7B704);
	result = 0i64;
	*(_DWORD*)(a1 + 224) = 1065353216;
	*(_OWORD*)(a1 + 192) = xmmword_140B7B240;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_OWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 132) = 0i64;
	*(_QWORD*)(a1 + 140) = 0i64;
	*(_QWORD*)(a1 + 148) = 0i64;
	*(_QWORD*)(a1 + 156) = 0i64;
	*(_QWORD*)(a1 + 164) = 0i64;
	*(_QWORD*)(a1 + 172) = 0i64;
	*(_DWORD*)(a1 + 128) = 0;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_DWORD*)(a1 + 248) = 0;
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B704: using guessed type __int16 word_140B7B704;

