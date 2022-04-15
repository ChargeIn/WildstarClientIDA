#include "../winhttp.h"

//----- (000000014019A560) ----------------------------------------------------
__int64 __fastcall sub_14019A560(WCHAR** a1, unsigned __int64 a2, float* a3)
{
	WCHAR* i; // rbx
	int j; // esi
	int v8; // r14d
	int* v9; // r15
	int v10; // ebp
	WCHAR* v12; // rbx
	WCHAR* v13; // rsi
	unsigned __int64 v14; // rsi
	unsigned __int64 v15; // rsi
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // r8
	__int64 v19; // r9
	float v20; // xmm0_4
	float v21[4]; // [rsp+20h] [rbp-D8h] BYREF
	int v22[32]; // [rsp+30h] [rbp-C8h] BYREF

	for (i = *a1; (unsigned __int64)i < a2; ++i)
	{
		if (*i != 32 && *i != 9)
			break;
	}
	j = 0;
	v8 = 0;
	if ((unsigned __int64)i < a2 && *i == 45)
	{
		++i;
		v8 = 1;
	}
	v9 = (int*)i;
	v10 = 0;
	if ((unsigned __int64)i >= a2)
		goto LABEL_20;
	if (!(unsigned int)sub_1407DFF2C(*i))
		goto LABEL_13;
	++i;
	v10 = 1;
	if ((unsigned __int64)i < a2)
	{
		do
		{
			if (!(unsigned int)sub_1407DFF2C(*i))
				break;
			++i;
		} while ((unsigned __int64)i < a2);
	LABEL_13:
		if ((unsigned __int64)i < a2 && *i == 46 && (unsigned __int64)++i < a2)
		{
			if ((unsigned int)sub_1407DFF2C(*i))
			{
				++i;
				for (j = 1; (unsigned __int64)i < a2; ++i)
				{
					if (!(unsigned int)sub_1407DFF2C(*i))
						break;
				}
			}
		}
	}
LABEL_20:
	if (!v10 && !j)
		return 0i64;
	if ((unsigned __int64)i < a2 && (unsigned __int16)sub_1407DF5F4(*i) == 101)
	{
		v12 = i + 1;
		if ((unsigned __int64)v12 >= a2)
			return 0i64;
		if (*v12 == 45)
			++v12;
		if ((unsigned __int64)v12 >= a2 || !(unsigned int)sub_1407DFF2C(*v12))
			return 0i64;
		for (i = v12 + 1; (unsigned __int64)i < a2; ++i)
		{
			if (!(unsigned int)sub_1407DFF2C(*i))
				break;
		}
	}
	v13 = i;
	if ((unsigned __int64)i < a2 && (unsigned __int16)sub_1407DF5F4(*i) == 102)
		++i;
	v14 = ((char*)v13 - (char*)v9) >> 1;
	if (v14 >= 0x40)
		return 0i64;
	v15 = 2 * v14;
	sub_1407DB590(v22, v9, v15);
	if (v15 >= 0x80)
	{
		_report_rangecheckfailure(v17, v16, v18, v19);
		JUMPOUT(0x14019A76Ci64);
	}
	*(_WORD*)((char*)v22 + v15) = 0;
	if (!(unsigned int)sub_1407DF428(v22, (__int64)L"%f", v21))
		return 0i64;
	v20 = v21[0];
	*a1 = i;
	if (v8)
		v20 = -v20;
	*a3 = v20;
	return 1i64;
}
// 14019A767: control flows out of bounds to 14019A76C
// 14019A767: variable 'v17' is possibly undefined
// 14019A767: variable 'v16' is possibly undefined
// 14019A767: variable 'v18' is possibly undefined
// 14019A767: variable 'v19' is possibly undefined
// 1407DEDF4: using guessed type __int64 __fastcall _report_rangecheckfailure(_QWORD, _QWORD, _QWORD, _QWORD);
// 1409E3684: using guessed type wchar_t asc_1409E3684[3];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 14019A560: using guessed type int var_C8[32];
// 14019A560: using guessed type float var_D8[4];

