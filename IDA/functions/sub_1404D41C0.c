#include "../winhttp.h"

//----- (00000001404D41C0) ----------------------------------------------------
__int64 __fastcall sub_1404D41C0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
	__int64 v4; // rbp
	__int64 v7; // rcx
	__int64 v10; // rax
	__int64 v11; // r10
	__int64 v12; // rcx
	__int64 result; // rax
	int* v14; // rax
	__int64(__fastcall * **v15)(_QWORD, _QWORD); // rax
	__int64 v16; // rbx
	int v17; // edi
	_QWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
	char v19[40]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v20; // [rsp+60h] [rbp+8h]

	v4 = a1 + 32;
	v7 = *(_QWORD*)(a1 + 40);
	v10 = *(_QWORD*)(v7 + 8);
	v11 = v7;
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < *(_DWORD*)(a2 + 20))
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v11 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v11 == v7 || (v20 = v11, *(_DWORD*)(a2 + 20) < *(_DWORD*)(v11 + 32)))
		v20 = v7;
	if (v20 != *(_QWORD*)(a1 + 40))
	{
		v12 = *(_QWORD*)(v20 + 40);
		if (v12)
			return sub_1404D4880(v12, (unsigned __int16*)a2, a3, a4);
		return 2147500037i64;
	}
	if (*(_DWORD*)(a1 + 8) != 7 && (unsigned int)(*(_DWORD*)(a1 + 8) - 8) > 1)
		return 2147500037i64;
	v14 = sub_14018B280(104i64, 0);
	if (!v14)
		return 2147500037i64;
	v15 = (__int64(__fastcall***)(_QWORD, _QWORD))sub_1404D4700((__int64)v14, a1, a2);
	v16 = (__int64)v15;
	if (!v15)
		return 2147500037i64;
	result = (**v15)(v15, *(unsigned int*)(a1 + 8));
	if ((int)result >= 0)
	{
		v17 = sub_1404D4880(v16, (unsigned __int16*)a2, a3, a4);
		if (v17 < 0)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v16 + 24i64))(v16, 1i64);
		}
		else
		{
			LODWORD(v18[0]) = *(_DWORD*)(a2 + 20);
			v18[1] = v16;
			sub_140055F80(v4, (__int64)v19, v18);
		}
		return (unsigned int)v17;
	}
	return result;
}
// 1404D41C0: using guessed type char var_28[40];

