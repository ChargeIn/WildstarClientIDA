#include "../winhttp.h"

//----- (0000000140472510) ----------------------------------------------------
__int64 __fastcall sub_140472510(__int64* a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 result; // rax
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+28h] [rbp-20h]
	int v11; // [rsp+2Ch] [rbp-1Ch]
	int v12; // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+34h] [rbp-14h]

	if (!a4)
	{
		if (a2 == 7)
		{
			v9 = 0i64;
			v11 = 0;
			v13 = 0i64;
			v6 = 7i64;
		}
		else
		{
			if (a2 != 11)
				return result;
			*(_DWORD*)(a6 + 13772) = 0;
			v9 = 0i64;
			v11 = 0;
			v13 = 0i64;
			v6 = 11i64;
		}
		v7 = *a1;
		v10 = 1065353216;
		v12 = 0;
		return (*(__int64(__fastcall**)(__int64*, __int64, __int64*))(v7 + 600))(a1, v6, &v9);
	}
	return result;
}

