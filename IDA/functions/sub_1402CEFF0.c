#include "../winhttp.h"

//----- (00000001402CEFF0) ----------------------------------------------------
__int64 __fastcall sub_1402CEFF0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rbx
	void(__fastcall * **v6)(_QWORD); // rcx
	__int64 v7; // rcx
	__int64 result; // rax

	if (a1 != a2)
	{
		v5 = a1 + 128;
		do
		{
			*(_DWORD*)(v5 - 120) = *(_DWORD*)(a3 + 8);
			*(_QWORD*)(v5 - 112) = *(_QWORD*)(a3 + 16);
			*(_QWORD*)(v5 - 104) = *(_QWORD*)(a3 + 24);
			*(_QWORD*)(v5 - 96) = *(_QWORD*)(a3 + 32);
			*(_QWORD*)(v5 - 88) = *(_QWORD*)(a3 + 40);
			*(_DWORD*)(v5 - 80) = *(_DWORD*)(a3 + 48);
			*(_OWORD*)(v5 - 64) = *(_OWORD*)(a3 + 64);
			*(_OWORD*)(v5 - 48) = *(_OWORD*)(a3 + 80);
			*(_OWORD*)(v5 - 32) = *(_OWORD*)(a3 + 96);
			*(_OWORD*)(v5 - 16) = *(_OWORD*)(a3 + 112);
			*(_OWORD*)v5 = *(_OWORD*)(a3 + 128);
			*(_OWORD*)(v5 + 16) = *(_OWORD*)(a3 + 144);
			*(_OWORD*)(v5 + 32) = *(_OWORD*)(a3 + 160);
			*(_OWORD*)(v5 + 48) = *(_OWORD*)(a3 + 176);
			*(_OWORD*)(v5 + 64) = *(_OWORD*)(a3 + 192);
			*(_OWORD*)(v5 + 80) = *(_OWORD*)(a3 + 208);
			*(_OWORD*)(v5 + 96) = *(_OWORD*)(a3 + 224);
			*(_OWORD*)(v5 + 112) = *(_OWORD*)(a3 + 240);
			*(_OWORD*)(v5 + 128) = *(_OWORD*)(a3 + 256);
			*(_OWORD*)(v5 + 144) = *(_OWORD*)(a3 + 272);
			*(_OWORD*)(v5 + 160) = *(_OWORD*)(a3 + 288);
			v6 = *(void(__fastcall****)(_QWORD))(a3 + 304);
			if (*(void(__fastcall****)(_QWORD))(v5 + 176) != v6)
			{
				if (v6)
					(**v6)(v6);
				v7 = *(_QWORD*)(v5 + 176);
				if (v7)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
				*(_QWORD*)(v5 + 176) = *(_QWORD*)(a3 + 304);
			}
			v5 += 368i64;
			*(_QWORD*)(v5 - 184) = *(_QWORD*)(a3 + 312);
			*(_QWORD*)(v5 - 176) = *(_QWORD*)(a3 + 320);
			*(_QWORD*)(v5 - 168) = *(_QWORD*)(a3 + 328);
			*(_QWORD*)(v5 - 160) = *(_QWORD*)(a3 + 336);
			*(_QWORD*)(v5 - 152) = *(_QWORD*)(a3 + 344);
			*(_QWORD*)(v5 - 144) = *(_QWORD*)(a3 + 352);
			*(_QWORD*)(v5 - 136) = *(_QWORD*)(a3 + 360);
			result = v5 - 128;
		} while (v5 - 128 != a2);
	}
	return result;
}

