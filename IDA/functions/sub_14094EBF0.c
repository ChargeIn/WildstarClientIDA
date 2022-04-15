#include "../winhttp.h"

//----- (000000014094EBF0) ----------------------------------------------------
const void**** sub_14094EBF0()
{
	const void*** v0; // rbx
	int i; // edi
	const void**** result; // rax

	v0 = (const void***)qword_140C7AA30;
	for (i = 255; i >= 0; --i)
	{
		if (*--v0)
			result = sub_1401A4A00(v0);
	}
	return result;
}
// 140C7AA30: using guessed type __int64 qword_140C7AA30[];

