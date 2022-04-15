#include "../winhttp.h"

//----- (0000000140865550) ----------------------------------------------------
void __fastcall sub_140865550(__int64 a1)
{
	__int64 i; // rbx
	_QWORD* v3; // rcx
	__int64 v4; // rax

	for (i = *(_QWORD*)(a1 + 32); i != *(_QWORD*)(a1 + 40); i += 40i64)
	{
		v3 = *(_QWORD**)(i + 16);
		if (v3)
		{
			v4 = v3[7];
			if (v4)
			{
				if (*(_WORD*)(v4 + 72))
					(*(void(__fastcall**)(_QWORD*))(*v3 + 408i64))(v3);
			}
		}
	}
}

