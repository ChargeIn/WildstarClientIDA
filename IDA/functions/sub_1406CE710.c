#include "../winhttp.h"

//----- (00000001406CE710) ----------------------------------------------------
char __fastcall sub_1406CE710(__int64 a1, float a2)
{
	unsigned int v3; // edi
	__int64 v4; // rax
	unsigned __int64 v5; // rcx
	__m128i* v6; // r8
	unsigned __int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rsi
	wchar_t* v10; // r14
	void(__fastcall * **v11)(_QWORD); // rsi
	__int64 v12; // r8
	signed int v13; // eax
	bool v14; // zf
	__int64 v15; // rsi
	__int64 v16; // rax
	unsigned __int64 v17; // rcx
	__int64 v18; // rsi
	__int64 v19; // rsi
	__int64 v20; // r8
	__int64 v21; // rdx
	__int64 v22; // rsi
	__int64 v23; // rdi
	_WORD* v24; // rdx

	if (*(_DWORD*)(a1 + 2252))
	{
		v3 = *(_DWORD*)(a1 + 2208);
		if (v3 && *(_QWORD*)(a1 + 2240))
		{
			if (!sub_140444550(qword_140C658F0, v3) || (v4 = sub_1402096E0(v3)) == 0)
			{
				*(_QWORD*)(a1 + 2208) = 0i64;
				*(_QWORD*)(a1 + 2216) = 15i64;
				*(_QWORD*)(a1 + 2232) = 0i64;
				*(_QWORD*)(a1 + 2240) = 0i64;
				*(_DWORD*)(a1 + 2248) = 0;
				*(_DWORD*)(a1 + 2260) = 0;
				*(_DWORD*)(a1 + 2252) = 1;
				sub_1400D42F0(a1, 0, 0, 4.0);
				goto LABEL_82;
			}
			v5 = *(_QWORD*)(v4 + 184);
			if (!v5 || v5 > qword_140C3FE70 || (v6 = (__m128i*)(qword_140C3FE68 + v5)) == 0i64 || !v6->m128i_i16[0])
			{
				v7 = *(_QWORD*)(v4 + 192);
				v6 = 0i64;
				if (v7 && v7 <= qword_140C3FE70)
					v6 = (__m128i*)(qword_140C3FE68 + v7);
			}
			v8 = *(_QWORD*)(a1 + 32);
			if (!v8)
				goto LABEL_82;
			goto LABEL_14;
		}
		if (*(_DWORD*)(a1 + 2212) && *(_QWORD*)(a1 + 2240))
		{
			v9 = *(_QWORD*)(a1 + 32);
			if (!v9)
				goto LABEL_82;
			v10 = L"Icon_ItemMisc_UI_Item_Parchment";
			if (*(_QWORD*)(a1 + 2144))
			{
				if (sub_14002C740(a1 + 2160, L"Icon_ItemMisc_UI_Item_Parchment"))
					goto LABEL_82;
			}
			v11 = (void(__fastcall***)(_QWORD))sub_140108E80(v9 + 240, (const __m128i*)L"Icon_ItemMisc_UI_Item_Parchment");
			if (!v11)
				goto LABEL_72;
			v12 = 0i64;
			do
				v14 = aIconItemmiscUi[++v12] == 0;
			while (!v14);
			goto LABEL_71;
		}
		v13 = *(_DWORD*)(a1 + 2216);
		v14 = v13 == 15;
		if (v13 < 15)
		{
			if (*(_QWORD*)(a1 + 2240))
			{
				if (v13 == 1)
				{
					v15 = *(_QWORD*)(a1 + 32);
					if (!v15)
						goto LABEL_82;
					v10 = L"sprLargeCashPlatinum";
					if (*(_QWORD*)(a1 + 2144))
					{
						if (sub_14002C740(a1 + 2160, L"sprLargeCashPlatinum"))
							goto LABEL_82;
					}
					v11 = (void(__fastcall***)(_QWORD))sub_140108E80(v15 + 240, (const __m128i*)L"sprLargeCashPlatinum");
					if (!v11)
						goto LABEL_72;
					v12 = 0i64;
					do
						v14 = aSprlargecashpl[++v12] == 0;
					while (!v14);
					goto LABEL_71;
				}
				v16 = sub_1401FA4A0(v13);
				if (v16)
				{
					v17 = *(_QWORD*)(v16 + 24);
					if (v17)
					{
						if (v17 <= qword_140C3FE70)
							v6 = (__m128i*)(v17 + qword_140C3FE68);
						else
							v6 = 0i64;
					}
					else
					{
						v6 = 0i64;
					}
					v8 = *(_QWORD*)(a1 + 32);
					if (!v8)
						goto LABEL_82;
				LABEL_14:
					sub_140109710((__int64*)(a1 + 2144), v8 + 240, v6, 0);
					goto LABEL_82;
				}
				v18 = *(_QWORD*)(a1 + 32);
				if (!v18)
					goto LABEL_82;
				v10 = L"Icon_ItemMisc_bag_0004";
				if (*(_QWORD*)(a1 + 2144))
				{
					if (sub_14002C740(a1 + 2160, L"Icon_ItemMisc_bag_0004"))
						goto LABEL_82;
				}
				v11 = (void(__fastcall***)(_QWORD))sub_140108E80(v18 + 240, (const __m128i*)L"Icon_ItemMisc_bag_0004");
				if (v11)
				{
					v12 = 0i64;
					do
						v14 = aIconItemmiscBa[++v12] == 0;
					while (!v14);
				LABEL_71:
					sub_14001C480(a1 + 2160, (int*)v10, (int*)&v10[v12]);
					goto LABEL_72;
				}
				goto LABEL_72;
			}
			v14 = v13 == 15;
		}
		if (v14 && *(_DWORD*)(a1 + 2220) == 1 && *(_QWORD*)(a1 + 2240))
		{
			v19 = *(_QWORD*)(a1 + 32);
			if (!v19)
				goto LABEL_82;
			v10 = L"Icon_Windows_UI_CRB_Coin_War";
			if (*(_QWORD*)(a1 + 2144))
			{
				if (sub_14002C740(a1 + 2160, L"Icon_Windows_UI_CRB_Coin_War"))
					goto LABEL_82;
			}
			v11 = (void(__fastcall***)(_QWORD))sub_140108E80(v19 + 240, (const __m128i*)L"Icon_Windows_UI_CRB_Coin_War");
			if (!v11)
				goto LABEL_72;
			v12 = 0i64;
			do
				v14 = aIconWindowsUiC_0[++v12] == 0;
			while (!v14);
			goto LABEL_71;
		}
		v20 = *(_QWORD*)(a1 + 2224);
		if (v20)
		{
			v21 = *(_QWORD*)(a1 + 32);
			if (v21)
				sub_140109710((__int64*)(a1 + 2144), v21 + 240, **(__m128i***)(v20 + 8), 0);
			goto LABEL_82;
		}
		if (!*(_DWORD*)(a1 + 2236))
		{
			if (*(_DWORD*)(a1 + 2232))
			{
				if (!*(_QWORD*)(a1 + 32))
					goto LABEL_82;
				v23 = *(_QWORD*)(a1 + 2144);
				if (!v23)
					goto LABEL_82;
				v24 = &unk_1409F7994;
			}
			else
			{
				if (!*(_QWORD*)(a1 + 32))
					goto LABEL_82;
				v23 = *(_QWORD*)(a1 + 2144);
				if (!v23)
					goto LABEL_82;
				v24 = &unk_1409F7984;
			}
			if (!sub_14002C740(a1 + 2160, v24))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
				*(_QWORD*)(a1 + 2144) = 0i64;
			}
			goto LABEL_82;
		}
		v22 = *(_QWORD*)(a1 + 32);
		if (!v22
			|| (v10 = L"Icon_ItemMisc_UI_Item_Parchment", *(_QWORD*)(a1 + 2144))
			&& sub_14002C740(a1 + 2160, L"Icon_ItemMisc_UI_Item_Parchment"))
		{
		LABEL_82:
			*(_DWORD*)(a1 + 2252) = 0;
			return sub_140131130(a1, a2);
		}
		v11 = (void(__fastcall***)(_QWORD))sub_140108E80(v22 + 240, (const __m128i*)L"Icon_ItemMisc_UI_Item_Parchment");
		if (v11)
		{
			v12 = 0i64;
			do
				v14 = aIconItemmiscUi_0[++v12] == 0;
			while (!v14);
			goto LABEL_71;
		}
	LABEL_72:
		sub_1401097F0((_QWORD*)(a1 + 2144), v11);
		goto LABEL_82;
	}
	return sub_140131130(a1, a2);
}
// 140B3ABE0: using guessed type wchar_t aIconItemmiscUi[32];
// 140B3AD58: using guessed type wchar_t aIconItemmiscBa[23];
// 140B3AD90: using guessed type wchar_t aIconItemmiscUi_0[32];
// 140B3ADD0: using guessed type wchar_t aIconWindowsUiC_0[29];
// 140B3AE10: using guessed type wchar_t aSprlargecashpl[21];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C658F0: using guessed type __int64 qword_140C658F0;

