#include "../winhttp.h"

//----- (00000001403321A0) ----------------------------------------------------
_QWORD* __fastcall sub_1403321A0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rbp
	_QWORD* v5; // rbx
	_QWORD* result; // rax
	__int64 v7; // rdx
	unsigned __int64 v8; // rdx
	unsigned int v9; // edi
	__int64 v10; // rax
	unsigned int v11; // ebx
	__int64 v12; // r9
	__int64 v13; // [rsp+60h] [rbp+8h] BYREF

	if ((unsigned __int64)(unsigned __int16)a2 < *(_QWORD*)(a1 + 176)
		&& (v4 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * (unsigned __int16)a2)) != 0)
	{
		v5 = (_QWORD*)(v4 + 40);
		for (result = (_QWORD*)sub_140336FA0((_QWORD*)(v4 + 40), &v13);
			(_DWORD)result != -2147024858;
			result = (_QWORD*)sub_140336FA0((_QWORD*)(v4 + 40), &v13))
		{
			if (v5[4])
				break;
			v7 = v5[2];
			if (!v7)
				break;
			v8 = *(_QWORD*)(v7 + 32) - v5[3];
			if (v8 < (unsigned int)v13)
			{
				result = (_QWORD*)v5[6];
				if (!result)
					return result;
				result = *(_QWORD**)(*result + 56i64);
				if (!result)
					return result;
				while (1)
				{
					v8 += result[4] - result[2];
					if (v8 >= (unsigned int)v13)
						break;
					result = (_QWORD*)result[7];
					if (!result)
						return result;
				}
			}
			v9 = sub_140331990((_QWORD*)a1, v4, (__int64)v5);
			result = (_QWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 120i64))(a1, a2);
			if (!(_BYTE)result)
				return result;
			if (v5[4])
			{
				++v5[3];
				v5[4] = 0i64;
			}
			v10 = v5[2];
			if (!v10 || v5[3] == *(_QWORD*)(v10 + 32))
				sub_140336B00((__int64)v5);
			if (v9)
			{
				if (v9 - 8 <= 1 || v9 == 14)
					++* (_DWORD*)(v4 + 12);
				v11 = *(_DWORD*)(v4 + 16);
				if ((unsigned __int64)(unsigned __int16)v11 < *(_QWORD*)(a1 + 176)
					&& *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * (unsigned __int16)v11)
					&& (*(int(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD**)(a1 + 120) + 8i64))(
						*(_QWORD*)(a1 + 120),
						a1,
						v11,
						v9) < 0)
				{
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, v11);
					v12 = *(unsigned int*)(v4 + 16);
					v13 = 0x141DEC140i64;
					return (_QWORD*)sub_1401A3130(11, 0, &v13, v12, v9);
				}
				result = (_QWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 120i64))(a1, a2);
				if (!(_BYTE)result)
					return result;
			}
			v5 = (_QWORD*)(v4 + 40);
		}
	}
	else
	{
		v13 = 0x141DEC090i64;
		return (_QWORD*)sub_1401A3130(11, 0, &v13, a2);
	}
	return result;
}

