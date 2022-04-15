#include "../winhttp.h"

//----- (00000001403451D0) ----------------------------------------------------
__int64 __fastcall sub_1403451D0(__int16 a1, __int64 a2)
{
	__int64 v3; // rcx

	v3 = 0i64;
	if ((a1 & 1) != 0)
		v3 = 2147483649i64;
	if ((a1 & 2) != 0)
		v3 = (unsigned int)v3 | 4;
	if ((a1 & 4) != 0)
		v3 = (unsigned int)v3 | 2;
	if ((a1 & 0x80u) != 0)
		LODWORD(v3) = v3 | 0x80;
	if ((a1 & 0x100) != 0)
		LODWORD(v3) = v3 | 0x100;
	if ((a1 & 0x200) != 0)
		LODWORD(v3) = v3 | 0x200;
	if ((a1 & 0x400) != 0)
		LODWORD(v3) = v3 | 0x400;
	if ((a1 & 0x800) != 0)
		LODWORD(v3) = v3 | 0x800;
	if ((a1 & 0x1000) != 0)
		LODWORD(v3) = v3 | 0x1000;
	if ((a1 & 0x2000) != 0)
		LODWORD(v3) = v3 | 0x2000;
	if ((a1 & 0x4000) != 0)
		LODWORD(v3) = v3 | 0x4000;
	return (**(__int64(__fastcall***)(__int64, _QWORD))a2)(v3, *(_QWORD*)(*(_QWORD*)a2 + 8i64));
}

