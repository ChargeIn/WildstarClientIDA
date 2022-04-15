#include "../winhttp.h"

//----- (0000000140021BB0) ----------------------------------------------------
__int64 __fastcall sub_140021BB0(_QWORD* a1)
{
	__int64 result; // rax
	unsigned int v3; // ebx
	unsigned int v4; // esi
	int* v5; // r10
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // rcx
	unsigned int v8; // r9d
	unsigned int v9; // r8d
	unsigned __int64 v10; // rdx
	unsigned __int64 v11; // rcx
	unsigned int v12; // r9d
	unsigned int v13; // r8d
	char v14[24]; // [rsp+20h] [rbp-18h] BYREF

	sub_140008410((__int64)(a1 + 37));
	result = (__int64)qword_140C63838;
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
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63F68 + 40i64))(qword_140C63F68);
	}
	v4 = result;
	if ((_DWORD)result)
	{
		while (1)
		{
			result = (__int64)qword_140C63848;
			if (qword_140C63848)
				break;
			if (dword_140C64324)
			{
				v5 = 0i64;
			}
			else
			{
				result = sub_1401EFC80();
				if ((int)result >= 0)
				{
					result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F68 + 32i64))(
						qword_140C63F68,
						v3);
					goto LABEL_14;
				}
				v5 = 0i64;
			}
		LABEL_15:
			v6 = a1[32];
			v7 = 0i64;
			if (v6)
			{
				v8 = *v5;
				do
				{
					result = v7 + ((v6 - v7) >> 1);
					v9 = *(_DWORD*)(a1[31] + 4 * result);
					if (v8 < v9)
					{
						v6 = v7 + ((v6 - v7) >> 1);
					}
					else
					{
						if (v8 <= v9)
							goto LABEL_32;
						v7 = result + 1;
					}
				} while (v7 < v6);
			}
			if (v5[22])
			{
			LABEL_31:
				result = sub_1400293C0((__int64)(a1 + 37), (__int64)v14, v5);
			}
			else
			{
				v10 = a1[30];
				v11 = 0i64;
				if (v10)
				{
					v12 = *v5;
					do
					{
						result = v11 + ((v10 - v11) >> 1);
						v13 = *(_DWORD*)(a1[29] + 4 * result);
						if (v12 < v13)
						{
							v10 = v11 + ((v10 - v11) >> 1);
						}
						else
						{
							if (v12 <= v13)
								goto LABEL_31;
							v11 = result + 1;
						}
					} while (v11 < v10);
				}
			}
		LABEL_32:
			if (++v3 >= v4)
				return result;
		}
		result = qword_140C63848(off_140A696B0, v3, qword_140C63858);
	LABEL_14:
		v5 = (int*)result;
		goto LABEL_15;
	}
	return result;
}
// 140A696B0: using guessed type wchar_t *off_140A696B0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F68: using guessed type __int64 qword_140C63F68;
// 140C64324: using guessed type int dword_140C64324;
// 140021BB0: using guessed type char var_18[24];

