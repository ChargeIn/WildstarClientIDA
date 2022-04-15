#include "../winhttp.h"

//----- (000000014084CA30) ----------------------------------------------------
__int64 __fastcall sub_14084CA30(__int64 a1, unsigned int a2)
{
	__int64 v4; // rdx

	if (!a2)
		return 14i64;
	v4 = sub_140830F00(qword_140C61BA8, a2, 0);
	if (v4)
		return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 72i64))(a1, v4);
	else
		return 15i64;
}

