#include "../winhttp.h"

//----- (00000001403FE250) ----------------------------------------------------
__int64 __fastcall sub_1403FE250(__int64 a1)
{
	_QWORD** v1; // rax
	_QWORD* v3; // rdi
	_QWORD* v4; // rsi
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 result; // rax

	v1 = *(_QWORD***)(a1 + 8);
	v3 = *v1;
	if (*v1 != v1)
	{
		do
		{
			v4 = v3;
			v3 = (_QWORD*)*v3;
			if (qword_140C65898)
			{
				v5 = *(_QWORD*)(qword_140C65898 + 29504);
				if (v5)
					Apollo_LUAEvent(v5, "MessageFinished", byte_1409EB834, v4 + 2);
			}
			v6 = v4[9];
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				v4[9] = 0i64;
			}
			v7 = v4[10];
			if (v7)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
				v4[10] = 0i64;
			}
			v8 = v4[4];
			if (v8)
				sub_14018B900(v8, 0);
			sub_14018B900((__int64)v4, 0);
		} while (v3 != *(_QWORD**)(a1 + 8));
	}
	**(_QWORD**)(a1 + 8) = *(_QWORD*)(a1 + 8);
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(result + 8) = result;
	return result;
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C65898: using guessed type __int64 qword_140C65898;

