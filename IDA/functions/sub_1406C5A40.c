#include "../winhttp.h"

//----- (00000001406C5A40) ----------------------------------------------------
__int64 __fastcall sub_1406C5A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, float a7)
{
	__int128 v9; // xmm1
	__int64 result; // rax
	_QWORD* v13; // rcx
	_QWORD* v14; // rcx
	__int64 v15; // rcx
	unsigned int v16; // ebx
	char* v17; // r8
	unsigned __int16* v18; // r8
	unsigned int v19; // edx
	__int128 v20; // [rsp+50h] [rbp-51h] BYREF
	__m128 v21; // [rsp+60h] [rbp-41h] BYREF
	__int128 v22; // [rsp+70h] [rbp-31h]
	__int128 v23; // [rsp+80h] [rbp-21h] BYREF
	char v24[2]; // [rsp+90h] [rbp-11h] BYREF
	char v25; // [rsp+92h] [rbp-Fh] BYREF

	v9 = *(_OWORD*)(a6 + 16);
	v21 = *(__m128*)a6;
	v22 = v9;
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	if (a5)
	{
		result = (unsigned __int64)*(unsigned int*)(a1 + 664) >> 14;
		if ((*(_DWORD*)(a1 + 664) & 0x4000i64) == 0)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a5 + 120i64))(a5);
			if (*(_DWORD*)(result + 128))
			{
				v13 = *(_QWORD**)a4;
				v20 = xmmword_140B7B240;
				*((float*)&v22 + 1) = *((float*)&v22 + 1) - (float)((float)(*((float*)&v22 + 1) - v21.m128_f32[1]) * a7);
				if (v13)
					return sub_140103E60(
						v13,
						&v21,
						(__m128*) & v20,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a4 + 8)) * *(float*)(a4 + 12)));
				return result;
			}
			if ((*(_DWORD*)(a1 + 664) & 0x800i64) == 0)
			{
				v14 = *(_QWORD**)a3;
				v20 = xmmword_140B7ACA0;
				if (v14)
					sub_140103E60(
						v14,
						&v21,
						(__m128*) & v20,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a3 + 8)) * *(float*)(a3 + 12)));
			}
			v16 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a5 + 120i64))(a5) + 136);
			if (v16 >= 0x3E8)
			{
				if (v16 >= 0x186A0)
				{
					if (v16 >= 0x36EE80)
					{
						result = (__int64)sub_14034BDD0(v15, 495859);
						v18 = (unsigned __int16*)result;
						if (!result)
							return result;
						v19 = v16 / 0x36EE80;
					}
					else
					{
						result = (__int64)sub_14034BDD0(v15, 495858);
						v18 = (unsigned __int16*)result;
						if (!result)
							return result;
						v19 = (v16 + 30000) / 0xEA60;
					}
				}
				else
				{
					result = (__int64)sub_14034BDD0(v15, 495857);
					v18 = (unsigned __int16*)result;
					if (!result)
						return result;
					v19 = v16 / 0x3E8;
				}
				result = sub_14034BF80(v24, 16i64, v18, v19);
				if ((int)result >= 0)
				{
					v17 = v24;
					goto LABEL_23;
				}
			}
			else
			{
				result = (__int64)sub_14034BDD0(v15, 495856);
				if (result)
				{
					result = sub_14034BF80(v24, 16i64, (unsigned __int16*)result, (float)((float)(int)v16 * 0.001));
					if ((int)result >= 0)
					{
						v17 = &v25;
					LABEL_23:
						v20 = xmmword_140C777D0;
						v23 = xmmword_140B7B240;
						return (*(__int64(__fastcall**)(__int64, _QWORD, char*, __int64, __m128*, int, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
							qword_140C65680,
							*(_QWORD*)(a2 + 96),
							v17,
							-1i64,
							&v21,
							5,
							&v23,
							&v20,
							1);
					}
				}
			}
		}
	}
	return result;
}
// 1406C5BA6: variable 'v15' is possibly undefined
// 140B7ACA0: using guessed type __int128 xmmword_140B7ACA0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

