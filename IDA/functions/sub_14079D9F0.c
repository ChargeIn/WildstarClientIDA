#include "../winhttp.h"

//----- (000000014079D9F0) ----------------------------------------------------
unsigned int(__fastcall*** __fastcall sub_14079D9F0(__int64 a1, int a2))(_QWORD)
{
	_QWORD* v2; // rax
	_QWORD* v5; // rbx
	unsigned int(__fastcall * **v6)(_QWORD); // rdi

	v2 = *(_QWORD**)(a1 + 16);
	v5 = (_QWORD*)*v2;
	if ((_QWORD*)*v2 == v2)
		return 0i64;
	while (1)
	{
		v6 = (unsigned int(__fastcall***)(_QWORD))v5[2];
		if ((**v6)(v6) == a2)
			break;
		v5 = (_QWORD*)*v5;
		if (v5 == *(_QWORD**)(a1 + 16))
			return 0i64;
	}
	return v6;
}

