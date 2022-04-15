#include "../winhttp.h"

//----- (00000001407AC240) ----------------------------------------------------
_BOOL8 __fastcall sub_1407AC240(_QWORD* a1, __int64 a2, __int64 a3, unsigned int a4)
{
	unsigned int(__fastcall * v4)(__int64, __int64, _QWORD, _QWORD); // rax
	_BOOL8 result; // rax
	unsigned int(__fastcall * v10)(__int64, __int64, _QWORD, _QWORD); // rax

	v4 = (unsigned int(__fastcall*)(__int64, __int64, _QWORD, _QWORD))a1[4];
	result = 1;
	if (!v4 || !v4(a2, a3, a4, a1[5]))
	{
		v10 = (unsigned int(__fastcall*)(__int64, __int64, _QWORD, _QWORD))a1[6];
		if (!v10 || !v10(a2, a3, a4, a1[5]))
			return 0;
	}
	return result;
}

