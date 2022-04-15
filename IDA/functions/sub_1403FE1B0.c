#include "../winhttp.h"

//----- (00000001403FE1B0) ----------------------------------------------------
__int64 __fastcall sub_1403FE1B0(__int64 a1)
{
	_QWORD** v1; // rax
	_QWORD* v3; // rdi
	_QWORD* v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 result; // rax

	v1 = *(_QWORD***)(a1 + 8);
	v3 = *v1;
	if (*v1 != v1)
	{
		do
		{
			v4 = v3;
			v3 = (_QWORD*)*v3;
			v5 = v4[3];
			if (v5)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				v4[3] = 0i64;
			}
			v6 = v4[2];
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				v4[2] = 0i64;
			}
			v7 = v4[5];
			if (v7)
				sub_14018B900(v7, 0);
			sub_14018B900((__int64)v4, 0);
		} while (v3 != *(_QWORD**)(a1 + 8));
	}
	**(_QWORD**)(a1 + 8) = *(_QWORD*)(a1 + 8);
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(result + 8) = result;
	return result;
}

