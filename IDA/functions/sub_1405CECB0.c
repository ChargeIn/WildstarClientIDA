#include "../winhttp.h"

//----- (00000001405CECB0) ----------------------------------------------------
void __fastcall sub_1405CECB0(__int64 a1, __int64 a2)
{
	int v3; // edx
	__int64 v5; // rdi
	__int64 v6; // rcx
	unsigned int v7; // ebx
	int* v8; // rax
	int* v9; // rax
	_QWORD* v10; // rax
	__int64 v11; // rax
	__int64 v12; // rcx
	_DWORD* v13; // rdx
	__int64 v14[24]; // [rsp+20h] [rbp-E8h] BYREF
	__int128 v15; // [rsp+E0h] [rbp-28h]
	int* v16; // [rsp+F0h] [rbp-18h]

	v3 = *(_DWORD*)(a2 + 8);
	if (v3)
	{
		sub_1400B7090((__int64)v14, v3);
		v7 = 0;
		v16 = 0i64;
		v15 = 0i64;
		v14[0] = (__int64)off_140B69230;
		v8 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v15 = v8;
		*((_QWORD*)&v15 + 1) = v8;
		v16 = v8 + 4;
		if (v8)
			*(_WORD*)v8 = 0;
		v9 = sub_14018B280(96i64, 0);
		if (v9)
			v10 = (_QWORD*)sub_1404DB7E0((__int64)v9, *(_QWORD*)(qword_140C65898 + 120));
		else
			v10 = 0i64;
		sub_1400B7480((__int64)v14, v10);
		v11 = sub_1400B7660(v14);
		sub_14053B6F0(v12, *(_QWORD*)(v11 + 8), *(_DWORD*)(a2 + 12));
		v13 = (_DWORD*)sub_140211280(*(_DWORD*)(a2 + 8));
		if (v13)
		{
			if ((*(_DWORD*)(qword_140C63628 + 1524) & v13[6]) == 0
				|| *(_DWORD*)(qword_140C635F0 + 5784) != 1
				|| (v7 = v13[2]) == 0)
			{
				v7 = v13[1];
			}
		}
		if (*(_QWORD*)(a1 + 112) || (int)sub_1407129A0((__int64*)(a1 + 112)) >= 0)
			sub_140712A40(*(_QWORD**)(a1 + 112), v7, 0i64, 0i64);
		if ((_QWORD)v15)
			sub_14018B900(v15, 0);
		sub_1400B7390(v14);
	}
	else
	{
		v5 = qword_140C65898;
		*(_DWORD*)(qword_140C65898 + 29848) = 0;
		v6 = *(_QWORD*)(v5 + 29832);
		if (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			*(_QWORD*)(v5 + 29832) = 0i64;
		}
	}
}
// 1405CEDA0: variable 'v12' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;

