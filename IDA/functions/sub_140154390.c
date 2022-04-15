#include "../winhttp.h"

//----- (0000000140154390) ----------------------------------------------------
__int64 __fastcall sub_140154390(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	_QWORD** v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rcx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 80);
	v3 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			v4 = v3[2];
			if (v4)
			{
				sub_140154180(v3[2]);
				sub_14018B900(v4, 0);
			}
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 80));
	}
	v5 = *(_QWORD***)(a1 + 80);
	v6 = *v5;
	if (*v5 != v5)
	{
		do
		{
			v7 = (__int64)v6;
			v6 = (_QWORD*)*v6;
			sub_14018B900(v7, 0);
		} while (v6 != *(_QWORD**)(a1 + 80));
	}
	**(_QWORD**)(a1 + 80) = *(_QWORD*)(a1 + 80);
	result = *(_QWORD*)(a1 + 80);
	*(_QWORD*)(result + 8) = result;
	return result;
}

