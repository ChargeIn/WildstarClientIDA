#include "../winhttp.h"

//----- (0000000140554DD0) ----------------------------------------------------
void __fastcall sub_140554DD0(__int64 a1, int a2)
{
	_QWORD** v2; // rdx
	unsigned int v3; // r8d
	_QWORD* v4; // rax

	if ((unsigned int)sub_140556440((__int64)&qword_140C7DC60, a2))
	{
		sub_140555040((__int64)&qword_140C7DC60);
		v2 = *(_QWORD***)(qword_140C7DCD0 + 24);
		v3 = 0;
		v4 = *v2;
		if (*v2 == v2)
			goto LABEL_6;
		do
		{
			v4 = (_QWORD*)*v4;
			++v3;
		} while (v4 != v2);
		if (v3 < 2)
		{
		LABEL_6:
			if ((_DWORD)qword_140C7DC60)
			{
				sub_1405548F0((__int64)&qword_140C7DC60);
			}
			else
			{
				*(__int64*)((char*)&qword_140C7DC60 + 4) = 0i64;
				qword_140C7DC6C = -4294966996i64;
				if (*(_DWORD*)(qword_140C65898 + 26180) == 37)
					sub_1403A71F0(qword_140C65898, 0, 0x65u, 1);
			}
		}
		else
		{
			sub_140558930((__int64)&qword_140C7DC60, 1, 0, 1);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC6C: using guessed type __int64 qword_140C7DC6C;
// 140C7DCD0: using guessed type __int64 qword_140C7DCD0;

