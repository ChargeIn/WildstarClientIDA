#include "../winhttp.h"

//----- (0000000140283670) ----------------------------------------------------
__int64 __fastcall sub_140283670(__int64 a1)
{
	__int64 v1; // r13
	unsigned int* v2; // rax
	__int64 v3; // rdx
	__int64 v4; // rcx
	int* v5; // rax
	_OWORD* v6; // rcx
	_OWORD* v7; // rcx
	int v8; // ebx
	int v9; // ebx
	__int64* v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // eax
	__int64* v15; // rbx
	unsigned int v16; // edi
	__int64 v17; // rax
	unsigned __int64 v18; // rsi
	unsigned __int64 v19; // r13
	__int64 v20; // rax
	const __m128i* v21; // rax
	__int64 v22; // rcx
	int v23; // r15d
	const wchar_t* v24; // rax
	int v25; // edi
	__int64 v26; // rdi
	DWORD v27; // r14d
	void* v28; // rax
	wchar_t* v29; // r12
	int v30; // r14d
	__int64 v31; // [rsp+20h] [rbp-49h]
	__int64 v32; // [rsp+30h] [rbp-39h]
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-29h] BYREF
	__int128 v34; // [rsp+48h] [rbp-21h]
	__int64(__fastcall * *v35)(); // [rsp+60h] [rbp-9h] BYREF
	__int128 v36; // [rsp+68h] [rbp-1h]
	__int64 v37; // [rsp+78h] [rbp+Fh]
	__int64 v38; // [rsp+D0h] [rbp+67h] BYREF
	__int64* pNumFonts; // [rsp+D8h] [rbp+6Fh] BYREF
	__int64 v40; // [rsp+E0h] [rbp+77h] BYREF
	__int64 v41; // [rsp+E8h] [rbp+7Fh] BYREF

	v38 = a1;
	v1 = a1;
	*(_DWORD*)(a1 + 180) = 0;
	v2 = (unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 720i64))(*(_QWORD*)(a1 + 16));
	LODWORD(pNumFonts) = 0;
	v3 = *v2;
	*(_DWORD*)(v1 + 184) = v3;
	v5 = sub_140288100(v4, v3, &pNumFonts);
	*(_QWORD*)(v1 + 224) = v5;
	*v5 = 255;
	*(_QWORD*)(*(_QWORD*)(v1 + 224) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(v1 + 224) + 16i64) = *(_QWORD*)(v1 + 224) + 176i64;
	*(_QWORD*)(*(_QWORD*)(v1 + 224) + 24i64) = *(_QWORD*)(v1 + 224) + 80i64;
	*(_QWORD*)(*(_QWORD*)(v1 + 224) + 32i64) = *(_QWORD*)(v1 + 224) + 144i64;
	*(_QWORD*)(*(_QWORD*)(v1 + 224) + 40i64) = *(_QWORD*)(v1 + 224) + 156i64;
	*(_QWORD*)(*(_QWORD*)(v1 + 224) + 48i64) = *(_QWORD*)(v1 + 224) + 320i64;
	*(_QWORD*)(*(_QWORD*)(v1 + 224) + 56i64) = *(_QWORD*)(v1 + 224) + 336i64;
	*(_QWORD*)(*(_QWORD*)(v1 + 224) + 64i64) = *(_QWORD*)(v1 + 224) + 160i64;
	*(_DWORD*)(v1 + 232) = 0;
	*(_QWORD*)(v1 + 248) = 0i64;
	*(_QWORD*)(v1 + 240) = 0i64;
	*(_QWORD*)(v1 + 256) = 0i64;
	v6 = *(_OWORD**)(*(_QWORD*)(v1 + 224) + 16i64);
	*v6 = xmmword_140C78390;
	v6[1] = xmmword_140C783A0;
	v6[2] = xmmword_140C783B0;
	v6[3] = xmmword_140C783C0;
	v7 = *(_OWORD**)(*(_QWORD*)(v1 + 224) + 16i64);
	v7[4] = xmmword_140C78390;
	v7[5] = xmmword_140C783A0;
	v7[6] = xmmword_140C783B0;
	v7[7] = xmmword_140C783C0;
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 224) + 16i64) + 128i64) = 1;
	v8 = (*(__int64(__fastcall**)(_QWORD, const wchar_t*, __int64))(**(_QWORD**)(v1 + 16) + 144i64))(
		*(_QWORD*)(v1 + 16),
		L"Shaders\\SpriteVS.sho",
		v1 + 400);
	if (v8 < 0
		|| (v8 = (*(__int64(__fastcall**)(_QWORD, const wchar_t*, __int64))(**(_QWORD**)(v1 + 16) + 152i64))(
			*(_QWORD*)(v1 + 16),
			L"Shaders\\SpritePS.sho",
			v1 + 408),
			v8 < 0))
	{
		v38 = 0x141DE3A88i64;
		sub_1401A3130(14, 2, &v38, (unsigned int)v8, *(_QWORD*)(v1 + 400), *(_QWORD*)(v1 + 408));
		return (unsigned int)v8;
	}
	else
	{
		v9 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v1 + 16) + 192i64))(*(_QWORD*)(v1 + 16), v1 + 456);
		if (v9 >= 0)
		{
			v11 = *(__int64**)(v1 + 456);
			*((_QWORD*)&v36 + 1) = sub_140283C30;
			v12 = *v11;
			LODWORD(v35) = 0;
			*(_QWORD*)&v36 = v1;
			v37 = 0i64;
			(*(void(__fastcall**)(__int64*, __int64, __int64(__fastcall***)()))(v12 + 24))(v11, 1i64, &v35);
			pNumFonts = 0i64;
			v14 = sub_1401B54E0(v13, (__m128i*)L"UI\\Fonts\\*.ttf", 2i64, &pNumFonts);
			v15 = pNumFonts;
			v16 = v14;
			if (v14 >= 0)
			{
				v17 = (*(__int64(__fastcall**)(__int64*))(*pNumFonts + 16))(pNumFonts);
				v18 = 0i64;
				if (v17)
				{
					v19 = v17;
					do
					{
						v20 = *v15;
						v40 = 0i64;
						v21 = (const __m128i*)(*(__int64(__fastcall**)(__int64*, unsigned __int64))(v20 + 24))(v15, v18);
						v23 = sub_1401B6D00(v22, v21, &v40);
						if (v23 >= 0)
						{
							v26 = v40;
							v27 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v40 + 16i64))(v40);
							v28 = (void*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 32i64))(v26);
							if (!AddFontMemResourceEx(v28, v27, 0i64, (DWORD*)&pNumFonts))
							{
								v29 = (*(__int64(__fastcall**)(__int64*, unsigned __int64))(*v15 + 24))(v15, v18)
									? (wchar_t*)(*(__int64(__fastcall**)(__int64*, unsigned __int64))(*v15 + 24))(v15, v18)
									: L"na";
								v40 = 0x141DE3B10i64;
								LODWORD(v32) = GetLastError();
								LODWORD(v31) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 16i64))(v26);
								sub_1401A3130(14, 2, &v40, (unsigned int)v23, v31, v29, v32);
								*(_QWORD*)&v34 = 0i64;
								TlsValue = &off_140B5E648;
								*((_QWORD*)&v34 + 1) = TlsGetValue(dwTlsIndex);
								TlsSetValue(dwTlsIndex, &TlsValue);
								v35 = TlsValue;
								v40 = 0x141DE3AE0i64;
								v36 = v34;
								v30 = sub_1401971E0(&dword_140C8A3A0, 14, &v40, &v35);
								TlsValue = &off_140B5E648;
								TlsSetValue(dwTlsIndex, *((LPVOID*)&v34 + 1));
								if (v30)
									DebugBreak();
							}
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
						}
						else
						{
							if ((*(__int64(__fastcall**)(__int64*, unsigned __int64))(*v15 + 24))(v15, v18))
								v24 = (const wchar_t*)(*(__int64(__fastcall**)(__int64*, unsigned __int64))(*v15 + 24))(v15, v18);
							else
								v24 = L"na";
							v41 = 0x141DE3A28i64;
							sub_1401A3130(14, 2, &v41, (unsigned int)v23, v18, v19, v24);
							TlsValue = &off_140B5E648;
							*(_QWORD*)&v34 = 0i64;
							*((_QWORD*)&v34 + 1) = TlsGetValue(dwTlsIndex);
							TlsSetValue(dwTlsIndex, &TlsValue);
							v35 = TlsValue;
							v36 = v34;
							v41 = 0x141DE39F8i64;
							v25 = sub_1401971E0(&dword_140C8A3A4, 14, &v41, &v35);
							TlsValue = &off_140B5E648;
							TlsSetValue(dwTlsIndex, *((LPVOID*)&v34 + 1));
							if (v25)
								DebugBreak();
							if (v40)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 8i64))(v40);
						}
						++v18;
					} while (v18 < v19);
					v1 = v38;
				}
				*(_DWORD*)(v1 + 176) = 0;
				v16 = 0;
			}
			else
			{
				v38 = 0x141DE3A48i64;
				sub_1401A3130(14, 2, &v38, (unsigned int)v14);
			}
			if (v15)
				(*(void(__fastcall**)(__int64*))(*v15 + 8))(v15);
			return v16;
		}
		else
		{
			v38 = 0x141DE3A78i64;
			sub_1401A3130(14, 2, &v38, (unsigned int)v9);
			return (unsigned int)v9;
		}
	}
}
// 1402836B3: variable 'v4' is possibly undefined
// 1402838BE: variable 'v13' is possibly undefined
// 140283947: variable 'v22' is possibly undefined
// 140283AE0: variable 'v31' is possibly undefined
// 140283AE0: variable 'v32' is possibly undefined
// 140AE56C4: using guessed type wchar_t aNa[3];
// 140AE5734: using guessed type wchar_t aNa_0[3];
// 140AE9360: using guessed type wchar_t aShadersSpritev[21];
// 140AE9418: using guessed type wchar_t aUiFontsTtf[15];
// 140AE9460: using guessed type wchar_t aShadersSpritep[21];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C78390: using guessed type __int128 xmmword_140C78390;
// 140C783A0: using guessed type __int128 xmmword_140C783A0;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C8A3A0: using guessed type _DWORD dword_140C8A3A0;
// 140C8A3A4: using guessed type _DWORD dword_140C8A3A4;

