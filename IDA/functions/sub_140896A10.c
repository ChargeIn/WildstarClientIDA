#include "../winhttp.h"

//----- (0000000140896A10) ----------------------------------------------------
__int64 __fastcall sub_140896A10(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 v3; // rcx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 8);
	if (v1 == *(_QWORD**)(a1 + 16))
	{
		*(_QWORD*)(a1 + 16) = v1;
	}
	else
	{
		do
		{
			if ((*(_DWORD*)(*v1 + 56i64) & 0xFFFFFFFD) == 0)
			{
				v3 = v1[2];
				if (v3)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			}
			v1 += 3;
		} while (v1 != *(_QWORD**)(a1 + 16));
		result = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 16) = result;
	}
	return result;
}

