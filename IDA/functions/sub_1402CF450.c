#include "../winhttp.h"

//----- (00000001402CF450) ----------------------------------------------------
__int64 __fastcall sub_1402CF450(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbp
	__int64 v4; // r9
	__int64 v5; // rdx
	__int64 v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // rdi
	void(__fastcall * **v9)(_QWORD); // rcx
	__int64 v10; // rcx
	__int64 v11; // rax

	v3 = a3;
	v4 = a2 - a1;
	v5 = (unsigned __int128)((a2 - a1) * (__int128)(__int64)0xB21642C8590B2165ui64) >> 64;
	v6 = ((unsigned __int64)(v4 + v5) >> 63) + ((v4 + v5) >> 8);
	if (v6 > 0)
	{
		v7 = a3 + 128;
		v8 = a1 + 128;
		v3 = 368 * v6 + a3;
		do
		{
			*(_DWORD*)(v7 - 120) = *(_DWORD*)(v8 - 120);
			*(_QWORD*)(v7 - 112) = *(_QWORD*)(v8 - 112);
			*(_QWORD*)(v7 - 104) = *(_QWORD*)(v8 - 104);
			*(_QWORD*)(v7 - 96) = *(_QWORD*)(v8 - 96);
			*(_QWORD*)(v7 - 88) = *(_QWORD*)(v8 - 88);
			*(_DWORD*)(v7 - 80) = *(_DWORD*)(v8 - 80);
			*(_OWORD*)(v7 - 64) = *(_OWORD*)(v8 - 64);
			*(_OWORD*)(v7 - 48) = *(_OWORD*)(v8 - 48);
			*(_OWORD*)(v7 - 32) = *(_OWORD*)(v8 - 32);
			*(_OWORD*)(v7 - 16) = *(_OWORD*)(v8 - 16);
			*(_OWORD*)v7 = *(_OWORD*)v8;
			*(_OWORD*)(v7 + 16) = *(_OWORD*)(v8 + 16);
			*(_OWORD*)(v7 + 32) = *(_OWORD*)(v8 + 32);
			*(_OWORD*)(v7 + 48) = *(_OWORD*)(v8 + 48);
			*(_OWORD*)(v7 + 64) = *(_OWORD*)(v8 + 64);
			*(_OWORD*)(v7 + 80) = *(_OWORD*)(v8 + 80);
			*(_OWORD*)(v7 + 96) = *(_OWORD*)(v8 + 96);
			*(_OWORD*)(v7 + 112) = *(_OWORD*)(v8 + 112);
			*(_OWORD*)(v7 + 128) = *(_OWORD*)(v8 + 128);
			*(_OWORD*)(v7 + 144) = *(_OWORD*)(v8 + 144);
			*(_OWORD*)(v7 + 160) = *(_OWORD*)(v8 + 160);
			v9 = *(void(__fastcall****)(_QWORD))(v8 + 176);
			if (*(void(__fastcall****)(_QWORD))(v7 + 176) != v9)
			{
				if (v9)
					(**v9)(v9);
				v10 = *(_QWORD*)(v7 + 176);
				if (v10)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
				*(_QWORD*)(v7 + 176) = *(_QWORD*)(v8 + 176);
			}
			--v6;
			v7 += 368i64;
			*(_QWORD*)(v7 - 184) = *(_QWORD*)(v8 + 184);
			v11 = *(_QWORD*)(v8 + 192);
			v8 += 368i64;
			*(_QWORD*)(v7 - 176) = v11;
			*(_QWORD*)(v7 - 168) = *(_QWORD*)(v8 - 168);
			*(_QWORD*)(v7 - 160) = *(_QWORD*)(v8 - 160);
			*(_QWORD*)(v7 - 152) = *(_QWORD*)(v8 - 152);
			*(_QWORD*)(v7 - 144) = *(_QWORD*)(v8 - 144);
			*(_QWORD*)(v7 - 136) = *(_QWORD*)(v8 - 136);
		} while (v6 > 0);
	}
	return v3;
}

