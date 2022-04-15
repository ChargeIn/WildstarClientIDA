#include "../winhttp.h"

//----- (000000014073A930) ----------------------------------------------------
__int64 __fastcall sub_14073A930(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	bool v5; // zf
	_DWORD* v6; // rax

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	if (v2)
	{
		v5 = (unsigned int)sub_1405C2FD0(
			(_DWORD*)qword_140C65B98,
			*(_DWORD*)v2,
			*(_QWORD*)(v2 + 24),
			*(unsigned int**)(v2 + 16)) == 0;
		v6 = (_DWORD*)a1[2];
		v6[2] = 1;
		*v6 = v5;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		*v3 = 0;
		v3[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

