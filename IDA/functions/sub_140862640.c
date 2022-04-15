#include "../winhttp.h"

//----- (0000000140862640) ----------------------------------------------------
__int64 __fastcall sub_140862640(_QWORD* a1, int a2, __int64* a3, _DWORD* a4)
{
	_DWORD* v4; // rax
	_DWORD* v5; // r10
	_QWORD* i; // r15
	__int64 result; // rax
	_QWORD* v11; // rdx
	_DWORD* v12; // rax
	_DWORD* v13; // rcx
	unsigned int* v14; // rax
	unsigned int v15; // edi

	v4 = (_DWORD*)a1[2];
	v5 = (_DWORD*)a1[3];
	for (i = a1 + 2; v4 != v5; v4 += 8)
	{
		if (*v4 == a2)
			break;
	}
	if (v4 != v5)
	{
		result = (__int64)(v4 + 2);
		if (result)
			goto LABEL_16;
	}
	result = sub_14083EDE0(qword_140C61BA8 + 398, **(_DWORD**)(a1[1] + 168i64));
	v11 = (_QWORD*)result;
	if (!result)
		goto LABEL_17;
	v12 = *(_DWORD**)(result + 48);
	v13 = (_DWORD*)v11[7];
	if (v12 == v13)
		goto LABEL_13;
	do
	{
		if (*v12 == a2)
			break;
		v12 += 2;
	} while (v12 != v13);
	if (v12 == v13 || (v14 = v12 + 1) == 0i64)
		LABEL_13:
	v15 = 0;
	else
		v15 = *v14;
	result = (*(__int64(__fastcall**)(_QWORD*))(*v11 + 16i64))(v11);
	if (v15 != -1 && (result = (__int64)sub_1408621C0(i, a2, v15)) != 0)
	{
	LABEL_16:
		*a4 = *(_DWORD*)(result + 8);
		result = *(_QWORD*)result;
		*a3 = result;
	}
	else
	{
	LABEL_17:
		*a3 = 0i64;
		*a4 = 0;
	}
	return result;
}

