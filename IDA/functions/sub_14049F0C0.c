#include "../winhttp.h"

//----- (000000014049F0C0) ----------------------------------------------------
bool __fastcall sub_14049F0C0(__int64 a1, int a2)
{
	int v2; // edx
	bool result; // al

	v2 = a2 - 1;
	if (!v2)
		return *(_BYTE*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1;
	result = 0;
	if (v2 == 1)
		return (*(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1) == 0;
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

