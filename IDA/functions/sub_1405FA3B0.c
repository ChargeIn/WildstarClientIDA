#include "../winhttp.h"

//----- (00000001405FA3B0) ----------------------------------------------------
_QWORD* __fastcall sub_1405FA3B0(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* result; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rax

	v1 = *(_QWORD**)(a1 + 24);
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			sub_1405FA4D0(a1, (__int64)(v3 + 5), v3[5]);
			v4 = v3[3];
			if (v4)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v4 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != *(_QWORD**)(a1 + 24));
	}
	result = *(_QWORD**)(a1 + 56);
	v8 = (_QWORD*)result[2];
	if (v8 != result)
	{
		do
		{
			sub_1405FA4D0(a1, (__int64)(v8 + 5), v8[5]);
			v9 = v8[3];
			if (v9)
			{
				v8 = (_QWORD*)v8[3];
				for (result = *(_QWORD**)(v9 + 16); result; result = (_QWORD*)result[2])
					v8 = result;
			}
			else
			{
				for (result = (_QWORD*)v8[1]; v8 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v8 = result;
				if ((_QWORD*)v8[3] != result)
					v8 = result;
			}
		} while (v8 != *(_QWORD**)(a1 + 56));
	}
	return result;
}

