#include "../winhttp.h"

//----- (000000014063E380) ----------------------------------------------------
__int64 sub_14063E380()
{
	__int64 v0; // rcx
	__int64 result; // rax
	int v2; // r9d

	v0 = qword_140C65898;
	result = *(_QWORD*)(qword_140C65898 + 25744);
	if (result)
		v2 = *(_DWORD*)(result + 264);
	else
		v2 = 0;
	if (result)
	{
		if (*(_DWORD*)(qword_140C65898 + 25600) != v2)
		{
			*(_DWORD*)(qword_140C65898 + 25600) = v2;
			return sub_1400EA3E0(*(_QWORD*)(v0 + 29504), "AlternateTargetUnitChanged", L"U");
		}
	}
	return result;
}
// 1409EDFDC: using guessed type wchar_t aU_18[2];
// 140C65898: using guessed type __int64 qword_140C65898;

