#include "../winhttp.h"

//----- (000000014076AC30) ----------------------------------------------------
__int64 sub_14076AC30()
{
	__int64 v0; // rax
	__int64 v1; // rax
	__int64 v2; // rax
	char* v3; // rax
	char v5; // [rsp+38h] [rbp+10h] BYREF

	v0 = sub_140215240(*(_DWORD*)(qword_140C65B98 + 264));
	if (v0)
	{
		v1 = sub_140214E00(*(_DWORD*)(v0 + 16));
		if (v1)
		{
			v2 = *(int*)(v1 + 12);
			if ((unsigned int)v2 < 0x10)
				v3 = (char*)&unk_140B51560 + 16 * v2;
			else
				v3 = (char*)&unk_140B51550;
			if ((v3[12] & 1) != 0)
			{
				v5 = 0;
				sub_1403F4900(qword_140C65898, 0x606u, (__int64)&v5);
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

