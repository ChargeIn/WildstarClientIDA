#include "../winhttp.h"

//----- (000000014026B680) ----------------------------------------------------
__int64 __fastcall sub_14026B680(__int64 a1)
{
	unsigned int v2; // edi
	__int64 v3; // rsi
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned int v10; // ebp
	__int64* v11; // r14
	unsigned int* v12; // rsi
	__int64 v13; // rcx
	unsigned int v14; // esi
	_QWORD* i; // r14
	_DWORD* v16; // rsi
	int v17; // r9d
	int v18; // [rsp+70h] [rbp+8h] BYREF
	__int64 v19; // [rsp+78h] [rbp+10h] BYREF

	sub_140275820((__int64*)(a1 + 6640), *(unsigned int*)(a1 + 232));
	v2 = 0;
	v3 = 0i64;
	if (*(_QWORD*)(a1 + 6648))
	{
		while (1)
		{
			result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6608) + 944i64))(
				*(_QWORD*)(a1 + 6608),
				8i64,
				*(_QWORD*)(a1 + 6640) + 8 * v3);
			if ((int)result < 0)
				break;
			v5 = *(_QWORD*)(*(_QWORD*)(a1 + 6640) + 8 * v3);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 48i64))(v5, 1i64);
			if ((unsigned __int64)++v3 >= *(_QWORD*)(a1 + 6648))
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		v6 = *(_QWORD*)(a1 + 7048);
		v7 = *(_QWORD*)(a1 + 6608);
		v8 = *(_QWORD*)(a1 + 7056);
		*(_DWORD*)(a1 + 7076) = 0;
		result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, __int64, _QWORD))(*(_QWORD*)v7 + 208i64))(
			v7,
			*(unsigned int*)(a1 + 7072),
			*(unsigned int*)(v6 + 12),
			0i64,
			*(_DWORD*)(v8 + 12),
			a1 + 7064,
			0i64);
		if ((int)result >= 0)
		{
			if (*(_DWORD*)(a1 + 10428)
				&& !(unsigned int)sub_1408194D0(*(_QWORD*)(a1 + 6608), *(_QWORD*)(a1 + 7064), (__int64)&v19))
			{
				v9 = *(_QWORD*)(a1 + 6608);
				v18 = 1;
				sub_140819670(v9, v19, 1u, 1u, (__int64)&v18);
			}
			v10 = 0;
			v11 = (__int64*)(a1 + 7096);
			v12 = (unsigned int*)(a1 + 7112);
			while (1)
			{
				v12[2] = 0;
				result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 216i64))(
					*(_QWORD*)(a1 + 6608),
					*v12,
					*(unsigned int*)(*(_QWORD*)(a1 + 7048) + 12i64),
					*(unsigned int*)((char*)v12 + (_QWORD)&unk_140AE79F8 - a1 - 7112),
					*(_DWORD*)(*(_QWORD*)(a1 + 7056) + 12i64),
					a1 + 8 * (v10 + 887i64),
					0i64);
				if ((int)result < 0)
					break;
				if (*(_DWORD*)(a1 + 10428) && !(unsigned int)sub_1408194D0(*(_QWORD*)(a1 + 6608), *v11, (__int64)&v19))
				{
					v13 = *(_QWORD*)(a1 + 6608);
					v18 = 1;
					sub_140819670(v13, v19, 1u, 1u, (__int64)&v18);
				}
				++v10;
				++v11;
				++v12;
				if (v10 >= 2)
				{
					v14 = 0;
					for (i = (_QWORD*)(a1 + 6656); ; ++i)
					{
						result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 688i64))(
							*(_QWORD*)(a1 + 6608),
							*i,
							a1 + 8 * (v14 + 855i64));
						if ((int)result < 0)
							break;
						if (++v14 >= 0x17)
						{
							sub_1407E4830((int*)(a1 + 7748), 223i64, 0x348ui64);
							sub_1407E4830((int*)(a1 + 8588), 223i64, 0x380ui64);
							sub_1407E4830((int*)(a1 + 9484), 223i64, 0xE0ui64);
							*(_DWORD*)(a1 + 7088) = 23;
							*(_DWORD*)(a1 + 9708) = 0;
							sub_1407E4830((int*)(a1 + 9712), 0i64, 0x100ui64);
							sub_1407E4830((int*)(a1 + 9968), 223i64, 0x40ui64);
							*(_QWORD*)(a1 + 10032) = 0i64;
							*(_QWORD*)(a1 + 10040) = 0i64;
							sub_1407E4830((int*)(a1 + 10048), 255i64, 0x80ui64);
							sub_1407E4830((int*)(a1 + 10176), 255i64, 0x40ui64);
							sub_1407E4830((int*)(a1 + 10240), 255i64, 0x40ui64);
							*(_QWORD*)(a1 + 10304) = -1i64;
							*(_QWORD*)(a1 + 10312) = -1i64;
							*(_QWORD*)(a1 + 10320) = -1i64;
							*(_QWORD*)(a1 + 10328) = -1i64;
							*(_QWORD*)(a1 + 10336) = -1i64;
							*(_QWORD*)(a1 + 10344) = -1i64;
							*(_QWORD*)(a1 + 10352) = -1i64;
							*(_QWORD*)(a1 + 10360) = -1i64;
							*(_DWORD*)(a1 + 10368) = 16;
							*(_DWORD*)(a1 + 10372) = 4;
							*(_QWORD*)(a1 + 10376) = 0i64;
							*(_QWORD*)(a1 + 10384) = qword_140C77760;
							(*(void(__fastcall**)(__int64, void*, void*, void*, void*))(*(_QWORD*)a1 + 520i64))(
								a1,
								&unk_140C79A80,
								&unk_140C3FE88,
								&unk_140C3FE88,
								&unk_140C3FE88);
							(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)a1 + 528i64))(a1, &unk_140C79A80, 1i64);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 288i64))(a1);
							v16 = (_DWORD*)(a1 + 8628);
							do
							{
								v17 = *(_DWORD*)(a1 + 196);
								if (*v16 != v17)
								{
									*v16 = v17;
									(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
										*(_QWORD*)(a1 + 6608),
										v2,
										10i64);
								}
								++v2;
								v16 += 14;
							} while (v2 < 0x10);
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6608) + 328i64))(*(_QWORD*)(a1 + 6608));
							return 0i64;
						}
					}
					return result;
				}
			}
		}
	}
	return result;
}
// 140C77760: using guessed type __int64 qword_140C77760;

