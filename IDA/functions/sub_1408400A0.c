//----- (00000001408400A0) ----------------------------------------------------
__int64 __fastcall sub_1408400A0(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned int v5; // ebp
	__int64 v6; // rax
	__int64 v7; // rsi
	__int64 v8; // rbx
	__int128 v9; // xmm1
	__int32 v10; // r8d
	__int32 v11; // eax
	__int64 v12; // rax
	__int64 i; // rdi
	__int32 v14; // eax
	__int64 v15; // rax
	__m128i v17; // [rsp+30h] [rbp-78h] BYREF
	__m128i v18; // [rsp+40h] [rbp-68h] BYREF
	__int128 v19[3]; // [rsp+50h] [rbp-58h] BYREF
	__int64 v20; // [rsp+80h] [rbp-28h]

	v5 = 1;
	v6 = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776), a3);
	v7 = v6;
	if (v6)
	{
		if (!*(_DWORD*)(v6 + 40))
		{
			v8 = *(_QWORD*)(v6 + 32);
			if (v8)
			{
				while (1)
				{
					if (*(_WORD*)(v8 + 60) == 1027)
					{
						v9 = *(_OWORD*)(a2 + 16);
						v10 = *(_DWORD*)(v8 + 64);
						v19[0] = *(_OWORD*)a2;
						v19[1] = v9;
						*(_QWORD*)&v9 = *(_QWORD*)(a2 + 48);
						v19[2] = *(_OWORD*)(a2 + 32);
						v20 = v9;
						v5 = sub_14083FF20(a1, (__int64)v19, v10, 2, 0);
						if (v5 != 1)
							goto LABEL_11;
						v5 = sub_140853B00(*(_DWORD*)(v8 + 56));
						if (v5 != 1)
							break;
					}
					v8 = *(_QWORD*)(v8 + 32);
					if (!v8)
						goto LABEL_16;
				}
				v11 = *(_DWORD*)(v8 + 64);
				v17.m128i_i64[1] = 0i64;
				v17.m128i_i32[0] = v11;
				v12 = sub_140868CC0(a1 + 1776, &v17);
				if (v12)
					sub_140842230(v12, 0);
			LABEL_11:
				for (i = *(_QWORD*)(v7 + 32); i != v8; i = *(_QWORD*)(i + 32))
				{
					if (*(_WORD*)(i + 60) == 1027)
					{
						sub_1408552B0(*(_DWORD*)(i + 56));
						v14 = *(_DWORD*)(i + 64);
						v17.m128i_i64[1] = 0i64;
						v17.m128i_i32[0] = v14;
						v18 = (__m128i)v17.m128i_u64[0];
						v15 = sub_140868CC0(a1 + 1776, &v18);
						if (v15)
							sub_140842230(v15, 0);
					}
				}
			LABEL_16:
				if (v5 != 1)
					goto LABEL_19;
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		}
		++* (_DWORD*)(v7 + 40);
	LABEL_19:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
		return v5;
	}
	return 15i64;
}

