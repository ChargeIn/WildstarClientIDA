#include "../winhttp.h"

//----- (0000000140382E90) ----------------------------------------------------
int __fastcall sub_140382E90(__int64* a1)
{
	__int64* v2; // rdx
	__int64* v3; // rcx
	__int64** v4; // rcx
	__int64 v5; // rax
	__int64** v6; // rcx
	__int64 v7; // rax

	*((_DWORD*)a1 + 9) &= 0xFFFFFFCF;
	*((_DWORD*)a1 + 10) &= ~1u;
	*((_DWORD*)a1 + 11) &= ~1u;
	if (!a1[181])
	{
		v2 = (__int64*)*a1;
		v3 = a1 + 182;
		v2 += 285;
		*(v3 - 1) = (__int64)v2;
		*v3 = *v2;
		*v2 = (__int64)a1;
		if (*v3)
			*(_QWORD*)(*v3 + 1448) = v3;
		*(_DWORD*)(*a1 + 2288) = 0;
		++* (_DWORD*)(*a1 + 2164);
	}
	if (!a1[183])
	{
		v4 = (__int64**)(*a1 + 2296);
		a1[183] = (__int64)v4;
		a1[184] = (__int64)*v4;
		*v4 = a1;
		v5 = a1[184];
		if (v5)
			*(_QWORD*)(v5 + 1464) = a1 + 184;
		*(_DWORD*)(*a1 + 2304) = 0;
		++* (_DWORD*)(*a1 + 2168);
	}
	if (!a1[185])
	{
		v6 = (__int64**)(*a1 + 2312);
		a1[185] = (__int64)v6;
		a1[186] = (__int64)*v6;
		*v6 = a1;
		v7 = a1[186];
		if (v7)
			*(_QWORD*)(v7 + 1480) = a1 + 186;
		*(_DWORD*)(*a1 + 2320) = 0;
		++* (_DWORD*)(*a1 + 2172);
	}
	return sub_140389C40(a1);
}

