#include "../winhttp.h"

//----- (000000014012DCC0) ----------------------------------------------------
_QWORD* __fastcall sub_14012DCC0(__int64 a1, _QWORD* a2, int a3)
{
	_QWORD* result; // rax
	__int64 i; // rsi
	unsigned __int16* v8; // rbx
	unsigned __int16* v9; // rax
	__int64 v10; // rdx
	_QWORD* v11; // rbp
	int v12; // ebx
	__int64 v13; // rsi
	__int64 v14; // rcx
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // rdx
	unsigned __int16* v18; // rax
	_QWORD* v19; // rsi
	__int64 v20; // rax
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rdx
	unsigned __int16* v24; // rax
	int j; // [rsp+48h] [rbp+10h]

	result = (_QWORD*)(*(__int64(__fastcall**)(_QWORD*))(*a2 + 8i64))(a2);
	if (result)
	{
		if (!a3)
		{
			for (i = result[12]; i; i = *(_QWORD*)(i + 56))
			{
				v8 = (unsigned __int16*)sub_1401A4F40(i + 32);
				v9 = (unsigned __int16*)sub_1401A4F40(i + 8);
				result = (_QWORD*)sub_1400F0870(a1, v10, v9, v8);
			}
		}
	}
	v11 = (_QWORD*)a2[6];
	v12 = 1;
	for (j = 1; v11; v11 = (_QWORD*)v11[9])
	{
		v13 = (*(__int64(__fastcall**)(_QWORD*))(*v11 + 8i64))(v11);
		if (v13)
		{
			if (!a3)
			{
				v14 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v14 + 8) = 3;
				*(double*)v14 = (double)v12;
				*(_QWORD*)(a1 + 16) += 16i64;
				j = v12 + 1;
			}
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v15 = *(_QWORD*)(a1 + 16);
			v16 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v15 + 8) = 5;
			*(_QWORD*)v15 = v16;
			*(_QWORD*)(a1 + 16) += 16i64;
			if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 48i64))(v13))
				v18 = 0i64;
			else
				v18 = (unsigned __int16*)sub_1401A4F40(v13 + 24);
			sub_1400F0870(a1, v17, L"__XmlNode", v18);
			result = (_QWORD*)sub_14012DCC0(a1, v13, 0i64);
		}
		else
		{
			result = (_QWORD*)(*(__int64(__fastcall**)(_QWORD*))(*v11 + 24i64))(v11);
			v19 = result;
			if (!result)
				continue;
			result = (_QWORD*)(*(__int64(__fastcall**)(_QWORD*))(*result + 48i64))(result);
			if (result)
				continue;
			result = (_QWORD*)sub_1401A4F40((__int64)(v19 + 3));
			if (!result)
				continue;
			result = (*(__int64(__fastcall**)(_QWORD*))(*v19 + 48i64))(v19)
				? 0i64
				: (_QWORD*)sub_1401A4F40((__int64)(v19 + 3));
			if (!*(_WORD*)result)
				continue;
			if (!a3)
			{
				v20 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v20 + 8) = 3;
				*(double*)v20 = (double)v12;
				*(_QWORD*)(a1 + 16) += 16i64;
				j = v12 + 1;
			}
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v21 = *(_QWORD*)(a1 + 16);
			v22 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v21 + 8) = 5;
			*(_QWORD*)v21 = v22;
			*(_QWORD*)(a1 + 16) += 16i64;
			if ((*(__int64(__fastcall**)(_QWORD*))(*v19 + 48i64))(v19))
				v24 = 0i64;
			else
				v24 = (unsigned __int16*)sub_1401A4F40((__int64)(v19 + 3));
			result = (_QWORD*)sub_1400F0870(a1, v23, L"__XmlText", v24);
		}
		if (!a3)
		{
			result = (_QWORD*)sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
		}
		v12 = j;
	}
	return result;
}
// 14012DD13: variable 'v10' is possibly undefined
// 14012DDDD: variable 'v17' is possibly undefined
// 14012DEDB: variable 'v23' is possibly undefined
// 140A204D8: using guessed type wchar_t aXmlnode[10];
// 140A204F0: using guessed type wchar_t aXmltext[10];

