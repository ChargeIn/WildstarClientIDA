#include "../winhttp.h"

//----- (000000014055A050) ----------------------------------------------------
void __fastcall sub_14055A050(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // r9
	__int64 v6; // rcx
	__m256i v7; // [rsp+48h] [rbp-C0h] BYREF
	__m256i v8; // [rsp+68h] [rbp-A0h] BYREF
	__int128 v9; // [rsp+88h] [rbp-80h]
	__int128 v10; // [rsp+98h] [rbp-70h]
	__m256i v11; // [rsp+A8h] [rbp-60h] BYREF
	__int128 v12; // [rsp+C8h] [rbp-40h]
	__int128 v13; // [rsp+D8h] [rbp-30h]
	__int64 v14; // [rsp+E8h] [rbp-20h]

	if (*(_DWORD*)(a1 + 4) != -1)
	{
		v7.m256i_i32[0] = 1077936128;
		v7.m256i_i64[3] = a1 + 32;
		*(_OWORD*)&v7.m256i_u64[1] = 0ui64;
		v11 = v7;
		sub_1401B0590(v11.m256i_i32, (__int64)&v8);
		v2 = *(_QWORD*)(a1 + 144);
		if (v2)
		{
			v14 = 0i64;
			v11 = v8;
			v12 = v9;
			v13 = v10;
			(*(void(__fastcall**)(__int64, __m256i*))(*(_QWORD*)v2 + 320i64))(v2, &v11);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 144) + 152i64))(*(_QWORD*)(a1 + 144));
			v3 = *(_QWORD*)(a1 + 136);
			if (v3)
			{
				v7.m256i_i64[0] = 150i64;
				*(_OWORD*)&v7.m256i_u64[1] = 0x3F800000ui64;
				v7.m256i_i64[3] = 0i64;
				(*(void(__fastcall**)(__int64, _QWORD, __m256i*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v7);
			}
		}
		else if ((*(int(__fastcall**)(_QWORD, const wchar_t*, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264)
			+ 40i64))(
				*(_QWORD*)(qword_140C65898 + 29264),
				L"Art\\Prop\\Constructed\\ClickToMove\\PRP_ClickToMove_000.m3",
				a1 + 136,
				0i64) >= 0)
		{
			v4 = *(_QWORD*)(a1 + 136);
			v7.m256i_i64[0] = 150i64;
			memset((char*)&v7.m256i_u64[1] + 4, 0, 20);
			v7.m256i_i32[2] = 1065353216;
			(*(void(__fastcall**)(__int64, _QWORD, __m256i*))(*(_QWORD*)v4 + 584i64))(v4, 0i64, &v7);
			v5 = *(_QWORD*)(a1 + 136);
			v6 = *(_QWORD*)(qword_140C65898 + 29256);
			v11 = v8;
			v14 = 0i64;
			v12 = v9;
			v13 = v10;
			(*(void(__fastcall**)(__int64, _QWORD, __m256i*, __int64, int, _DWORD, __int64, _DWORD))(*(_QWORD*)v6 + 184i64))(
				v6,
				0i64,
				&v11,
				v5,
				1,
				0,
				a1 + 144,
				0);
		}
	}
}
// 140B1E840: using guessed type wchar_t aArtPropConstru[56];
// 140C65898: using guessed type __int64 qword_140C65898;

