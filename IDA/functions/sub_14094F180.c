#include "../winhttp.h"

//----- (000000014094F180) ----------------------------------------------------
const void**** sub_14094F180()
{
	const void*** v0; // rbx
	int i; // edi
	const void**** result; // rax

	v0 = (const void***)&qword_140C7AB20;
	for (i = 7; i >= 0; --i)
	{
		if (*--v0)
			result = sub_1401A4A00(v0);
	}
	return result;
}
// 140C7AB20: using guessed type __int64 qword_140C7AB20;

