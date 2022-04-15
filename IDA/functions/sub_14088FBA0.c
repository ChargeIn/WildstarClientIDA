#include "../winhttp.h"

//----- (000000014088FBA0) ----------------------------------------------------
void __fastcall sub_14088FBA0(__int64 a1)
{
	__int64 i; // rdi
	__int64* v3; // rax
	__int64 v4; // rax

	for (i = *(_QWORD*)(a1 + 128); i; i = *(_QWORD*)(a1 + 128))
	{
		sub_14088D540(i);
		v3 = *(__int64**)(a1 + 128);
		if (v3)
		{
			v4 = *v3;
			if (v4)
			{
				*(_QWORD*)(a1 + 128) = v4;
			}
			else
			{
				*(_QWORD*)(a1 + 128) = 0i64;
				*(_QWORD*)(a1 + 136) = 0i64;
			}
		}
		sub_14088CBC0(i);
	}
}

