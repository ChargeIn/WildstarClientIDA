#include "../winhttp.h"

//----- (00000001403FFA80) ----------------------------------------------------
__int64 __fastcall sub_1403FFA80(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rdx
	__int64 v6; // rsi
	__int64 v7; // rdi
	void(__fastcall * **v8)(_QWORD); // rcx
	void(__fastcall * **v9)(_QWORD); // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx

	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x4924924924924925i64) >> 64;
	v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 5);
	if (v6 > 0)
	{
		v7 = a2 + 16;
		do
		{
			v7 -= 112i64;
			a3 -= 112i64;
			if (a3 != v7 - 16)
			{
				v8 = *(void(__fastcall****)(_QWORD))(v7 + 40);
				if (v8)
					(**v8)(v8);
				v9 = *(void(__fastcall****)(_QWORD))(v7 + 48);
				if (v9)
					(**v9)(v9);
				v10 = *(_QWORD*)(a3 + 56);
				if (v10)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
					*(_QWORD*)(a3 + 56) = 0i64;
				}
				v11 = *(_QWORD*)(a3 + 64);
				if (v11)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
					*(_QWORD*)(a3 + 64) = 0i64;
				}
				*(_DWORD*)a3 = *(_DWORD*)(v7 - 16);
				if (v7 - 8 != a3 + 8)
					sub_14001C480(a3 + 8, *(int**)v7, *(int**)(v7 + 8));
				*(_DWORD*)(a3 + 40) = *(_DWORD*)(v7 + 24);
				*(_DWORD*)(a3 + 44) = *(_DWORD*)(v7 + 28);
				*(_DWORD*)(a3 + 48) = *(_DWORD*)(v7 + 32);
				*(_QWORD*)(a3 + 56) = *(_QWORD*)(v7 + 40);
				*(_QWORD*)(a3 + 64) = *(_QWORD*)(v7 + 48);
				*(_DWORD*)(a3 + 72) = *(_DWORD*)(v7 + 56);
				*(_DWORD*)(a3 + 76) = *(_DWORD*)(v7 + 60);
				*(_DWORD*)(a3 + 84) = *(_DWORD*)(v7 + 68);
				*(_OWORD*)(a3 + 96) = *(_OWORD*)(v7 + 80);
				*(_DWORD*)(a3 + 88) = *(_DWORD*)(v7 + 72);
				*(_DWORD*)(a3 + 80) = *(_DWORD*)(v7 + 64);
			}
			--v6;
		} while (v6 > 0);
	}
	return a3;
}

