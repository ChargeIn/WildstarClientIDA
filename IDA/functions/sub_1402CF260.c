#include "../winhttp.h"

//----- (00000001402CF260) ----------------------------------------------------
__int64 __fastcall sub_1402CF260(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // r9
	__int64 v5; // rbp
	__int64 v6; // rdx
	__int64 v7; // rsi
	__int64 v8; // rdi
	__int64 v9; // rbx
	void(__fastcall * **v10)(_QWORD); // rcx
	__int64 v11; // rcx

	v4 = a2 - a1;
	v5 = a3;
	v6 = (unsigned __int128)((a2 - a1) * (__int128)(__int64)0xB21642C8590B2165ui64) >> 64;
	v7 = ((unsigned __int64)(v4 + v6) >> 63) + ((v4 + v6) >> 8);
	if (v7 > 0)
	{
		v8 = a2 + 128;
		v9 = a3 + 128;
		v5 = -368 * v7 + a3;
		do
		{
			v8 -= 368i64;
			v9 -= 368i64;
			*(_DWORD*)(v9 - 120) = *(_DWORD*)(v8 - 120);
			*(_QWORD*)(v9 - 112) = *(_QWORD*)(v8 - 112);
			*(_QWORD*)(v9 - 104) = *(_QWORD*)(v8 - 104);
			*(_QWORD*)(v9 - 96) = *(_QWORD*)(v8 - 96);
			*(_QWORD*)(v9 - 88) = *(_QWORD*)(v8 - 88);
			*(_DWORD*)(v9 - 80) = *(_DWORD*)(v8 - 80);
			*(_OWORD*)(v9 - 64) = *(_OWORD*)(v8 - 64);
			*(_OWORD*)(v9 - 48) = *(_OWORD*)(v8 - 48);
			*(_OWORD*)(v9 - 32) = *(_OWORD*)(v8 - 32);
			*(_OWORD*)(v9 - 16) = *(_OWORD*)(v8 - 16);
			*(_OWORD*)v9 = *(_OWORD*)v8;
			*(_OWORD*)(v9 + 16) = *(_OWORD*)(v8 + 16);
			*(_OWORD*)(v9 + 32) = *(_OWORD*)(v8 + 32);
			*(_OWORD*)(v9 + 48) = *(_OWORD*)(v8 + 48);
			*(_OWORD*)(v9 + 64) = *(_OWORD*)(v8 + 64);
			*(_OWORD*)(v9 + 80) = *(_OWORD*)(v8 + 80);
			*(_OWORD*)(v9 + 96) = *(_OWORD*)(v8 + 96);
			*(_OWORD*)(v9 + 112) = *(_OWORD*)(v8 + 112);
			*(_OWORD*)(v9 + 128) = *(_OWORD*)(v8 + 128);
			*(_OWORD*)(v9 + 144) = *(_OWORD*)(v8 + 144);
			*(_OWORD*)(v9 + 160) = *(_OWORD*)(v8 + 160);
			v10 = *(void(__fastcall****)(_QWORD))(v8 + 176);
			if (*(void(__fastcall****)(_QWORD))(v9 + 176) != v10)
			{
				if (v10)
					(**v10)(v10);
				v11 = *(_QWORD*)(v9 + 176);
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
				*(_QWORD*)(v9 + 176) = *(_QWORD*)(v8 + 176);
			}
			--v7;
			*(_QWORD*)(v9 + 184) = *(_QWORD*)(v8 + 184);
			*(_QWORD*)(v9 + 192) = *(_QWORD*)(v8 + 192);
			*(_QWORD*)(v9 + 200) = *(_QWORD*)(v8 + 200);
			*(_QWORD*)(v9 + 208) = *(_QWORD*)(v8 + 208);
			*(_QWORD*)(v9 + 216) = *(_QWORD*)(v8 + 216);
			*(_QWORD*)(v9 + 224) = *(_QWORD*)(v8 + 224);
			*(_QWORD*)(v9 + 232) = *(_QWORD*)(v8 + 232);
		} while (v7 > 0);
	}
	return v5;
}

