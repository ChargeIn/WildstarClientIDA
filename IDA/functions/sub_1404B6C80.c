#include "../winhttp.h"

//----- (00000001404B6C80) ----------------------------------------------------
void sub_1404B6C80()
{
	__int64 v0; // rax
	__int64 v1; // rcx
	__int64 v2; // [rsp+20h] [rbp-18h] BYREF
	__int64 v3; // [rsp+28h] [rbp-10h]

	if (qword_140C7DFD8)
	{
		v0 = 0i64;
		if (qword_140C7DE20)
		{
			while (1)
			{
				v1 = *(_QWORD*)(qword_140C7DE18 + 8 * v0);
				if (*(_DWORD*)(v1 + 16) == 7)
					break;
				if (++v0 >= (unsigned __int64)qword_140C7DE20)
					return;
			}
			if (v1)
			{
				v2 = 0i64;
				v3 = 0i64;
				v2 = *(_QWORD*)(qword_140C7DFD8 + 8);
				v3 = *(_QWORD*)(qword_140C7DFD8 + 16);
				sub_1403F4900(qword_140C65898, 0x4EAu, (__int64)&v2);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140C7DFD8: using guessed type __int64 qword_140C7DFD8;

