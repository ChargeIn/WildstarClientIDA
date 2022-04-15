#include "../winhttp.h"

//----- (0000000140770490) ----------------------------------------------------
__int64 __fastcall sub_140770490(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rbp
	__int64 v4; // rsi
	void(__fastcall * **v5)(_QWORD); // rsi
	__int64 i; // rcx
	__int64 v7; // rsi
	void(__fastcall * **v8)(_QWORD); // rsi

	sub_1401095E0(a1);
	sub_1401095E0(a1 + 48);
	v2 = 0i64;
	*(_OWORD*)(a1 + 96) = xmmword_140B7B240;
	*(_OWORD*)(a1 + 112) = xmmword_140B7B240;
	*(_DWORD*)(a1 + 128) = 0;
	sub_1401095E0(a1 + 136);
	sub_1401095E0(a1 + 184);
	if (qword_140C65898)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29504);
		if (v3)
		{
			v4 = *(_QWORD*)a1;
			if (!*(_QWORD*)a1 || !sub_14002C740(a1 + 16, L"MiniMapObject"))
			{
				if (aMinimapobject[0])
				{
					v5 = (void(__fastcall***)(_QWORD))sub_140108E80(v3 + 240, (const __m128i*)L"MiniMapObject");
					if (v5)
					{
						for (i = 0i64; aMinimapobject[i]; ++i)
							;
						sub_14001C480(a1 + 16, (int*)L"MiniMapObject", (int*)&aMinimapobject[i]);
					}
					sub_1401097F0((_QWORD*)a1, v5);
				}
				else if (v4)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
					*(_QWORD*)a1 = 0i64;
				}
			}
			v7 = *(_QWORD*)(a1 + 48);
			if (!v7 || !sub_14002C740(a1 + 64, L"MiniMapObjectEdge"))
			{
				if (aMinimapobjecte[0])
				{
					v8 = (void(__fastcall***)(_QWORD))sub_140108E80(v3 + 240, (const __m128i*)L"MiniMapObjectEdge");
					if (v8)
					{
						if (aMinimapobjecte[0])
						{
							do
								++v2;
							while (aMinimapobjecte[v2]);
						}
						sub_14001C480(a1 + 64, (int*)L"MiniMapObjectEdge", (int*)&aMinimapobjecte[v2]);
					}
					sub_1401097F0((_QWORD*)(a1 + 48), v8);
				}
				else if (v7)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
					*(_QWORD*)(a1 + 48) = 0i64;
				}
			}
		}
	}
	return a1;
}
// 140B4F080: using guessed type wchar_t aMinimapobjecte[18];
// 140B4F0A8: using guessed type wchar_t aMinimapobject[14];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;

