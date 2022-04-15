#include "../winhttp.h"

//----- (0000000140538FD0) ----------------------------------------------------
__int64 __fastcall sub_140538FD0(__int64 a1)
{
	__int64 result; // rax
	int* v3; // rax
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // rax
	int* v7; // rax
	int* v8; // rax
	__int64 v9; // rax
	int* v10; // rax
	int** v11; // rax
	__int64 v12; // rcx
	__m128i* v13; // rax
	bool v14; // zf
	__m128i* v15; // rax
	int v16; // esi
	int v17; // ebx
	__int128* v18; // rdx
	__int64 v19; // rcx
	__int32 v20; // eax
	__m128i v21; // xmm1
	__m128i v22; // xmm2
	__int64 v23; // rcx
	__m128i v24; // xmm3
	__m128i v25; // xmm4
	unsigned int v26; // edx
	__int64 v27; // rsi
	__int64 v28; // rcx
	__int64 v29; // rbx
	__int64* v30; // rax
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 i; // rbx
	__int64 v34; // rcx
	__int64 v35; // rax
	__int64 v36; // rcx
	__int64 v37; // [rsp+20h] [rbp-E0h]
	__int128 v38; // [rsp+40h] [rbp-C0h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+50h] [rbp-B0h]
	__int64 v40[4]; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v41[3]; // [rsp+80h] [rbp-80h] BYREF
	__m128i v42; // [rsp+B0h] [rbp-50h] BYREF
	__m128i v43; // [rsp+C0h] [rbp-40h]
	_OWORD v44[2]; // [rsp+D0h] [rbp-30h]
	int v45; // [rsp+F0h] [rbp-10h]
	__m128i v46; // [rsp+110h] [rbp+10h]
	__m128i v47; // [rsp+120h] [rbp+20h]
	int v48; // [rsp+15Ch] [rbp+5Ch]
	__int64(__fastcall * *TlsValue)(); // [rsp+160h] [rbp+60h] BYREF
	__int64 v50; // [rsp+168h] [rbp+68h]
	LPVOID Value; // [rsp+170h] [rbp+70h]
	_BYTE v52[12]; // [rsp+178h] [rbp+78h] BYREF
	int v53; // [rsp+184h] [rbp+84h]
	__m128i v54[33]; // [rsp+190h] [rbp+90h] BYREF

	result = sub_14040AD50();
	if ((int)result >= 0)
	{
		result = sub_140631390();
		if ((int)result >= 0)
		{
			sub_140008410(a1 + 29648);
			sub_1400E1EA0(
				qword_140C63650,
				*(__int64(__fastcall****)(_QWORD))(a1 + 31616),
				*(__int64(__fastcall****)(_QWORD))(a1 + 31624));
			v3 = sub_14018B280(6096i64, 0);
			v4 = v3 ? sub_1404218A0((__int64)v3) : 0i64;
			*(_QWORD*)(a1 + 29504) = v4;
			result = sub_1400E4E80(v4, 0);
			if ((int)result >= 0)
			{
				sub_1405B3A40();
				v5 = sub_14018B280(1i64, 0);
				if (v5)
					v6 = sub_1406F26C0((__int64)v5, *(_QWORD*)(a1 + 29504) + 384i64);
				else
					v6 = 0i64;
				*(_QWORD*)(a1 + 29680) = v6;
				v7 = sub_14018B280(32i64, 0);
				if (v7)
				{
					*(_QWORD*)v7 = -1i64;
					*((_QWORD*)v7 + 2) = 0i64;
					*((_QWORD*)v7 + 1) = 0i64;
					*((_BYTE*)v7 + 24) = 0;
				}
				else
				{
					v7 = 0i64;
				}
				*(_QWORD*)(a1 + 29544) = v7;
				v8 = sub_14018B280(80i64, 0);
				if (v8)
					v9 = sub_1407772F0(v8, *(_QWORD*)(a1 + 29504));
				else
					v9 = 0i64;
				*(_QWORD*)(a1 + 29520) = v9;
				v10 = sub_14018B280(392i64, 0);
				if (v10)
					v11 = sub_14050A3C0((int**)v10);
				else
					v11 = 0i64;
				v12 = *(_QWORD*)(a1 + 29504) + 384i64;
				*(_QWORD*)(a1 + 29536) = v11;
				sub_1400F2440(v12, (__int64)"DemoSummary", (__int64)sub_140513C50);
				if ((int)sub_14001B370(
					v54,
					260i64,
					L"%s\\%s\\%s\\%s",
					*(_QWORD*)&qword_140C63788 + 2684i64,
					L"NCSOFT",
					*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
					L"Addons.xml") >= 0
					&& v54[0].m128i_i16[0])
				{
					v13 = v54;
					do
					{
						v14 = v13->m128i_i16[1] == 0;
						v13 = (__m128i*)((char*)v13 + 2);
					} while (!v14);
				}
				sub_1401380C0(*(_QWORD*)(a1 + 29504) + 2496i64, v54);
				sub_1401396E0(*(_QWORD*)(a1 + 29504) + 2496i64, (int*)L"UI", (int*)L"Addons", 1);
				sub_1401396E0(*(_QWORD*)(a1 + 29504) + 2496i64, (int*)L"UI", dword_1409F2214, 1);
				if ((int)sub_14001B370(
					v54,
					260i64,
					L"%s\\%s\\%s\\%s",
					*(_QWORD*)&qword_140C63788 + 2684i64,
					L"NCSOFT",
					*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
					L"Addons") >= 0
					&& v54[0].m128i_i16[0])
				{
					v15 = v54;
					do
					{
						v14 = v15->m128i_i16[1] == 0;
						v15 = (__m128i*)((char*)v15 + 2);
					} while (!v14);
				}
				sub_1401396E0(*(_QWORD*)(a1 + 29504) + 2496i64, v54[0].m128i_i32, dword_1409F21FC, 0);
				v16 = sub_1404D6E30(a1);
				if (v16 >= 0)
				{
					sub_140139AE0(*(_QWORD*)(a1 + 29504) + 2496i64, (__int64)v52);
					*(_QWORD*)(a1 + 29528) = 0i64;
					*(_DWORD*)v52 = 0;
					*(_QWORD*)&v52[4] = 1065353216i64;
					v53 = 1065353216;
					TlsValue = (__int64(__fastcall**)())0xFFFFFEB40000000Ai64;
					v50 = 0xFFFFFEB400000120ui64;
					v45 = 0;
					v18 = (__int128*)&v42;
					v19 = 0i64;
					do
					{
						v20 = *(_DWORD*)&v52[v19 * 4];
						++v19;
						v18 = (__int128*)((char*)v18 + 8);
						v43.m128i_i32[v19 + 3] = v20;
						*(_DWORD*)((char*)v44 + v19 * 4 + 12) = *(int*)((char*)&v48 + v19 * 4);
						*((_QWORD*)v18 - 1) = 0i64;
					} while (v19 < 4);
					v21 = v42;
					v22 = v43;
					v23 = *(_QWORD*)(a1 + 29504) + 2944i64;
					v24 = (__m128i)v44[0];
					v25 = (__m128i)v44[1];
					v26 = v45 & 0xFFFFFCFF | 0x100;
					*(_OWORD*)v23 = v41[2];
					v46 = v21;
					v47 = v22;
					*(_QWORD*)(v23 + 16) = v21.m128i_i64[0];
					*(_QWORD*)(v23 + 32) = v22.m128i_i64[0];
					*(_QWORD*)(v23 + 48) = v24.m128i_i64[0];
					*(_QWORD*)(v23 + 24) = _mm_srli_si128(v21, 8).m128i_u64[0];
					*(_QWORD*)(v23 + 40) = _mm_srli_si128(v22, 8).m128i_u64[0];
					*(_QWORD*)(v23 + 56) = _mm_srli_si128(v24, 8).m128i_u64[0];
					*(_QWORD*)(v23 + 64) = v25.m128i_i64[0];
					*(_QWORD*)(v23 + 72) = _mm_srli_si128(v25, 8).m128i_u64[0];
					*(_DWORD*)(v23 + 80) = v26;
					v27 = *(_QWORD*)(a1 + 29504);
					v28 = *(_QWORD*)(v27 + 368);
					v29 = *(_QWORD*)(v28 + 24);
					v30 = sub_14010E2E0(*(_QWORD**)(v28 + 16), v29, L"CRB_TooltipBasic");
					if (v30 == (__int64*)v29)
						v31 = 0i64;
					else
						v31 = *v30;
					*(_QWORD*)(v27 + 2936) = v31;
					sub_1400EC4B0(*(_QWORD*)(a1 + 29504), (int*)L"cfconfig", (__int64)sub_14053B480, *(_QWORD*)(a1 + 29504));
					sub_1400E74A0(*(_QWORD*)(a1 + 29504), 0.0);
					if (*(_QWORD*)qword_140C65B80)
						sub_1405FBBA0(*(_QWORD*)qword_140C65B80);
					v32 = *(_QWORD*)(a1 + 29504);
					LODWORD(v37) = *(_DWORD*)(v32 + 84);
					sub_1400EA3E0(v32, "ResolutionChanged", byte_1409EC364, *(unsigned int*)(v32 + 80), v37);
					for (i = *(_QWORD*)(a1 + 28464); i; i = *(_QWORD*)(i + 96))
					{
						v34 = qword_140C65898;
						*(_DWORD*)(i + 6312) = 1;
						v35 = *(_QWORD*)(v34 + 120);
						if (v35 && *(_DWORD*)(i + 8) == *(_DWORD*)(v35 + 8))
							*(_DWORD*)(v34 + 28568) = 1;
						sub_1400EA3E0(*(_QWORD*)(v34 + 29504), "UnitCreated", L"U", *(unsigned int*)(i + 8));
					}
					if (qword_140C65970)
						sub_14056FAD0();
					sub_1405DDF70((_DWORD*)(a1 + 26680));
					sub_1404B49A0(v36);
					return 0i64;
				}
				else
				{
					v50 = 0i64;
					TlsValue = &off_140B5E648;
					Value = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &TlsValue);
					v40[0] = (__int64)TlsValue;
					v40[1] = v50;
					*(_QWORD*)&v38 = &off_140B5E648;
					*((_QWORD*)&v38 + 1) = L"Result";
					v40[2] = (__int64)Value;
					lpTlsValue[0] = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v38);
					LODWORD(lpTlsValue[1]) = v16;
					*(_QWORD*)&v38 = &off_140B5E640;
					v41[1] = *(_OWORD*)lpTlsValue;
					*(_QWORD*)v52 = 0x141E0EB98i64;
					v41[0] = v38;
					v17 = sub_1401971E0(dword_140C8AEF8, 5, v52, v41, v40);
					*(_QWORD*)&v38 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue[0]);
					TlsValue = &off_140B5E648;
					TlsSetValue(dwTlsIndex, Value);
					if (v17)
						DebugBreak();
					return (unsigned int)v16;
				}
			}
		}
	}
	return result;
}
// 14053957A: variable 'v37' is possibly undefined
// 140539605: variable 'v36' is possibly undefined
// 1409EC364: using guessed type _BYTE byte_1409EC364[40];
// 1409EDE34: using guessed type wchar_t aU_10[2];
// 1409F21FC: using guessed type int dword_1409F21FC[6];
// 1409F2214: using guessed type int dword_1409F2214[6];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140B144C0: using guessed type wchar_t aCfconfig[9];
// 140B144D4: using guessed type wchar_t aUi_3[3];
// 140B14530: using guessed type wchar_t aCrbTooltipbasi_2[17];
// 140B14598: using guessed type wchar_t aAddons_5[7];
// 140B145A8: using guessed type wchar_t aAddonsXml_0[11];
// 140B145C0: using guessed type wchar_t aUi_2[3];
// 140B14768: using guessed type wchar_t aAddons_6[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C8AEF8: using guessed type _DWORD dword_140C8AEF8[2];
// 140538FD0: using guessed type __m128i var_230[33];

