#include "../winhttp.h"

//----- (000000014093C620) ----------------------------------------------------
__int64 sub_14093C620()
{
	_QWORD* v0; // rax
	__int64 v1; // rcx

	v0 = qword_140C7A230;
	v1 = 32i64;
	do
	{
		*v0 = 0i64;
		v0[1] = 0i64;
		v0[2] = 0i64;
		v0 += 8;
		*(v0 - 5) = 0i64;
		*(v0 - 4) = 0i64;
		*(v0 - 3) = 0i64;
		*(v0 - 2) = 0i64;
		*(v0 - 1) = 0i64;
		--v1;
	} while (v1);
	return sub_1407DD89C(sub_14094EBF0);
}
// 140C7A230: using guessed type _QWORD qword_140C7A230[256];

