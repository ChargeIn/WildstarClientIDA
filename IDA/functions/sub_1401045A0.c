#include "../winhttp.h"

//----- (00000001401045A0) ----------------------------------------------------
__int64 __fastcall sub_1401045A0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rsi
	__int64 i; // rdi
	__int64 j; // rdi
	__int64 k; // rdi
	__int64 m; // rdi
	__int64 n; // rdi
	__int64 v14; // rdi
	unsigned __int64 v15; // rcx
	__int64 v16; // r8
	__int64 v17; // rdx
	__int64 v18; // r8
	void(__fastcall * **v19)(_QWORD); // rbx
	const __m128i* v20; // rax
	__int64 v21; // r8
	__int64 v23; // rcx

	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 16i64))(a3);
	if (v5)
	{
		v6 = sub_1401A5AE0(v5, L"Sprites");
		if (v6)
		{
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			v8 = v7;
			if (v7)
			{
				qword_140C63668 = (__int64)a1;
				for (i = sub_1401A5AE0(v7, L"Folder"); i; i = sub_1401A5BC0(i, L"Folder"))
					sub_140104320(a1, i);
				for (j = sub_1401A5AE0(v8, L"Sprite"); j; j = sub_1401A5BC0(j, L"Sprite"))
					sub_140104210(a1, j);
				for (k = sub_1401A5AE0(v8, L"Composite"); k; k = sub_1401A5BC0(k, L"Composite"))
					sub_140104500(a1, k);
				for (m = sub_1401A5AE0(v8, L"AutoButton"); m; m = sub_1401A5BC0(m, L"AutoButton"))
					sub_140104460(a1, m);
				for (n = sub_1401A5AE0(v8, L"AutoIconButton"); n; n = sub_1401A5BC0(n, L"AutoIconButton"))
					sub_1401043C0(a1, n);
				v14 = qword_140C63650;
				qword_140C63668 = 0i64;
				if (a2)
				{
					if (*(_QWORD*)(qword_140C63650 + 1848))
					{
						v15 = 0i64;
						do
							++v15;
						while (aWhitefill[v15]);
						v16 = *(_QWORD*)(qword_140C63650 + 1872);
						if ((*(_QWORD*)(qword_140C63650 + 1880) - v16) >> 1 == v15)
						{
							v17 = 0i64;
							if (!v15)
								return 0i64;
							v18 = v16 - (_QWORD)L"WhiteFill";
							while (*(wchar_t*)((char*)&aWhitefill[v17] + v18) == aWhitefill[v17])
							{
								if (++v17 >= v15)
									return 0i64;
							}
						}
					}
					if (((*(_QWORD*)(a2 + 344) - *(_QWORD*)(a2 + 336)) & 0xFFFFFFFFFFFFFFF8ui64) != 0)
					{
						v19 = (void(__fastcall***)(_QWORD))sub_1400FDFE0(a2 + 288, (__int64)L"WhiteFill");
						if (v19)
							goto LABEL_28;
						v20 = sub_1407DF6E0((const __m128i*)L"WhiteFill", stru_1409D5204);
						if (v20)
						{
							v19 = (void(__fastcall***)(_QWORD))sub_1400FDFE0(a2 + 288, (__int64)v20->m128i_i64 + 2);
						LABEL_28:
							if (v19)
							{
								v21 = 0i64;
								while (aWhitefill[++v21] != 0)
									;
								sub_14001C480(v14 + 1864, (int*)L"WhiteFill", (int*)&aWhitefill[v21]);
							}
							goto LABEL_33;
						}
					}
					v19 = 0i64;
				LABEL_33:
					if (v19 != *(void(__fastcall****)(_QWORD))(v14 + 1848))
					{
						if (v19)
							(**v19)(v19);
						v23 = *(_QWORD*)(v14 + 1848);
						if (v23)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
							*(_QWORD*)(v14 + 1848) = 0i64;
						}
						*(_QWORD*)(v14 + 1848) = v19;
					}
				}
			}
		}
	}
	return 0i64;
}
// 1401047E2: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1409D5204: using guessed type __m128i stru_1409D5204[10];
// 140A1A2C8: using guessed type wchar_t aComposite[10];
// 140A1A408: using guessed type wchar_t aSprite_0[7];
// 140A1A468: using guessed type wchar_t aAutobutton[11];
// 140A1A480: using guessed type wchar_t aAutoiconbutton[15];
// 140A1A4A0: using guessed type wchar_t aFolder[7];
// 140A1AA30: using guessed type wchar_t aWhitefill[10];
// 140A31720: using guessed type wchar_t aSprites[8];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63668: using guessed type __int64 qword_140C63668;

