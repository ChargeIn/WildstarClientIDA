#include "../winhttp.h"

//----- (0000000140860C80) ----------------------------------------------------
__int64 __fastcall sub_140860C80(__int64 a1, __int64* a2, char a3)
{
	unsigned int v5; // eax
	__int64 result; // rax
	__int64 v7; // rax
	__int64* v8; // rdx
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v12; // rdi
	__int64 v13; // r8
	__int64 v14; // r9
	__int64 v15; // [rsp+40h] [rbp-38h] BYREF
	__int64 v16; // [rsp+48h] [rbp-30h]
	int v17; // [rsp+50h] [rbp-28h]
	int v18; // [rsp+54h] [rbp-24h]
	__int64 v19; // [rsp+58h] [rbp-20h]
	__int16 v20; // [rsp+60h] [rbp-18h]

	if (a3 || (v5 = *(_DWORD*)(a1 + 404), v5 <= 1))
	{
		v7 = *(_QWORD*)a1;
		*(_DWORD*)(a1 + 404) = 0;
		(*(void (**)(void))(v7 + 48))();
		v8 = *(__int64**)(a1 + 136);
		if (*(_DWORD*)a2)
		{
			v9 = *a2;
			if (v8)
			{
				return sub_14083AB80(qword_140C61B70, v8, 0x8000000i64, 1.0, v9, SHIDWORD(v9), 0);
			}
			else
			{
				v17 = *(_DWORD*)(a1 + 300);
				v18 = 1065353216;
				v16 = 0x8000000i64;
				v19 = v9;
				v15 = a1 + 16;
				v20 = 256;
				v10 = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)&v15, 1, 0);
				v11 = *(_QWORD*)a1;
				*(_BYTE*)(a1 + 144) &= ~2u;
				v12 = v10;
				*(_QWORD*)(a1 + 136) = v10;
				result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(v11 + 128))(a1, 14i64, (unsigned int)v9);
				if (!v12)
				{
					LOBYTE(v14) = 1;
					return (**(__int64(__fastcall***)(__int64, __int64, __int64, __int64))(a1 + 16))(a1 + 16, v16, v13, v14);
				}
			}
		}
		else if (v8)
		{
			return sub_14083AB80(qword_140C61B70, v8, 0x8000000i64, 1.0, 0, 4, 0);
		}
		else
		{
			*(_DWORD*)(a1 + 300) = 1065353216;
			return sub_14085D440(a1);
		}
	}
	else
	{
		result = v5 - 1;
		*(_DWORD*)(a1 + 404) = result;
	}
	return result;
}
// 140860D91: variable 'v13' is possibly undefined
// 140860D91: variable 'v14' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61B70: using guessed type __int64 qword_140C61B70;

