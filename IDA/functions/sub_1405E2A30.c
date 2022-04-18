#include "../winhttp.h"

//----- (00000001405E2A30) ----------------------------------------------------
__int64 __fastcall sub_1405E2A30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
	char* v19; // r8
	__int16 v20; // cx
	__int64 v21; // rcx

	v7 = (*(__int64(__fastcall**)(__int64))(a1 + 184))(a2);
	result = v7 / *(_QWORD*)(a1 + 168);
	v9 = *(_QWORD**)(*(_QWORD*)(a1 + 176) + 8 * (v7 % *(_QWORD*)(a1 + 168)));
	if (v9)
	{
		while (1)
		{
			if (v7 == *v9)
			{
				result = (*(__int64(__fastcall**)(__int64, _QWORD*))(a1 + 192))(a2, v9 + 2);
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
				*(_DWORD*)(v12 + 244) = *(_DWORD*)(a5 + 28);
				*(_DWORD*)(v12 + 248) = *(_DWORD*)(a5 + 44);
				*(_DWORD*)(v12 + 228) = *(_DWORD*)(a5 + 32);
				*(_QWORD*)(v12 + 200) = *(_QWORD*)(a5 + 48);
				*(_DWORD*)(v12 + 224) = *(_DWORD*)(a5 + 36);
				*(_DWORD*)(v12 + 240) = *(_DWORD*)(a5 + 24);
				result = *(unsigned int*)(a5 + 40);
				*(_DWORD*)(v12 + 232) = result;
			}
			else
			{
				v16 = sub_14034BDD0(v10, 108);
				v17 = (_WORD*)(v12 + 12);
				v18 = v16;
				result = 33i64;
				v19 = (char*)v18 - v12 - 12;
				while (result != -2147483613)
				{
					v20 = *(_WORD*)((char*)v17 + (_QWORD)v19);
					if (!v20)
						break;
					*v17++ = v20;
					if (!--result)
					{
						--v17;
						break;
					}
				}
				*v17 = 0;
				*(_QWORD*)(v12 + 244) = 0i64;
			}
			if (*(_DWORD*)(v12 + 256))
			{
				result = Apollo_LUAEvent(
					*(_QWORD*)(qword_140C65898 + 29504),
					"FriendshipUpdate",
					byte_1409EAC3C,
					*(unsigned int*)(v12 + 8));
				if (*(_DWORD*)(v12 + 252))
				{
					v21 = qword_140C65898;
					*(_DWORD*)(v12 + 252) = 0;
					return Apollo_LUAEvent(
						*(_QWORD*)(v21 + 29504),
						"FriendshipUpdateOnline",
						byte_1409EAC04,
						*(unsigned int*)(v12 + 8));
				}
			}
		}
	}
	return result;
}
// 1405E2AEA: conditional instruction was optimized away because rax.8!=0
// 1405E2B87: conditional instruction was optimized away because rax.8!=0
// 1405E2B43: variable 'v10' is possibly undefined
// 1409EAC04: using guessed type _BYTE byte_1409EAC04[48];
// 1409EAC3C: using guessed type _BYTE byte_1409EAC3C[32];
// 140C65898: using guessed type __int64 qword_140C65898;

