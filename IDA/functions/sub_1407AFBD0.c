#include "../winhttp.h"

//----- (00000001407AFBD0) ----------------------------------------------------
__int64 __fastcall sub_1407AFBD0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	signed int v6; // edi
	__int64 v7; // r15
	__int16* v8; // r14
	__int64 v9; // r13
	const __m128i* v10; // rbx
	WCHAR v11; // ax
	__int16 v12; // ax
	const __m128i* v13; // rcx
	const __m128i* v14; // rcx
	const __m128i* v15; // rdx
	__int64 i; // rax
	__int16* v17; // rcx
	signed __int64 v18; // rdx
	__int16 v19; // ax
	__int16* v20; // r9
	__int16* v21; // r10
	const wchar_t* v22; // r8
	__int64 v23; // rcx
	char* v24; // rdx
	__int16 v25; // ax
	__int16 v26; // ax
	__int16 v27; // ax
	__int16 v28; // ax
	__int64 v29; // rax
	__m128i* v30; // rax
	bool v31; // zf
	int v32; // eax
	__int64 v33; // rbx
	__int64 v34; // rbp
	__int64 v35; // rsi
	__int64 v36; // rdi
	__int64 v37; // rax
	__int64 v38; // [rsp+30h] [rbp-888h] BYREF
	__int64 v39; // [rsp+38h] [rbp-880h]
	__int64 v40; // [rsp+40h] [rbp-878h]
	__int16 v41[256]; // [rsp+50h] [rbp-868h] BYREF
	__m128i v42[33]; // [rsp+250h] [rbp-668h] BYREF
	__int16 v43[256]; // [rsp+460h] [rbp-458h] BYREF
	char v44[528]; // [rsp+660h] [rbp-258h] BYREF

	v39 = a1;
	v3 = *(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4904i64);
	v40 = a2;
	if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 24i64))(v3, 0xFFFFFFFFi64))
	{
		v6 = sub_1407B00B0(a1);
		if (v6 >= 0 && (*(_BYTE*)(a1 + 56) & 1) != 0)
		{
			v7 = 256i64;
			v8 = v43;
			v9 = 256i64;
			v10 = (const __m128i*)(*(_QWORD*)(a1 + 8) + 232i64);
			if (v10)
			{
				if ((unsigned int)sub_1407DFF20(v10->m128i_i16[0]) && v10->m128i_i16[1] == 58
					|| (!v10->m128i_i16[1] || v10->m128i_i16[2] != 58 ? (v11 = 0) : (v11 = 1), (unsigned int)sub_1407DFF20(v11)))
				{
					if (v10->m128i_i16[0])
					{
						while (v10->m128i_i16[0] != 58)
						{
							v12 = v10->m128i_i16[1];
							v10 = (const __m128i*)((char*)v10 + 2);
							if (!v12)
								goto LABEL_18;
						}
						v10 = (const __m128i*)((char*)v10 + 2);
					}
				}
			LABEL_18:
				v13 = sub_1407DD8D8(v10, 0x2Fu);
				if (v13 || (v13 = sub_1407DD8D8(v10, 0x5Cu)) != 0i64)
				{
					v14 = (const __m128i*) & v13->m128i_i8[2];
					if (v14)
					{
						for (; v10 != v14; v10 = (const __m128i*)((char*)v10 + 2))
							;
					}
				}
				v15 = sub_1407DD8D8(v10, 0x2Eu);
				if (!v15)
				{
					for (i = 0i64; v10->m128i_i16[i]; ++i)
						;
					v15 = (const __m128i*)((char*)v10 + 2 * i);
				}
				if (v10 != v15)
				{
					do
					{
						if (v9 == 1)
						{
							if (v8)
								*v8 = 0;
							goto LABEL_42;
						}
						if (v8)
						{
							++v8;
							--v9;
							*(v8 - 1) = v10->m128i_i16[0];
						}
						v10 = (const __m128i*)((char*)v10 + 2);
					} while (v10 != v15);
					if (!v8)
						goto LABEL_34;
				}
				*v8 = 0;
			LABEL_34:
				v17 = v41;
				v18 = (char*)v15 - (char*)v41;
				while (v7 != -2147483390)
				{
					v19 = *(__int16*)((char*)v17 + v18);
					if (!v19)
						break;
					*v17++ = v19;
					if (!--v7)
					{
						*(v17 - 1) = 0;
						goto LABEL_42;
					}
				}
				*v17 = 0;
			}
		LABEL_42:
			v20 = v41;
			v21 = v43;
			v22 = L"RemoteCache";
			v23 = 260i64;
			v24 = v44;
			while (v23 != 1)
			{
				v25 = *v22++;
				v24 += 2;
				*((_WORD*)v24 - 1) = v25;
				--v23;
				if (!*v22)
				{
					v26 = *(v22 - 1);
					if (v26 != 47 && v26 != 92)
					{
						if (v23 == 1)
							break;
						*(_WORD*)v24 = 92;
						v24 += 2;
						--v23;
					}
					v27 = v43[0];
					if (v43[0])
					{
						while (v23 != 1)
						{
							++v21;
							*(_WORD*)v24 = v27;
							v24 += 2;
							v27 = *v21;
							--v23;
							if (!*v21)
								goto LABEL_52;
						}
					}
					else
					{
					LABEL_52:
						v28 = v41[0];
						if (!v41[0])
							break;
						if (v41[0] != 46)
						{
							if (v23 == 1)
								break;
							*(_WORD*)v24 = 46;
							v24 += 2;
							--v23;
						}
						do
						{
							if (v23 == 1)
								break;
							++v20;
							*(_WORD*)v24 = v28;
							v24 += 2;
							v28 = *v20;
							--v23;
						} while (*v20);
					}
					break;
				}
			}
			v29 = *(_QWORD*)&qword_140C63788;
			*(_WORD*)v24 = 0;
			if ((int)sub_14001B370(v42, 260i64, L"%s%s\\%s", v29 + 4244, *(_QWORD*)(v29 + 4896), v44) >= 0
				&& v42[0].m128i_i16[0])
			{
				v30 = v42;
				do
				{
					v31 = v30->m128i_i16[1] == 0;
					v30 = (__m128i*)((char*)v30 + 2);
				} while (!v31);
			}
			v38 = 0i64;
			v32 = sub_1401B5B50(*(__int64*)&qword_140C63788, v42, 2i64, 0, &v38);
			v33 = v38;
			v6 = v32;
			if (v32 >= 0)
			{
				v34 = *(_QWORD*)v38;
				v35 = *(_QWORD*)(v39 + 8);
				v36 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v35 + 16i64))(v35);
				v37 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v35 + 32i64))(v35);
				v6 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(v34 + 96))(v33, v37, v36);
			}
			if (v33)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
		}
		sub_14019E200(v40, (unsigned int)v6, 0);
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(*(_QWORD*)&qword_140C63788 + 4904i64) + 16i64))(
			*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4904i64),
			1i64);
		return (unsigned int)v6;
	}
	else
	{
		sub_14019E200(a2, 2147500036i64, 0);
		return 2147500036i64;
	}
}
// 1407AFCF4: conditional instruction was optimized away because rbp.8==0
// 1407AFCFD: conditional instruction was optimized away because rdi.8==0
// 1407AFD27: conditional instruction was optimized away because rdi.8==0
// 1407AFD67: conditional instruction was optimized away because r12.8==0
// 1407AFD70: conditional instruction was optimized away because rsi.8==0
// 1407AFD8C: conditional instruction was optimized away because rsi.8==0
// 1407AFE6E: conditional instruction was optimized away because r15.8!=0
// 140A47438: using guessed type wchar_t aSSS_1[8];
// 140B53978: using guessed type wchar_t aRemotecache_0[12];
// 1407AFBD0: using guessed type __m128i var_668[33];

