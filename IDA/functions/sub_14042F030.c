#include "../winhttp.h"

//----- (000000014042F030) ----------------------------------------------------
__int64 sub_14042F030()
{
	__int64 v0; // rcx

	v0 = qword_140C65898;
	if (*(_DWORD*)(qword_140C65898 + 26180) == 40)
	{
		sub_1403A71F0(qword_140C65898, 0, 0x65u, 1);
		v0 = qword_140C65898;
	}
	if (*(_DWORD*)(v0 + 26180) == 41)
		sub_1403A71F0(v0, 0, 0x65u, 1);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

