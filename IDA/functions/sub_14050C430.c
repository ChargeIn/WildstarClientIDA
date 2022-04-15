#include "../winhttp.h"

//----- (000000014050C430) ----------------------------------------------------
__int64 sub_14050C430()
{
	int* v0; // rax
	int* v1; // rax
	int* v2; // rax

	if (qword_140C65898)
	{
		v0 = sub_14054F210();
		if ((*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v0 + 56i64))(v0) == 2)
		{
			v1 = sub_14054F210();
			if (!(*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v1 + 72i64))(v1))
			{
				v2 = sub_14054F210();
				(*(void(__fastcall**)(int*))(*(_QWORD*)v2 + 48i64))(v2);
			}
			PostQuitMessage(0);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

