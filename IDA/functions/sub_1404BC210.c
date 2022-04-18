#include "../winhttp.h"

//----- (00000001404BC210) ----------------------------------------------------
__int64 __fastcall sub_1404BC210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	unsigned __int64 v7; // rdi
	__int64 result; // rax
	_QWORD* v9; // rbx
	__int64 v10; // rcx
	__int64* v11; // rbx
	__int64 v12; // rbx
	_WORD* v13; // r8
	_WORD* v14; // rdx
	__int64 v15; // rax
	__int16* v16; // rax
	_WORD* v17; // rdx
	__int16* v18; // r8
	__int64 v19; // rax
	char* v20; // r8
	__int16 v21; // cx

	v7 = (*(__int64(__fastcall**)(__int64))(a1 + 480))(a2);
	result = v7 / *(_QWORD*)(a1 + 464);
	v9 = *(_QWORD**)(*(_QWORD*)(a1 + 472) + 8 * (v7 % *(_QWORD*)(a1 + 464)));
	if (v9)
	{
		while (1)
		{
			if (v7 == *v9)
			{
				result = (*(__int64(__fastcall**)(__int64, _QWORD*))(a1 + 488))(a2, v9 + 2);
				if ((_DWORD)result)
					break;
			}
			v9 = (_QWORD*)v9[1];
			if (!v9)
				return result;
		}
		v11 = v9 + 4;
		if (v11)
		{
			v12 = *v11;
			if (a5)
			{
				v13 = *(_WORD**)(a5 + 16);
				v14 = (_WORD*)(v12 + 12);
				v15 = 33i64;
				while (v15 != -2147483613 && *v13)
				{
					*v14++ = *v13++;
					if (!--v15)
					{
						--v14;
						break;
					}
				}
				*v14 = 0;
				*(_DWORD*)(v12 + 232) = *(_DWORD*)(a5 + 28);
				*(_DWORD*)(v12 + 236) = *(_DWORD*)(a5 + 44);
				*(_DWORD*)(v12 + 212) = *(_DWORD*)(a5 + 32);
				*(_QWORD*)(v12 + 200) = *(_QWORD*)(a5 + 48);
				*(_DWORD*)(v12 + 208) = *(_DWORD*)(a5 + 36);
				*(_DWORD*)(v12 + 224) = *(_DWORD*)(a5 + 24);
				result = *(unsigned int*)(a5 + 40);
				*(_DWORD*)(v12 + 216) = result;
			}
			else
			{
				v16 = sub_14034BDD0(v10, 108);
				v17 = (_WORD*)(v12 + 12);
				v18 = v16;
				v19 = 33i64;
				v20 = (char*)v18 - v12 - 12;
				while (v19 != -2147483613)
				{
					v21 = *(_WORD*)((char*)v17 + (_QWORD)v20);
					if (!v21)
						break;
					*v17++ = v21;
					if (!--v19)
					{
						--v17;
						break;
					}
				}
				result = 0i64;
				*v17 = 0;
				*(_QWORD*)(v12 + 232) = 0i64;
			}
			if (*(_DWORD*)(v12 + 240))
				return Apollo_LUAEvent(
					*(_QWORD*)(qword_140C65898 + 29504),
					"HousingNeighborUpdate",
					byte_1409EBF9C,
					*(unsigned int*)(v12 + 8));
		}
	}
	return result;
}
// 1404BC2CA: conditional instruction was optimized away because rax.8!=0
// 1404BC367: conditional instruction was optimized away because rax.8!=0
// 1404BC323: variable 'v10' is possibly undefined
// 1409EBF9C: using guessed type _BYTE byte_1409EBF9C[40];
// 140C65898: using guessed type __int64 qword_140C65898;

