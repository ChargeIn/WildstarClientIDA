#include "../winhttp.h"

//----- (000000014064EB20) ----------------------------------------------------
__int64 __fastcall sub_14064EB20(__int64 a1)
{
	__int64 v2; // rax
	int v3; // ecx
	__int64 v4; // rdx
	bool v5; // zf
	_DWORD* v6; // rax
	bool v8; // cf

	v2 = sub_1406499E0(a1);
	v3 = 0;
	v4 = v2;
	v5 = v2 == 0;
	v6 = *(_DWORD**)(a1 + 16);
	if (v5)
	{
		v6[2] = 0;
	}
	else
	{
		v8 = *(_DWORD*)(v4 + 56) < 0x32u;
		v6[2] = 1;
		LOBYTE(v3) = !v8;
		*v6 = v3;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

