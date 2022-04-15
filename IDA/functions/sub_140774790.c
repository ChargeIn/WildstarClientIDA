#include "../winhttp.h"

//----- (0000000140774790) ----------------------------------------------------
__int64 __fastcall sub_140774790(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	_QWORD** v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 56);
	v3 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			while (v3[4])
			{
				v4 = *(void(__fastcall****)(_QWORD, __int64))v3[3];
				if (v4)
					(**v4)(v4, 1i64);
				sub_140007270((__int64)(v3 + 3), 0i64);
			}
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 56));
	}
	v5 = *(_QWORD***)(a1 + 56);
	v6 = *v5;
	if (*v5 != v5)
	{
		do
		{
			v7 = (__int64)v6;
			v6 = (_QWORD*)*v6;
			v8 = *(_QWORD*)(v7 + 24);
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
			sub_14018B900(v7, 0);
		} while (v6 != *(_QWORD**)(a1 + 56));
	}
	**(_QWORD**)(a1 + 56) = *(_QWORD*)(a1 + 56);
	result = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(result + 8) = result;
	return result;
}

