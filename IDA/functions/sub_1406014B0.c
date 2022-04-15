#include "../winhttp.h"

//----- (00000001406014B0) ----------------------------------------------------
__int64 __fastcall sub_1406014B0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 result; // rax
	__int64 v7; // rdi
	_QWORD* v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rbx

	result = sub_140240F80(a2);
	if (result)
	{
		v7 = sub_1406017B0(a1, a2);
		if (v7)
		{
			v8 = *(_QWORD**)(a1 + 128);
			if (v8)
			{
				while ((*(unsigned int(__fastcall**)(_QWORD*))(*v8 + 56i64))(v8) != *(_DWORD*)(v7 + 4))
				{
					v8 = (_QWORD*)v8[2];
					if (!v8)
						goto LABEL_8;
				}
				(*(void(__fastcall**)(_QWORD*))(*v8 + 32i64))(v8);
			}
		}
	LABEL_8:
		v9 = qword_140C65898;
		*(_DWORD*)(v7 + 4) = a3;
		result = sub_1403D90D0(v9, a3);
		v10 = result;
		if (result && *(_QWORD*)(result + 5864))
			result = sub_140601880(a1, a2, a3);
		if ((!a3 || v10 && *(_QWORD*)(v10 + 5864)) && a1 == *(_QWORD*)(qword_140C65898 + 27728))
			return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Group_SetMark", byte_1409EA434, a2, a3);
	}
	return result;
}
// 1409EA434: using guessed type _BYTE byte_1409EA434[32];
// 140C65898: using guessed type __int64 qword_140C65898;

