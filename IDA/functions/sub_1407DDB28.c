#include "../winhttp.h"

//----- (00000001407DDB28) ----------------------------------------------------
__int64 sub_1407DDB28()
{
	_QWORD* v0; // rax
	unsigned int v1; // ecx

	v0 = sub_1407E3D94();
	v1 = 214013 * *((_DWORD*)v0 + 7) + 2531011;
	*((_DWORD*)v0 + 7) = v1;
	return HIWORD(v1) & 0x7FFF;
}

