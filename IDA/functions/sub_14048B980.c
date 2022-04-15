#include "../winhttp.h"

//----- (000000014048B980) ----------------------------------------------------
__int64 sub_14048B980()
{
	__int64 v0; // rbx
	_QWORD* v1; // rcx

	if (qword_140C65B80)
	{
		v0 = *(_QWORD*)qword_140C65B80;
		v1 = (_QWORD*)(*(_QWORD*)qword_140C65B80 + 96i64);
		*(_DWORD*)(*(_QWORD*)qword_140C65B80 + 144i64) = 0;
		sub_1403FC230(v1);
		if (*(_QWORD*)(v0 + 16))
		{
			sub_1405A9660(v0, *(_QWORD**)(*(_QWORD*)(v0 + 8) + 8i64));
			*(_QWORD*)(*(_QWORD*)(v0 + 8) + 16i64) = *(_QWORD*)(v0 + 8);
			*(_QWORD*)(*(_QWORD*)(v0 + 8) + 8i64) = 0i64;
			*(_QWORD*)(*(_QWORD*)(v0 + 8) + 24i64) = *(_QWORD*)(v0 + 8);
			*(_QWORD*)(v0 + 16) = 0i64;
		}
		sub_140008410(v0 + 32);
		sub_140008410(v0 + 64);
		sub_1405A89B0();
	}
	return 0i64;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

