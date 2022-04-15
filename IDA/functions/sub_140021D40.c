#include "../winhttp.h"

//----- (0000000140021D40) ----------------------------------------------------
unsigned __int64 __fastcall sub_140021D40(__int64 a1)
{
	unsigned __int64 result; // rax
	unsigned int v3; // edi
	unsigned int v4; // ebp
	int* v5; // rbx
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64* v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // rcx
	unsigned __int64 v12; // r8
	__int64 v13; // r9
	_DWORD* v14; // rcx
	int v15; // ecx
	char v16[16]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v17; // [rsp+60h] [rbp+8h] BYREF
	__int64 v18; // [rsp+68h] [rbp+10h] BYREF

	if (!*(_QWORD*)(a1 + 312))
		sub_140021BB0((_QWORD*)a1);
	sub_140008410(a1 + 328);
	result = (unsigned __int64)qword_140C63838;
	v3 = 0;
	if (qword_140C63838)
	{
		result = qword_140C63838(off_140A696B0, qword_140C63858);
	}
	else
	{
		if (dword_140C64324)
			return result;
		result = sub_1401EFC80();
		if ((result & 0x80000000) != 0i64)
			return result;
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63F68 + 40i64))(qword_140C63F68);
	}
	v4 = result;
	if ((_DWORD)result)
	{
		do
		{
			result = (unsigned __int64)qword_140C63848;
			if (qword_140C63848)
			{
				result = qword_140C63848(off_140A696B0, v3, qword_140C63858);
			}
			else
			{
				if (dword_140C64324)
					goto LABEL_39;
				result = sub_1401EFC80();
				if ((result & 0x80000000) != 0i64)
					goto LABEL_39;
				result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F68 + 32i64))(qword_140C63F68, v3);
			}
			v5 = (int*)result;
			if (!result)
				goto LABEL_39;
			result = *(_QWORD*)(a1 + 304);
			v6 = result;
			v7 = *(_QWORD*)(result + 8);
			while (v7)
			{
				if (*(_DWORD*)(v7 + 32) < (unsigned int)*v5)
				{
					v7 = *(_QWORD*)(v7 + 24);
				}
				else
				{
					v6 = v7;
					v7 = *(_QWORD*)(v7 + 16);
				}
			}
			if (v6 == result || (unsigned int)*v5 < *(_DWORD*)(v6 + 32))
			{
				v18 = *(_QWORD*)(a1 + 304);
				v8 = &v18;
			}
			else
			{
				v17 = v6;
				v8 = &v17;
			}
			v9 = *v8 != result;
			if (*v8 == result)
				goto LABEL_39;
			v10 = (unsigned int)v5[27];
			if ((_DWORD)v10)
			{
				v11 = *(_QWORD*)(qword_140C635F0 + 5584);
				result = 0i64;
				v12 = *(_QWORD*)(v11 + 160);
				if (!v12)
					goto LABEL_39;
				v13 = *(_QWORD*)(v11 + 152);
				v14 = (_DWORD*)(v13 + 8);
				while (*v14 != (_DWORD)v10)
				{
					++result;
					v14 += 4;
					if (result >= v12)
						goto LABEL_39;
				}
				result *= 2i64;
				if (!*(_DWORD*)(v13 + 8 * result + 12))
					goto LABEL_39;
			}
			else if (!v5[26])
			{
				result = sub_140029820(v9, v10, v5[24]);
				if (!*(_DWORD*)(qword_140C635F0 + 5704))
				{
					v15 = *(_DWORD*)(a1 + 364);
					if (!v15)
						v15 = 1;
					if ((int)result > v15)
						goto LABEL_39;
				}
			}
			result = sub_1400293C0(a1 + 328, (__int64)v16, v5);
		LABEL_39:
			++v3;
		} while (v3 < v4);
	}
	return result;
}
// 140A696B0: using guessed type wchar_t *off_140A696B0[2];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F68: using guessed type __int64 qword_140C63F68;
// 140C64324: using guessed type int dword_140C64324;
// 140021D40: using guessed type char var_38[16];

