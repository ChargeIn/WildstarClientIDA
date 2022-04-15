#include "../winhttp.h"

//----- (00000001405E65F0) ----------------------------------------------------
__int64 __fastcall sub_1405E65F0(_DWORD* a1, int a2, int a3)
{
	_DWORD* v4; // rbx
	__int64 result; // rax

	v4 = a1 + 270;
	a1[136] = 0;
	sub_1407E4830(a1 + 270, 0i64, 0x64ui64);
	v4[24] = 1065353216;
	v4[23] = 1065353216;
	v4[22] = 1065353216;
	*(_QWORD*)(v4 + 3) = 0i64;
	*(_QWORD*)(v4 + 5) = 1i64;
	*(_QWORD*)(v4 + 7) = 0i64;
	*(_QWORD*)(v4 + 9) = 0i64;
	v4[11] = 0;
	v4[6] = 1;
	*v4 = a2;
	result = sub_14018CDF0();
	a1[271] = a3;
	a1[272] = result;
	return result;
}

