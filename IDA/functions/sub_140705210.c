#include "../winhttp.h"

//----- (0000000140705210) ----------------------------------------------------
__int64 sub_140705210()
{
	__int64 v0; // rcx

	v0 = qword_140C65898;
	*(_OWORD*)(qword_140C65898 + 32480) = 0i64;
	*(_DWORD*)(v0 + 32500) = 0;
	sub_1400EA3E0(*(_QWORD*)(v0 + 29504), "NavPointCleared", byte_1409D1227);
	return 0i64;
}
// 1409D1227: using guessed type _BYTE byte_1409D1227[23];
// 140C65898: using guessed type __int64 qword_140C65898;

