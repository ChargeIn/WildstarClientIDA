#include "../winhttp.h"

//----- (000000014033D0B0) ----------------------------------------------------
_QWORD* __fastcall sub_14033D0B0(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // r14
	_QWORD** v3; // r8
	__int64 v4; // r9
	_QWORD* result; // rax
	__int64 v8; // rbx
	__int64* v9; // rdi
	__int64 v10; // rcx
	__int64* v11; // rax
	__int64 v12; // rcx
	_QWORD* v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // [rsp+20h] [rbp-18h]
	__int64 v16; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD***)(a1 + 136);
	v4 = 0i64;
	result = *v3;
	if (*v3 != v3)
	{
		do
		{
			result = (_QWORD*)*result;
			++v4;
		} while (result != v3);
		if (v4)
		{
			v15 = v2;
			while (1)
			{
				v8 = *(_QWORD*)(**(_QWORD**)(a1 + 136) + 16i64);
				if (v8)
					(**(void(__fastcall***)(__int64))v8)(v8);
				if (a2 && *(_QWORD*)(v8 + 528) > a2)
					break;
				if (!*(_WORD*)(v8 + 222))
					sub_140334D90(v8 + 144);
				v16 = 0x141DEDE30i64;
				sub_1401A3130(99, 3, &v16, v8 + 222, v15);
				sub_14033B360(v8);
				v9 = **(__int64***)(a1 + 136);
				v10 = *v9;
				v11 = (__int64*)v9[1];
				*v11 = *v9;
				*(_QWORD*)(v10 + 8) = v11;
				v12 = v9[2];
				if (v12)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
				sub_14018B900((__int64)v9, 0);
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				v13 = *(_QWORD**)(a1 + 136);
				v14 = 0i64;
				result = (_QWORD*)*v13;
				if ((_QWORD*)*v13 != v13)
				{
					do
					{
						result = (_QWORD*)*result;
						++v14;
					} while (result != v13);
					if (v14)
						continue;
				}
				return result;
			}
			return (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		}
	}
	return result;
}
// 14033D0B0: could not find valid save-restore pair for r14
// 14033D0EC: variable 'v2' is possibly undefined
// 14033D159: variable 'v15' is possibly undefined

